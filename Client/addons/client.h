#pragma once

class Client : public Addon {
public:
	static const int Port = 5222;

	bool Initialize();
	std::string GetName();

	typedef struct {
		unsigned int Id;
		Classes::FVector Position;
		Classes::FRotator Rotation;
		Classes::FBoneAtom Bones[PLAYER_PAWN_BONE_COUNT];
	} PACKET;

	class Player {
	public:
		unsigned int Id;
		Engine::Character Character;
		std::string Name;
		std::string Level;
		Classes::ATdPlayerPawn *Pawn;
		PACKET LastPacket;
	};
};