var ACTORS_PER_CHARACTER = 8;
var clients = [];

var net = require("net");
var server = net.createServer(function(c) {
	var client = new Client(c);
	clients.push(client);

	c.on("data", function(d) {
		d = d.toString().split("\n");
		
		for (var i = 0; i < d.length - 1; ++i) {
			if (d[i].charAt(0) == 'r') {
				client.room = parseInt(d[i].slice(1));
				updateClients();
				updateHosts();
			} else if (d[i].charAt(0) == 'm') {
				for (var e = 0; e < clients.length; ++e) {
					if (clients[e].room === client.room) {
						clients[e].client.write("m" + d[i].slice(1) + "\r\n");
					}
				}
			} else if (d[i].charAt(0) == 'c') {
				client.character = parseInt(d[i].slice(1));
				updateClients();
			} else if (d[i].charAt(0) == 'k') {
				for (var e = 0; e < clients.length; ++e) {
					if (clients[e].room === client.room && clients[e].level === client.level && clients[e].ip !== client.ip) {
						clients[e].client.write("k" + d[i].slice(1) + "\n");
					}
				}
			} else if (d[i].charAt(0) == 'l') {
				client.level_time = Date.now();
				client.level = parseInt(d[i].slice(1));
				updateHosts();
			} else if (d[i].charAt(0) == 'p') {
				client.client.write("p\n");
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
		updateHosts();
	});
	
	c.on("error", function() {});
});

function Client(c) {
	this.client = c;
	this.ip = c.remoteAddress;
	this.room = 0;
	this.character = 0;
	
	this.level = 0;
	this.level_time = 0;
}

function getClients(e) {
	var s = "";
	for (var i = 0; i < clients.length; ++i) {
		if (clients[i].ip === e.ip || s.indexOf(clients[i].ip) !== -1 || clients[i].room !== e.room) continue;
		s += clients[i].ip + " ";
	}
	
	return s;
}

function updateClients() {
	for (var i = 0; i < clients.length; ++i) {
		clients[i].client.write("c" + getClients(clients[i]) + "\n");
		var index = 0;
		for (var e = 0; e < i; ++e) {
			if (clients[e].room === clients[i].room && clients[e].character === clients[i].character) ++index;
		}
		index += (clients[i].character * ACTORS_PER_CHARACTER);
		clients[i].client.write("i" + index + "\n");
	}
}

function updateHosts() {
	for (var i = 0; i < clients.length; ++i) {
		var first = i;
		for (var e = 0; e < clients.length; ++e) {
			if (clients[e].room === clients[i].room && clients[e].level === clients[i].level && clients[e].level_time < clients[first].level_time) {
				first = e;
				break;
			}
		}
			
		if (first === i) {
			clients[i].client.write("kce mphost\n");
		}
	}
}

server.listen(2783);