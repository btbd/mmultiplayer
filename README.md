# Mirror's Edge Multiplayer Mod

[![GitHub release](https://img.shields.io/github/release/btbd/mmultiplayer.svg)](https://github.com/btbd/mmultiplayer/releases/latest)

## Setup

1. Download the latest release from <a href="https://github.com/btbd/mmultiplayer/releases/latest">here</a> and extract it into any directory
2. Run `MMultiplayer.exe`
3. Run Mirror's Edge

When you first run the Multiplayer Mod, you may see <a href="http://i.imgur.com/iXNHhYI.png">this message</a>. If you do, click "More info" then "Run anyway".

You may also see <a href="http://i.imgur.com/vFdkwbj.png">this message</a>. If you do, select both private and public networks, then click "Allow access".

## Usage

### Keybinds

Press your chat keybind to open the chat.

`/` - Open chat with preceding forward slash for commands.

### Chat

Press `ESC` to exit. Press `ENTER` to send a message (pressing `ENTER` when the message is blank is equivalent to pressing `ESC`).

Use the left and right arrow keys to move the input cursor. Use the up and down arrow keys to go to previous messages or commands you have sent.

Supports `CTRL + C`, `CTRL + V`, and `CTRL + X`.

Putting a `/` as the first character in your message will execute your message as a command.
- For example: `/restartlevel` restarts your current level.
- `/tp <player>` teleports you to `<player>` or a player whose name includes `<player>` while ignoring case if they are on the same level as you.
	- For example, let's say there is only one other user in your room and his name is `John`. All of the following will have the same effect:
		- `/tp John`
		- `/tp john`
		- `/tp JO`
		- `/tp j`
- You can use `&` to perform multiple commands in one line.
	- For example: `/tdpause & fov 120` slows the in-game speed and sets your fov to 120.

#### Recording Commands

- `/rec begin` begins recording with the current character and name.
- `/rec end` stops recording.
- `/rec list` lists the current recordings in the chat (the leading number is the recording index).
- `/rec play <index>` plays the recording at `<index>`. Use `/rec play all` to play all recordings.
- `/rec pause <index>` pauses the playing recording at `<index>`. Use `/rec pause all` to pause all playing recordings.
- `/rec unpause <index>` unpauses the playing recording at `<index>`. Use `/rec unpause all` to unpause all recordings.
- `/rec delete <index>` deletes the recording at `<index>`. Use `/rec delete all` to delete all recordings.

#### Dolly Camera Commands

- `/dolly add <frame>` adds a dolly camera marker at your current position and rotation at `<frame>`.
- `/dolly add` adds a dolly camera marker at your current position and rotation at the frame of the current recording.
- `/dolly play` plays the dolly camera.
- `/dolly reset` resets the dolly camera and all markers.
- `/dolly show` shows the dolly path (on by default).
- `/dolly hide` hides the dolly path.


#### Miscellaneous Commands

- `/speed <speed>` sets the engine speed to the specified value.

## UI Info

*Any changes you make will not be saved or applied until you click the `Apply` button.*

**Username** - Your username that is displayed in chat and in your nametag (no UTF-16 support and max 32 characters).

**Model** - The model other players see of you (it does not change your first person model). Ghost is the red semi-transparent Time-Trial ghost and is recommended for races.
																 
**Room Number** - The current number of the room you are in (max is `4294967295`). This is used so players can have private rooms.

**Collision** - If this is checked, other players' collision will affect you.

**Name Tags** - If this is checked, you will see nametags above other players.

**Chat** - If this is checked, you will see chat notifications without having the chat open.

**Spectator** - If this is checked, you will be completely invisible and have no effect on any of the other players in the room, but you will still be able to see the other players.

**Chat Bind** - Your chat keybind that you press in-game to open chat.

## Troubleshooting

The mod should inform you if an error occurs that prevents it from working properly. Possible error explanations:

- <b>Unable to load the sublevel</b>: 
	- `mp_actors.me1` is not in the same directory as `MMultiplayer.exe`.
	- `MMultiplayer.exe` has no permissions due to Windows or antivirus.
- <b>Unable to load the DLL</b>: 
	- `MDLL.dll` is not in the same directory as `MMultiplayer.exe`.
	- `MMultiplayer.exe` has no permissions due to Windows or antivirus.
- <b>Unable to acquire server IP</b>: 
	- `MMultiplayer.exe` is unable to acquire the server IP from the local DNS server.
	- Network connection is disabled.
	- `MMultiplayer.exe` has no network access through your router firewall or Windows firewall.
- <b>Check your network connection and make sure that port 3659 (UDP) is open</b>:
	- Port 3659 is not open for UDP in your router firewall.
	- `MMultiplayer.exe` has no access through your Windows firewall.
- <b>Unable to connect to server</b>:
	- Port 2783 is not open for TCP in your router firewall.
	- `MMultiplayer.exe` has no access through your Windows firewall.
- <i>Mirror's Edge continuously shows splash screen and then restarts</i>:
	- `MMultiplayer.exe` has no file permissions to copy `mp_actors.me1` or check its existence due to Windows or antivirus.
- <i>Chat screen doesn't show</i>:
	- `MMultiplayer.exe` and Mirror's Edge are running at different permissions. They need to be at the same permission level to communicate properly.
	- Keybind is not properly set.
- <i>Chat screen shows but unable to send message</i>:
	- `MMultiplayer.exe` and Mirror's Edge are running at different permissions. They need to be at the same permission level to communicate properly.
	- Network connection is disabled.
	
## Communicative Maps

You are able to create maps that communicate with the multiplayer mod (for co-op or gamemodes) by using Kismet and console events.

To send a message to other clients in the same room and level as you, execute this console command through Kismet:

```mpsend <command>```

For example, `mpsend killbots` kills bots for the other clients, and `mpsend ce test` causes the console event `test` for the other clients.

When the current user becomes host and a person joins/leaves the level, the console event `mphost` is caused to that client. All host migration is handled, so `mphost` should be treated as a message to broadcast data to the other clients. Only one user will be host on the current level and room.

### Events
`mphost` - Called when the current user receives host.

`mpjoin` - Called when a user joins the current room and level.

`mpleave` - Called when a user leaves the current room and level.

### Commands
`echo <msg>` - Echoes `<msg>` in the chat locally.

`broadcast <msg>` - Broadcasts `<msg>` to everyone in the current room. Use `{me}` for the current name of the user.

`mpsendto <index> <msg>` - Sends a Kismet command `<msg>` to the specified client at `<index>`.

## Contributing

### Client

#### Setup
Both the client DLL and EXE are written in C++ and compiled using Visual Studio 2015. To contribute you can download Visual Studio Community 2015 (or newer) or download a paid or trial version of Visual Studio, such as Visual Studio Professional 2015 (or newer) or Visual Studio Enterprise 2015 (or newer).

#### Testing
When compiling either the DLL or EXE to test your contributions, be sure that the runtime library is `Multi-threaded (/MT)` because all libraries should be statically linked to the compiled output. You can check the runtime library by going to:

```Project -> Properties -> Configuration Properties -> C/C++ -> Code Generation -> Runtime Library```

In addition, be sure the compiler configuration is set to `Release` instead of `Debug` for faster optimization, and be sure that the compiler configuration is set to `x86` because Mirror's Edge is a 32-bit application.

For the DLL, you will need to include the DirectX 9 Library. You can download the SDK from <a href="https://www.microsoft.com/en-us/download/confirmation.aspx?id=6812">here</a>.

Once downloaded and installed, open the DLL project in Visual Studio and go to `Project -> Project Properties -> Configuration Properties -> VC++ Directories` and add the SDK include and library directories accordingly.

### Server

The server is written in NodeJS. Currently, testing the server locally isn't easily supported, so it's not recommended to contribute to the sever. If the server needs something, make a pull request or issue.
