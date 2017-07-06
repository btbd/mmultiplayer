Place *Testmap_p.me1* inside *\CookedPC\Maps* then launch in-game using console command *MAP Testmap_p.me1*. Story maps include no additional changes apart from 64 player support. Easily opens in the editor with a unique name without any effort.
# Test map
Includes a door which can be controlled externally using console commands. Console commands have two arguments, string and target(*not needed*).
# Commands
## General Commands
##### Please see comments in the Kismet window.
#### *consolemp* - Activated using a trigger at the top of the staircase in the test map. Does nothing, just for debugging.
#### *mp_print* - Prints a supersmessage with the *printstring* varname.
#### *mp_playerjoin* - Prints a supersmessage with the *MultiplayerString* varname.
#### *TestActor* - Spawns a skeletal mesh actor. Can be debugged in order to spawn in multiplayer support without modifying the maps.
## Asset sync commands
#### *mp_checkactorstates* - Check the current state of all actors.
#### *mp_enabled_01* - Actor 01 is enabled (in that case, the door is opened).
#### *mp_disabled_01* - Actor 01 is disabled (in that case, the door is closed).
#### *mp_activate_01_rem* - Door was kicked down on another client.
#### *mp_activate_01_loc* - Door was kicked localy, send the kick to other clients.
