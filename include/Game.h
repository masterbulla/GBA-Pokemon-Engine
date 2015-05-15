/*
 * Game.h
 *
 *  Created on: 14 May 2015
 *      Author: Jamie
 */

#ifndef GAME_H_
#define GAME_H_

#include "GlobalDefinitions.h"
#include "Pokemon.h"

typedef struct PokemonStorageBoxes {
	StorageBoxInfo info;
	AbridgedPokemon boxData[NUMBOXES][POKEMONPERBOX];
} PokemonStorageBoxes;

class Game
{
private:
	static Pokemon partyPokemon[];
	static Pokemon temporaryHoldingPokemon;
	static PokemonStorageBoxes storageBoxes;
	static Bag bag;
	static Player player;
	static MapHeader currentMap;
	static char buffers[NUMBUFFERS][BUFFERLENGTH];
	Game();
	~Game();
	u32 CountPokemon(Pokemon* location, u32 length);
	u32 CountAbridgedPokemon(AbridgedPokemon* location, u32 length);
public:
	static void Update();
	static void SetCurrentMap(const MapHeader &mapHeader) { currentMap = mapHeader; }
	static Player & GetPlayer() { return player; }
	static const MapHeader & GetCurrentMap() { return currentMap; }
	static bool AddNewPokemon(const Pokemon &p);
	u32 CountPartyPokemon();
	u32 CountBoxPokemon(u32 boxID);
	u32 CountAllBoxPokemon();
};

#endif /* GAME_H_ */