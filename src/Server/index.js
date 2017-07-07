var clients = [];

var net = require("net");
var server = net.createServer(function(c) {
	var client = new Client(c);
	console.log("connection: " + client.ip);
	clients.push(client);
	updateClients();
	
	c.on("data", function(d) {
		for (var i = 0; i < clients.length; ++i) {
			clients[i].client.write(d.toString() + "\r");
		}
	});
	
	c.on("close", function(d) {
		console.log("disconnected");
		
		for (var i = 0; i < clients.length; ++i) {
			if (clients[i].ip === client.ip) {
				clients.splice(i, 1);
				break;
			}
		}
		
		updateClients();
	});
	
	c.on("error", function() {});
});

function Client(c) {
	this.client = c;
	this.ip = c.remoteAddress;
}

function getClients(e) {
	var s = "";
	for (var i = 0; i < clients.length; ++i) {
		if (clients[i].ip === e || s.indexOf(clients[i].ip) !== -1) continue;
		s += clients[i].ip + "\n";
	}
	return s;
}

function updateClients() {
	for (var i = 0; i < clients.length; ++i) {
		clients[i].client.write(getClients(clients[i].ip));
		clients[i].client.write(i + "\t");
	}
}

server.listen(1337);