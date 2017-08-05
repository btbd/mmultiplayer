# Mirror's Edge Multiplayer Mod
## Setup

1. Extract the newest release into a folder (it doesn't need to be the Mirror's Edge install folder), and make sure that `mdll.dll`, `mp_actors.me1`, and `MMultiplayer.exe` are in the same directory.
2. Run `MMultiplayer.exe`. 
	- Note: After the first time you run the Multiplayer Mod and it successfully attaches to Mirror's Edge, you can technically start the Multiplayer Mod after Mirror's Edge is running when at the Main Menu. However, if you experience any issues, try starting the Multiplayer Mod before Mirror's Edge.
3. Run Mirror's Edge.

When you first run the Multiplayer Mod, you may see this message: http://i.imgur.com/iXNHhYI.png. If you do, click "More info" then "Run anyway".

You may also see this message: http://i.imgur.com/vFdkwbj.png. If you do, select both private and public networks, then click "Allow access".

## Usage

### Keybinds

`Y` - Open chat.

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

#### Recording Commands

- `/rec begin` begins recording with the current character and name.
- `/rec end` stops recording.
- `/rec list` lists the current recordings in the chat (the leading number is the recording index).
- `/rec play <index>` deletes the recording at `<index>`. Use `/rec play all` to play all reocrdings.
- `/rec pause <index>` pauses the playing recording at `<index>`. Use `/rec pause all` to pause all playing recordings.
- `/rec unpause <index>` unpauses the playing recording at `<index>`. Use `/rec unpause all` to unpause all recordings.
- `/rec delete <index>` deletes the recording at `<index>`. Use `/rec delete all` to delete all recordings.

## UI Info

*Any changes you make will not be saved or applied until you click the `Apply` button.*

**Username** - Your username that is displayed in chat and in your nametag (no UTF-16 support and max 32 characters).

**Model** - The model other players see of you (it does not change your first person model). Ghost is the red semi-transparent Time-Trial ghost and is recommended for races.
																 
**Room Number** - The current number of the room you are in (max is `4294967295`). This is used so players can have private rooms.

**Collision** - If this is checked, other players' collision will affect you.

**Name Tags** - If this is checked, you will see nametags above other players.

**Chat** - If this is checked, you will see chat notifications without having the chat open.

**Spectator** - If this is checked, you will be completely invisible and have no effect on any of the other players in the room, but you will still be able to see the other players.

## How It Works

Read the source for now.

## Contributing

### Client

#### Setup
Both the client DLL and EXE are written in C++ and compiled using Visual Studio 2015. To contribute you can download Visual Studio Community 2015 (or newer) or download a paid or trial version of Visual Studio, such as Visual Studio Professional 2015 (or newer) or Visual Studio Enterprise 2015 (or newer).

#### Testing
When compiling either the DLL or EXE to test your contributions, be sure that the runtime library is `Multi-threaded (/MT)` because all libraries should be statically linked to the compiled output. You can check the runtime library by going to:

```Project -> Properties -> Configuration Properties -> C/C++ -> Code Generation -> Runtime Library```

In addition, be sure the compiler configuration is set to `Release` instead of `Debug` for faster optimization, and be sure that the compiler configuration is set to `x86` because Mirror's Edge is a 32-bit application.

For the DLL, you will need to include the DirectX 9 Library. You can download the SDK from here: https://www.microsoft.com/en-us/download/confirmation.aspx?id=6812

Once downloaded and installed, open the DLL project in Visual Studio and go to `Project -> Project Properties -> Configuration Properties -> VC++ Directories` and add the SDK include and library directories accordingly.

### Server

The server is written in NodeJS. Currently, testing the server locally isn't easily supported, so it's not recommended to contribute to the sever. If the server needs something, make a pull request or issue.