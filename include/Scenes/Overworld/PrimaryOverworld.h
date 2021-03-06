#ifndef MAPPING_H
#define MAPPING_H

#include "GlobalDefinitions.h"
#include "Scenes/Scene.h"
#include "Core/Maths.h"
#include "Scenes/Overworld/MappingDefinitions.h"
#include "Core/Vector2D.h"

#define MaxBanks 5
#define NumFlightSpots 1

using namespace Core;

namespace Scenes
{
	namespace Overworld
	{
		class PrimaryOverworld : public Scene
		{
		private:
			u32 exitContext;
			u16 row;
			u16 column;
			ConnectionStruct connect;
			TileAnimationStruct* animStruct;
			bool warpOnCompleteMove;
			WarpEvent warpData;
			u32 entryData;
			static IndexTable dataForTilesets[2][2];
			static TileAnimationStruct emptyAnimStruct;
			static u8 maxBanks;
			static u8 maxMaps[MaxBanks];
			static char* mapNamesTable[];
			static void PlaceNPCs(u16* newColours);
			static FlightSpot flightSpots[];
			static HealingPlace healingPlaces[];
			static AirportData airportData[];
		public:
			PrimaryOverworld();
			~PrimaryOverworld();
			static const MapHeader & GetMapHeaderFromBankAndMapID(u8 bank, u8 map);
			static const WildData & GetMapWildDataFromBankAndMapID(u8 bank, u8 map);
			static const MapConnection & GetMapConnectionsFromBankAndMapID(u8 bank, u8 map);
			static const MapFooter & GetMapFooterFromBankAndMapID(u8 bank, u8 map);
			static u16 GetMusicTrackIDFromBankAndMapID(u8 bank, u8 map);
			void PutTilesetPalettesInMemory(u32 tilesetID, u16* paletteLocation, u32 time, u16* colourLocation = NULL);
			void PutMapPalettesInMemory(u16* colourLocation = NULL);
			TileAnimationStructROM* GetTileAnimationDataPointer(u32 tilesetID);
			void PutTileAnimationDataIntoMemory(u32 tilesetID);
			void StoreTilesetIntoMemory(u32 tilesetID, u16* location, u32 tilesetMode, bool isCompressed);
			void PutMapTilesetsInMemory();
			u32 IsConnectionOnSide(const MapConnection &m, u32 side);
			u16 GetBlockFromData(u16* mapDataLocation, s32 x, s32 y, u16 mapWidth);
			u16 GetBorderBlock(s32 x, s32 y);
			u8 CalculateXConnectionLocation(const MapConnection* m, s32 x, s32 y, u16 widthOfMap);
			u8 CalculateYConnectionLocation(const MapConnection* m, s32 x, s32 y, u16 heightOfMap);
			u16 GetOutOfBoundsXBlock(const MapConnection &m, s32 x, s32 y, u16 widthOfMap);
			u16 GetOutOfBoundsYBlock(const MapConnection &m, s32 x, s32 y, u16 heightOfMap);
			u16 CalculateBlock(s32 x, s32 y);
			u16 CalculateBlockMovementPermissions(s32 x, s32 y);
			u16 CalculateBlockID(s32 x, s32 y);
			const BlockMetadata & CalculateBlockAttributes(s32 x, s32 y);
			Block* GetBlockLocation(u16 blockID);
			const BlockMetadata & GetBlockDataLocation(u16 blockID);
			void PutBlockIntoVRAM(Block* b, const BlockMetadata &blockData, u16 blockID, u32 location);
			void DrawRowOfBlocks(s32 xLocation, s32 yLocation, u32 rowID, u32 columnID);
			void DrawColumnOfBlocks(s32 xLocation, s32 yLocation, u32 columnID, u32 rowID);
			void DrawMap(const Vector2D &position, u16* colourLocation = NULL);
			u16 CalculateObjectXLocation(u8 shape, u8 size);
			u16 CalculateObjectYLocation(u8 shape, u8 size);
			bool IsNewLocationConnected(s32 horizontalLocation, s32 verticalLocation);
			bool IsNewLocationWalkable(s32 horizontalLocation, s32 verticalLocation);
			bool IsNewLocationInBounds(s32 horizontalLocation, s32 verticalLocation);
			u32 IsNewLocationValid(s32 horizontalLocation, s32 verticalLocation);
			void CopyMapHeaderAndResetMusic();
			void Update();
			void OnExit();
			void OnEnter();
			void OnCompleteTurn();
			void OnCompleteMove(u32 direction);
			u16 GetRow() const { return row; }
			u16 GetColumn() const { return column; }
			void IncrementRow() { row++; if (row == 0x10) { row = 0; } }
			void DecrementRow() { if (row == 0) { row = 0xF; } else { row--; } }
			void IncrementColumn() { column++; if (column == 0x10) { column = 0; } }
			void DecrementColumn() { if (column == 0) { column = 0xF; } else { column--; } }
			void AddConnection(const ConnectionStruct &values) { if (!connect.isActive) { connect = values; } }
			const WarpEvent & GetWarpEvent() const { return warpData; }
			void ResetColumn() { column = 0; }
			void ResetRow() { row = 0; }
			void SetEnterContext(u32 context) { exitContext = context; }
			void WarpOnCompleteMove(bool value, const WarpEvent &event) { warpOnCompleteMove = value; warpData = event; }
			void FacingClick();
			static char** GetMapNamesTablePointer() { return (char**)&mapNamesTable; }
			static const HealingPlace & GetHealingPlaceByID(u32 id) { if (id < NumFlightSpots) { return healingPlaces[id]; } return healingPlaces[0]; }
			static const FlightSpot & GetFlightSpotByID(u32 id) { if (id < NumFlightSpots + 1) { return flightSpots[id]; } return flightSpots[0]; }
			static const AirportData & GetAirportDataByID(u32 id) { if (id < NumFlightSpots) { return airportData[id]; } return airportData[0]; }
		};
	}
}

#endif
