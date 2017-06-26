# Mirror's Edge Multiplayer Mod
<Insert a meaningful description of this mod here>

## How It Works

### Overview

We have a dedicated server that listens for any new connections and creates a list of its connected clients. When a client (through the EXE) connects to the server, the server sends back the list of the connected clients' IPs, excluding the client who connected. The client then uses the list of IPs received from the server to send data (position, rotation, level, and bones) to and receive data from the other clients without a middleman--this is commonly known as a Peer to Peer network.

### In Depth

The dedicated server is a NodeJS server inside a Docker container hosted by IBM Bluemix. The TCP connection between a client and the server is on port 1337, and the UDP connections between the clients is on port 1338. The server sends a list of the connected clients' IPs to each client and the index of the recieving client whenever a new client connects or disconnets.

The client EXE, which is connected to the server, is constantly listening for the process `MirrorsEdge.exe` to inject the DLL into. Once injected, the DLL...

// dll + exe communication

// reason for needing custom maps

## Contributing

### Client

#### Setup
Both the client DLL and EXE are written in C++ and compiled using Visual Studio 2015. To contribute you can download Visual Studio Community 2015 (or newer) or download a paid or trial version of Visual Studio, such as Visual Studio Professional 2015 (or newer) or Visual Studio Enterprise 2015 (or newer).

#### Testing
When compiling either the DLL or EXE to test your contributions, be sure that the runtime library is `Multi-threaded (/MT)` because we want all libraries statically linked to the compiled output. You can check the runtime library by going to:

```Project -> Properties -> Configuration Properties -> C/C++ -> Code Generation -> Runtime Library```

In addition, be sure the compiler configuration is set to `Release` instead of `Debug` for faster optimization, and be sure that the compiler configuration is set to `x86` because Mirror's Edge is a 32-bit application.

### Server