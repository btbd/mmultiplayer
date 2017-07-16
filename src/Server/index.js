var clients = [];

var net = require("net");
var server = net.createServer(function(c) {
	var client = new Client(c);
	clients.push(client);
	
	console.log("connection");

	c.on("data", function(d) {
		d = d.toString();
		
		if (d.substring(0, 2) === "\rr") {
			client.room = parseInt(d.slice(2));
			updateClients();
		} else {
			for (var i = 0; i < clients.length; ++i) {
				if (clients[i].room === client.room) {
					clients[i].client.write(d + "\r" + "\x17");
				}
			}
		}
	});
	
	c.on("close", function(d) {
		for (var i = 0; i < clients.length; ++i) {
			if (clients[i].ip === client.ip) {
				clients.splice(i, 1);
			}
		}
		
		updateClients();
	});
	
	c.on("error", function() {});
});

function Client(c) {
	this.client = c;
	this.ip = c.remoteAddress;
	this.room = 0;
}

function getClients(e) {
	var s = "";
	for (var i = 0; i < clients.length; ++i) {
		if (clients[i].ip === e.ip || s.indexOf(clients[i].ip) !== -1 || clients[i].room !== e.room) continue;
		s += clients[i].ip + "\n";
	}
	if (s === "") {
		s = "\n\0";
	}
	return s;
}

function updateClients() {
	for (var i = 0; i < clients.length; ++i) {
		clients[i].client.write(getClients(clients[i]) + "\x17");
		var index = 0;
		for (var e = 0; e < i; ++e) {
			if (clients[e].room === clients[i].room) ++index;
		}
		clients[i].client.write(index + "\t" + "\x17");
	}
}

server.listen(1337);