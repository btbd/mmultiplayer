package main

import (
	"encoding/json"
	"log"
	"net"
	"strings"
	"sync"
	"time"
	"unsafe"

	"github.com/google/uuid"
)

const (
	Port           = "5222"
	PacketSize     = 676
	CharacterFaith = iota
	CharacterKate
	CharacterCeleste
	CharacterAssaultCeleste
	CharacterJacknife
	CharacterMiller
	CharacterKreeg
	CharacterPersuitCop
	CharacterGhost
	CharacterMax
)

type Packet struct {
	Id uint32
}

type Client struct {
	Tcp        net.Conn
	Id         uint32
	Room       *Room
	Name       string
	Character  uint32
	Level      string
	LastPacket []byte
	LastSeen   time.Time
}

func (client *Client) SendMessage(msg interface{}) {
	r, err := json.Marshal(msg)
	if err != nil {
		return
	}

	client.Tcp.Write(append(r, 0))
}

type Room struct {
	Name    string
	Clients []*Client
}

func (room *Room) SendMessage(msg interface{}) {
	system.RLock()
	for _, c := range room.Clients {
		go c.SendMessage(msg)
	}
	system.RUnlock()
}

func (room *Room) SendMessageExcept(id uint32, msg interface{}) {
	system.RLock()
	for _, c := range room.Clients {
		if c.Id != id {
			go c.SendMessage(msg)
		}
	}
	system.RUnlock()
}

type System struct {
	sync.RWMutex
	Rooms map[string]*Room
}

func (system *System) GetClientById(id uint32) *Client {
	system.RLock()
	defer system.RUnlock()

	for _, r := range system.Rooms {
		for _, c := range r.Clients {
			if c.Id == id {
				return c
			}
		}
	}

	return nil
}

var system = System{Rooms: map[string]*Room{}}

func main() {
	go tcpListener()
	go udpListener()

	for {
		time.Sleep(2 * time.Second)

		system.RLock()
		for _, r := range system.Rooms {
			r.SendMessage(map[string]interface{}{
				"type": "ping",
			})
		}
		system.RUnlock()

		var newRooms = map[string]*Room{}

		system.Lock()
		for name, r := range system.Rooms {
			var newClients []*Client
			for _, c := range r.Clients {
				if time.Since(c.LastSeen) < 5*time.Second {
					newClients = append(newClients, c)
				} else {
					go r.SendMessageExcept(c.Id, map[string]interface{}{
						"type": "disconnect",
						"id":   c.Id,
					})

					log.Printf("timed out %x \"%s\"\n", c.Id, c.Name)
				}
			}

			if len(newClients) > 0 {
				r.Clients = newClients
				newRooms[name] = r
			} else {
				log.Printf("deleted room \"%s\"\n", name)
			}
		}

		system.Rooms = newRooms
		system.Unlock()
	}
}

func getTrimStringField(obj map[string]interface{}, field string) (string, bool) {
	v, ok := obj[field].(string)
	if !ok {
		return "", false
	}

	v = strings.TrimSpace(v)
	return v, v != ""
}

func tcpHandler(c net.Conn) {
	d := json.NewDecoder(c)

	for {
		var msg map[string]interface{}
		err := d.Decode(&msg)
		if err != nil {
			break
		}

		msgType, ok := getTrimStringField(msg, "type")
		if !ok {
			continue
		}

		switch msgType {
		case "connect":
			msgRoom, ok := getTrimStringField(msg, "room")
			if !ok {
				continue
			}

			msgName, ok := getTrimStringField(msg, "name")
			if !ok {
				continue
			}

			msgLevel, ok := getTrimStringField(msg, "level")
			if !ok {
				continue
			}

			msgCharacter, ok := msg["character"].(float64)
			if !ok || msgCharacter < 0 || msgCharacter >= CharacterMax {
				continue
			}

			// Add the client to the room (create a new room if necessary)
			system.Lock()
			room, ok := system.Rooms[msgRoom]
			if !ok {
				room = &Room{
					Name: msgRoom,
				}

				system.Rooms[msgRoom] = room
				log.Printf("created room \"%s\"\n", room.Name)
			}

			client := &Client{
				Tcp:        c,
				Id:         uuid.New().ID(),
				Room:       room,
				Name:       msgName,
				Character:  uint32(msgCharacter),
				Level:      strings.ToLower(msgLevel),
				LastPacket: nil,
				LastSeen:   time.Now(),
			}

			room.Clients = append(room.Clients, client)
			system.Unlock()

			// Tell the client their UUID
			client.SendMessage(map[string]interface{}{
				"type": "id",
				"id":   client.Id,
			})

			// Notify the other clients that a new client connected
			room.SendMessageExcept(client.Id, map[string]interface{}{
				"type":      "connect",
				"id":        client.Id,
				"name":      client.Name,
				"character": client.Character,
				"level":     client.Level,
			})

			// Tell the client the existing clients
			system.RLock()
			for _, c := range room.Clients {
				if c.Id != client.Id {
					go client.SendMessage(map[string]interface{}{
						"type":      "connect",
						"id":        c.Id,
						"name":      c.Name,
						"character": c.Character,
						"level":     c.Level,
					})
				}
			}
			system.RUnlock()

			log.Printf("room \"%s\": \"%s\" joined\n", room.Name, client.Name)
		case "name":
			id, ok := msg["id"].(float64)
			if !ok {
				continue
			}

			name, ok := getTrimStringField(msg, "name")
			if !ok {
				continue
			}

			client := system.GetClientById(uint32(id))
			if client == nil {
				continue
			}

			// Update the client's name and tell the other clients
			client.Name = name
			client.LastSeen = time.Now()
			client.Room.SendMessageExcept(client.Id, map[string]interface{}{
				"type": "name",
				"id":   client.Id,
				"name": client.Name,
			})
		case "chat":
			id, ok := msg["id"].(float64)
			if !ok {
				continue
			}

			body, ok := msg["body"].(string)
			if !ok {
				continue
			}

			client := system.GetClientById(uint32(id))
			if client == nil {
				continue
			}

			client.LastSeen = time.Now()
			client.Room.SendMessage(map[string]interface{}{
				"type": "chat",
				"body": client.Name + ": " + body,
			})
		case "level":
			id, ok := msg["id"].(float64)
			if !ok {
				continue
			}

			level, ok := msg["level"].(string)
			if !ok {
				continue
			}

			client := system.GetClientById(uint32(id))
			if client == nil {
				continue
			}

			client.Level = strings.ToLower(level)
			client.LastSeen = time.Now()
			client.Room.SendMessageExcept(client.Id, map[string]interface{}{
				"type":  "level",
				"id":    client.Id,
				"level": client.Level,
			})
		case "character":
			id, ok := msg["id"].(float64)
			if !ok {
				continue
			}

			character, ok := msg["character"].(float64)
			if !ok || character < 0 || character >= CharacterMax {
				continue
			}

			client := system.GetClientById(uint32(id))
			if client == nil {
				continue
			}

			client.Character = uint32(character)
			client.LastSeen = time.Now()
			client.Room.SendMessageExcept(client.Id, map[string]interface{}{
				"type":      "character",
				"id":        client.Id,
				"character": client.Character,
			})
		case "pong":
			id, ok := msg["id"].(float64)
			if !ok {
				continue
			}

			client := system.GetClientById(uint32(id))
			if client == nil {
				continue
			}

			client.LastSeen = time.Now()
		case "disconnect":
			id, ok := msg["id"].(float64)
			if !ok {
				continue
			}

			client := system.GetClientById(uint32(id))
			if client == nil {
				continue
			}

			var newClients []*Client
			room := client.Room

			// Remove the client from the room
			system.Lock()
			for _, c := range room.Clients {
				if c.Id != client.Id {
					newClients = append(newClients, c)
				}
			}

			room.Clients = newClients
			system.Unlock()

			// Notify the other clients who disconnected
			room.SendMessageExcept(client.Id, map[string]interface{}{
				"type": "disconnect",
				"id":   client.Id,
			})

			log.Printf("room \"%s\": \"%s\" disconnected\n", room.Name, client.Name)
		}
	}

	c.Close()
}

func tcpListener() {
	server, err := net.Listen("tcp4", ":"+Port)
	if err != nil {
		log.Fatalln(err)
	}

	log.Println("tcp listener started")

	for {
		c, err := server.Accept()
		if err != nil {
			continue
		}

		go tcpHandler(c)
	}
}

func udpListener() {
	server, err := net.ListenPacket("udp", ":"+Port)
	if err != nil {
		log.Fatalln(err)
	}

	log.Println("udp listener started")

	for {
		buf := make([]byte, 0xFFF)
		n, addr, err := server.ReadFrom(buf)
		if err != nil {
			continue
		}

		if n != PacketSize {
			continue
		}

		go func() {
			client := system.GetClientById((*Packet)(unsafe.Pointer(&buf[0])).Id)
			if client == nil {
				return
			}

			client.LastPacket = buf[:PacketSize]
			client.LastSeen = time.Now()

			// Respond with the last packet of every other client in the same room and level
			system.RLock()
			for _, c := range client.Room.Clients {
				if c.Id != client.Id && c.LastPacket != nil && c.Level == client.Level {
					server.WriteTo(c.LastPacket, addr)
				}
			}
			system.RUnlock()
		}()
	}
}
