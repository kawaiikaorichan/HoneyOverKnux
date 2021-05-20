#include "pch.h"
#include <stdio.h>
#include "IniFile.hpp"
#include <cmath>
#include "stdafx.h"

//Macros
#define ReplacePVM(a, b) helperFunctions.ReplaceFile("system\\" a ".PVM", "system\\" b ".PVM");
NJS_MATERIAL* TemporaryMaterialArray[] = { nullptr };

extern "C"
{
	uint16_t Knuckles_UpperArmIndices_DC[] = {
		0, 2,
		4, 6,
		5, 7,
		1, 3,
	};

	uint16_t Knuckles_LowerArmIndices_DC[] = {
		4, 14,
		5, 15,
		1, 11,
		0, 10,
	};

	uint16_t Knuckles_KneeIndices_DC[] = {
		0, 2,
		4, 6,
		5, 7,
		1, 3,
	};

	uint16_t Knuckles_LegIndices_DC[] = {
		0, 2,
		1, 3,
		4, 6,
		5, 7,
	};

	uint16_t Knuckles_ShoeIndices_DC[] = {
		2, 3,
		3, 2,
		0, 1,
		1, 0,
	};

	uint16_t Knuckles_HandIndices_DC[] = {
		0, 13,
		1, 1,
		5, 3,
		4, 12,
	};

	uint16_t Knuckles_ShovelClawIndices_DC[] = {
		0, 13,
		1, 1,
		5, 3,
		4, 12,
	};

	void __cdecl InitKnucklesWeldInfo_mod()
	{
		NJS_OBJECT* v0; // ebp@1
		NJS_OBJECT* v1; // ebp@1
		NJS_OBJECT* v2; // ebp@1
		NJS_OBJECT* v3; // edx@1
		NJS_OBJECT* v4; // edx@1
		NJS_OBJECT* v5; // eax@1

		KnucklesWeldInfo[0].BaseModel = *KNUCKLES_OBJECTS;
		KnucklesWeldInfo[0].ModelA = KNUCKLES_OBJECTS[2];
		KnucklesWeldInfo[0].ModelB = KNUCKLES_OBJECTS[3];
		KnucklesWeldInfo[0].anonymous_5 = 0;
		KnucklesWeldInfo[0].VertexBuffer = 0;
		KnucklesWeldInfo[0].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_UpperArmIndices_DC) / 2);
		KnucklesWeldInfo[0].WeldType = 2;
		KnucklesWeldInfo[0].VertIndexes = Knuckles_UpperArmIndices_DC;
		KnucklesWeldInfo[1].BaseModel = *KNUCKLES_OBJECTS;
		KnucklesWeldInfo[1].ModelA = KNUCKLES_OBJECTS[3];
		KnucklesWeldInfo[1].ModelB = KNUCKLES_OBJECTS[4];
		KnucklesWeldInfo[1].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_LowerArmIndices_DC) / 2);
		KnucklesWeldInfo[1].WeldType = 2;
		KnucklesWeldInfo[1].anonymous_5 = 0;
		KnucklesWeldInfo[1].VertexBuffer = 0;
		KnucklesWeldInfo[1].VertIndexes = Knuckles_LowerArmIndices_DC;
		KnucklesWeldInfo[2].BaseModel = *KNUCKLES_OBJECTS;
		KnucklesWeldInfo[2].ModelA = KNUCKLES_OBJECTS[6];
		v0 = KNUCKLES_OBJECTS[7];
		KnucklesWeldInfo[2].VertIndexes = Knuckles_UpperArmIndices_DC;
		KnucklesWeldInfo[2].ModelB = v0;
		KnucklesWeldInfo[2].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_UpperArmIndices_DC) / 2);
		KnucklesWeldInfo[2].WeldType = 2;
		KnucklesWeldInfo[2].anonymous_5 = 0;
		KnucklesWeldInfo[2].VertexBuffer = 0;
		KnucklesWeldInfo[3].BaseModel = *KNUCKLES_OBJECTS;
		KnucklesWeldInfo[3].ModelA = KNUCKLES_OBJECTS[7];
		KnucklesWeldInfo[3].ModelB = KNUCKLES_OBJECTS[8];
		KnucklesWeldInfo[3].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_LowerArmIndices_DC) / 2);
		KnucklesWeldInfo[3].WeldType = 2;
		KnucklesWeldInfo[3].anonymous_5 = 0;
		KnucklesWeldInfo[3].VertexBuffer = 0;
		KnucklesWeldInfo[3].VertIndexes = Knuckles_LowerArmIndices_DC;
		KnucklesWeldInfo[4].BaseModel = *KNUCKLES_OBJECTS;
		KnucklesWeldInfo[4].ModelA = KNUCKLES_OBJECTS[10];
		KnucklesWeldInfo[4].ModelB = KNUCKLES_OBJECTS[11];
		KnucklesWeldInfo[4].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_LegIndices_DC) / 2);
		KnucklesWeldInfo[4].WeldType = 2;
		KnucklesWeldInfo[4].anonymous_5 = 0;
		KnucklesWeldInfo[4].VertexBuffer = 0;
		KnucklesWeldInfo[4].VertIndexes = Knuckles_LegIndices_DC;
		KnucklesWeldInfo[5].BaseModel = *KNUCKLES_OBJECTS;
		KnucklesWeldInfo[5].ModelA = KNUCKLES_OBJECTS[11];
		KnucklesWeldInfo[5].ModelB = KNUCKLES_OBJECTS[12];
		KnucklesWeldInfo[5].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_LegIndices_DC) / 2);
		KnucklesWeldInfo[5].WeldType = 2;
		KnucklesWeldInfo[5].anonymous_5 = 0;
		KnucklesWeldInfo[5].VertexBuffer = 0;
		KnucklesWeldInfo[5].VertIndexes = Knuckles_LegIndices_DC;
		KnucklesWeldInfo[6].BaseModel = *KNUCKLES_OBJECTS;
		KnucklesWeldInfo[6].ModelA = KNUCKLES_OBJECTS[13];
		KnucklesWeldInfo[6].ModelB = KNUCKLES_OBJECTS[14];
		KnucklesWeldInfo[6].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_LegIndices_DC) / 2);
		KnucklesWeldInfo[6].WeldType = 2;
		KnucklesWeldInfo[6].anonymous_5 = 0;
		KnucklesWeldInfo[6].VertexBuffer = 0;
		KnucklesWeldInfo[6].VertIndexes = Knuckles_LegIndices_DC;
		KnucklesWeldInfo[7].BaseModel = *KNUCKLES_OBJECTS;
		KnucklesWeldInfo[7].ModelA = KNUCKLES_OBJECTS[14];
		KnucklesWeldInfo[7].ModelB = KNUCKLES_OBJECTS[15];
		KnucklesWeldInfo[7].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_LegIndices_DC) / 2);
		KnucklesWeldInfo[7].WeldType = 2;
		KnucklesWeldInfo[7].anonymous_5 = 0;
		KnucklesWeldInfo[7].VertexBuffer = 0;
		KnucklesWeldInfo[7].VertIndexes = Knuckles_LegIndices_DC;
		KnucklesWeldInfo[8].BaseModel = *KNUCKLES_OBJECTS;
		KnucklesWeldInfo[8].ModelA = KNUCKLES_OBJECTS[16];
		KnucklesWeldInfo[8].ModelB = KNUCKLES_OBJECTS[17];
		KnucklesWeldInfo[8].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_ShoeIndices_DC) / 2);
		KnucklesWeldInfo[8].WeldType = 2;
		KnucklesWeldInfo[8].anonymous_5 = 0;
		KnucklesWeldInfo[8].VertexBuffer = 0;
		KnucklesWeldInfo[8].VertIndexes = Knuckles_ShoeIndices_DC;
		KnucklesWeldInfo[9].BaseModel = *KNUCKLES_OBJECTS;
		KnucklesWeldInfo[9].ModelA = KNUCKLES_OBJECTS[18];
		v1 = KNUCKLES_OBJECTS[19];
		KnucklesWeldInfo[9].VertIndexes = Knuckles_ShoeIndices_DC;
		KnucklesWeldInfo[9].ModelB = v1;
		KnucklesWeldInfo[9].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_ShoeIndices_DC) / 2);
		KnucklesWeldInfo[9].WeldType = 2;
		KnucklesWeldInfo[9].anonymous_5 = 0;
		KnucklesWeldInfo[9].VertexBuffer = 0;
		KnucklesWeldInfo[10].BaseModel = *KNUCKLES_OBJECTS;
		KnucklesWeldInfo[10].ModelA = KNUCKLES_OBJECTS[20];
		KnucklesWeldInfo[10].ModelB = KNUCKLES_OBJECTS[5];
		KnucklesWeldInfo[10].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_HandIndices_DC) / 2);
		KnucklesWeldInfo[10].WeldType = 2;
		KnucklesWeldInfo[10].anonymous_5 = 0;
		KnucklesWeldInfo[10].VertexBuffer = 0;
		KnucklesWeldInfo[10].VertIndexes = Knuckles_HandIndices_DC;
		KnucklesWeldInfo[11].BaseModel = *KNUCKLES_OBJECTS;
		KnucklesWeldInfo[11].ModelA = KNUCKLES_OBJECTS[22];
		KnucklesWeldInfo[11].ModelB = KNUCKLES_OBJECTS[9];
		KnucklesWeldInfo[11].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_HandIndices_DC) / 2);
		KnucklesWeldInfo[11].WeldType = 2;
		KnucklesWeldInfo[11].anonymous_5 = 0;
		KnucklesWeldInfo[11].VertexBuffer = 0;
		KnucklesWeldInfo[11].VertIndexes = Knuckles_HandIndices_DC;
		KnucklesWeldInfo[12].BaseModel = KNUCKLES_OBJECTS[1];
		KnucklesWeldInfo[12].ModelA = KNUCKLES_OBJECTS[24];
		KnucklesWeldInfo[12].ModelB = KNUCKLES_OBJECTS[25];
		KnucklesWeldInfo[12].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_UpperArmIndices_DC) / 2);
		KnucklesWeldInfo[12].WeldType = 2;
		KnucklesWeldInfo[12].anonymous_5 = 0;
		KnucklesWeldInfo[12].VertexBuffer = 0;
		KnucklesWeldInfo[12].VertIndexes = Knuckles_UpperArmIndices_DC;
		KnucklesWeldInfo[13].BaseModel = KNUCKLES_OBJECTS[1];
		KnucklesWeldInfo[13].ModelA = KNUCKLES_OBJECTS[25];
		KnucklesWeldInfo[13].ModelB = KNUCKLES_OBJECTS[26];
		KnucklesWeldInfo[13].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_LowerArmIndices_DC) / 2);
		KnucklesWeldInfo[13].WeldType = 2;
		KnucklesWeldInfo[13].anonymous_5 = 0;
		KnucklesWeldInfo[13].VertexBuffer = 0;
		KnucklesWeldInfo[13].VertIndexes = Knuckles_LowerArmIndices_DC;
		KnucklesWeldInfo[14].BaseModel = KNUCKLES_OBJECTS[1];
		KnucklesWeldInfo[14].ModelA = KNUCKLES_OBJECTS[28];
		KnucklesWeldInfo[14].ModelB = KNUCKLES_OBJECTS[29];
		KnucklesWeldInfo[14].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_UpperArmIndices_DC) / 2);
		KnucklesWeldInfo[14].WeldType = 2;
		KnucklesWeldInfo[14].anonymous_5 = 0;
		KnucklesWeldInfo[14].VertexBuffer = 0;
		KnucklesWeldInfo[14].VertIndexes = Knuckles_UpperArmIndices_DC;
		KnucklesWeldInfo[15].BaseModel = KNUCKLES_OBJECTS[1];
		KnucklesWeldInfo[15].ModelA = KNUCKLES_OBJECTS[29];
		KnucklesWeldInfo[15].ModelB = KNUCKLES_OBJECTS[30];
		KnucklesWeldInfo[15].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_LowerArmIndices_DC) / 2);
		KnucklesWeldInfo[15].WeldType = 2;
		KnucklesWeldInfo[15].anonymous_5 = 0;
		KnucklesWeldInfo[15].VertexBuffer = 0;
		KnucklesWeldInfo[15].VertIndexes = Knuckles_LowerArmIndices_DC;
		KnucklesWeldInfo[16].BaseModel = KNUCKLES_OBJECTS[1];
		KnucklesWeldInfo[16].ModelA = KNUCKLES_OBJECTS[32];
		KnucklesWeldInfo[16].ModelB = KNUCKLES_OBJECTS[33];
		KnucklesWeldInfo[16].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_LegIndices_DC) / 2);
		KnucklesWeldInfo[16].WeldType = 2;
		KnucklesWeldInfo[16].anonymous_5 = 0;
		KnucklesWeldInfo[16].VertexBuffer = 0;
		KnucklesWeldInfo[16].VertIndexes = Knuckles_LegIndices_DC;
		KnucklesWeldInfo[17].BaseModel = KNUCKLES_OBJECTS[1];
		KnucklesWeldInfo[17].ModelA = KNUCKLES_OBJECTS[33];
		KnucklesWeldInfo[17].ModelB = KNUCKLES_OBJECTS[34];
		KnucklesWeldInfo[17].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_LegIndices_DC) / 2);
		KnucklesWeldInfo[17].WeldType = 2;
		KnucklesWeldInfo[17].anonymous_5 = 0;
		KnucklesWeldInfo[17].VertexBuffer = 0;
		KnucklesWeldInfo[17].VertIndexes = Knuckles_LegIndices_DC;
		KnucklesWeldInfo[18].BaseModel = KNUCKLES_OBJECTS[1];
		KnucklesWeldInfo[18].ModelA = KNUCKLES_OBJECTS[35];
		KnucklesWeldInfo[18].ModelB = KNUCKLES_OBJECTS[36];
		KnucklesWeldInfo[18].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_LegIndices_DC) / 2);
		KnucklesWeldInfo[18].WeldType = 2;
		KnucklesWeldInfo[18].anonymous_5 = 0;
		KnucklesWeldInfo[18].VertexBuffer = 0;
		KnucklesWeldInfo[18].VertIndexes = Knuckles_LegIndices_DC;
		KnucklesWeldInfo[19].BaseModel = KNUCKLES_OBJECTS[1];
		KnucklesWeldInfo[19].ModelA = KNUCKLES_OBJECTS[36];
		v2 = KNUCKLES_OBJECTS[37];
		KnucklesWeldInfo[19].VertIndexes = Knuckles_LegIndices_DC;
		KnucklesWeldInfo[19].ModelB = v2;
		KnucklesWeldInfo[19].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_LegIndices_DC) / 2);
		KnucklesWeldInfo[19].WeldType = 2;
		KnucklesWeldInfo[19].anonymous_5 = 0;
		KnucklesWeldInfo[19].VertexBuffer = 0;
		KnucklesWeldInfo[20].BaseModel = KNUCKLES_OBJECTS[1];
		KnucklesWeldInfo[20].ModelA = KNUCKLES_OBJECTS[38];
		KnucklesWeldInfo[20].ModelB = KNUCKLES_OBJECTS[39];
		KnucklesWeldInfo[20].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_ShoeIndices_DC) / 2);
		KnucklesWeldInfo[20].WeldType = 2;
		KnucklesWeldInfo[20].anonymous_5 = 0;
		KnucklesWeldInfo[20].VertexBuffer = 0;
		KnucklesWeldInfo[20].VertIndexes = Knuckles_ShoeIndices_DC;
		KnucklesWeldInfo[21].BaseModel = KNUCKLES_OBJECTS[1];
		KnucklesWeldInfo[21].ModelA = KNUCKLES_OBJECTS[40];
		KnucklesWeldInfo[21].ModelB = KNUCKLES_OBJECTS[41];
		KnucklesWeldInfo[21].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_ShoeIndices_DC) / 2);
		KnucklesWeldInfo[21].WeldType = 2;
		KnucklesWeldInfo[21].anonymous_5 = 0;
		KnucklesWeldInfo[21].VertexBuffer = 0;
		KnucklesWeldInfo[21].VertIndexes = Knuckles_ShoeIndices_DC;
		KnucklesWeldInfo[22].BaseModel = KNUCKLES_OBJECTS[1];
		KnucklesWeldInfo[22].ModelA = KNUCKLES_OBJECTS[42];
		KnucklesWeldInfo[22].ModelB = KNUCKLES_OBJECTS[27];
		KnucklesWeldInfo[22].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_HandIndices_DC) / 2);
		KnucklesWeldInfo[22].WeldType = 2;
		KnucklesWeldInfo[22].anonymous_5 = 0;
		KnucklesWeldInfo[22].VertexBuffer = 0;
		KnucklesWeldInfo[22].VertIndexes = Knuckles_HandIndices_DC;
		KnucklesWeldInfo[23].BaseModel = KNUCKLES_OBJECTS[1];
		KnucklesWeldInfo[23].ModelA = KNUCKLES_OBJECTS[44];
		KnucklesWeldInfo[23].ModelB = KNUCKLES_OBJECTS[31];
		KnucklesWeldInfo[23].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_HandIndices_DC) / 2);
		KnucklesWeldInfo[23].WeldType = 2;
		KnucklesWeldInfo[23].anonymous_5 = 0;
		KnucklesWeldInfo[23].VertexBuffer = 0;
		KnucklesWeldInfo[23].VertIndexes = Knuckles_HandIndices_DC;
		KnucklesWeldInfo[24].BaseModel = *KNUCKLES_OBJECTS;
		KnucklesWeldInfo[24].ModelA = KNUCKLES_OBJECTS[5];
		KnucklesWeldInfo[24].ModelB = 0;
		KnucklesWeldInfo[24].VertexPairCount = 2;
		KnucklesWeldInfo[24].WeldType = 4;
		KnucklesWeldInfo[24].anonymous_5 = 0;
		KnucklesWeldInfo[24].VertexBuffer = 0;
		KnucklesWeldInfo[24].VertIndexes = 0;
		KnucklesWeldInfo[25].BaseModel = *KNUCKLES_OBJECTS;
		KnucklesWeldInfo[25].ModelA = KNUCKLES_OBJECTS[9];
		KnucklesWeldInfo[25].ModelB = 0;
		KnucklesWeldInfo[25].VertexPairCount = 2;
		KnucklesWeldInfo[25].WeldType = 5;
		KnucklesWeldInfo[25].anonymous_5 = 0;
		KnucklesWeldInfo[25].VertexBuffer = 0;
		KnucklesWeldInfo[25].VertIndexes = 0;
		KnucklesWeldInfo[26].BaseModel = *KNUCKLES_OBJECTS;
		v3 = KNUCKLES_OBJECTS[17];
		KnucklesWeldInfo[26].ModelB = 0;
		KnucklesWeldInfo[26].VertexPairCount = 0;
		KnucklesWeldInfo[26].anonymous_5 = 0;
		KnucklesWeldInfo[26].VertexBuffer = 0;
		KnucklesWeldInfo[26].VertIndexes = 0;
		KnucklesWeldInfo[26].ModelA = v3;
		KnucklesWeldInfo[26].WeldType = 6;
		KnucklesWeldInfo[27].BaseModel = *KNUCKLES_OBJECTS;
		v4 = KNUCKLES_OBJECTS[19];
		KnucklesWeldInfo[27].ModelB = 0;
		KnucklesWeldInfo[27].VertexPairCount = 0;
		KnucklesWeldInfo[27].anonymous_5 = 0;
		KnucklesWeldInfo[27].VertexBuffer = 0;
		KnucklesWeldInfo[27].VertIndexes = 0;
		KnucklesWeldInfo[27].ModelA = v4;
		KnucklesWeldInfo[27].WeldType = 7;
		KnucklesWeldInfo[28].BaseModel = *KNUCKLES_OBJECTS;
		v5 = KNUCKLES_OBJECTS[54];
		KnucklesWeldInfo[28].ModelB = 0;
		KnucklesWeldInfo[28].VertexPairCount = 0;
		KnucklesWeldInfo[28].anonymous_5 = 0;
		KnucklesWeldInfo[28].VertexBuffer = 0;
		KnucklesWeldInfo[28].VertIndexes = 0;
		KnucklesWeldInfo[29].BaseModel = 0;
		KnucklesWeldInfo[29].ModelA = 0;
		KnucklesWeldInfo[29].ModelB = 0;
		KnucklesWeldInfo[29].VertexPairCount = 0;
		KnucklesWeldInfo[29].VertexBuffer = 0;
		KnucklesWeldInfo[28].ModelA = v5;
		KnucklesWeldInfo[28].WeldType = 8;
		KnucklesWeldInfo[29].VertIndexes = 0;
	}

	void __cdecl InitNPCKnucklesWeldInfo_mod()
	{
		NJS_OBJECT* v0; // ebp@1
		NJS_OBJECT* v1; // ebp@1
		NJS_OBJECT* v2; // ebp@1
		NJS_OBJECT* v3; // ebx@1
		NJS_OBJECT* v4; // esi@1
		NJS_OBJECT* v5; // eax@1

		NPCKnucklesWeldInfo[0].BaseModel = *KNUCKLES_OBJECTS;
		NPCKnucklesWeldInfo[0].ModelA = KNUCKLES_OBJECTS[2];
		NPCKnucklesWeldInfo[0].ModelB = KNUCKLES_OBJECTS[3];
		NPCKnucklesWeldInfo[0].anonymous_5 = 0;
		NPCKnucklesWeldInfo[0].VertexBuffer = 0;
		NPCKnucklesWeldInfo[0].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_UpperArmIndices_DC) / 2);
		NPCKnucklesWeldInfo[0].WeldType = 2;
		NPCKnucklesWeldInfo[0].VertIndexes = Knuckles_UpperArmIndices_DC;
		NPCKnucklesWeldInfo[1].BaseModel = *KNUCKLES_OBJECTS;
		NPCKnucklesWeldInfo[1].ModelA = KNUCKLES_OBJECTS[3];
		NPCKnucklesWeldInfo[1].ModelB = KNUCKLES_OBJECTS[4];
		NPCKnucklesWeldInfo[1].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_LowerArmIndices_DC) / 2);
		NPCKnucklesWeldInfo[1].WeldType = 2;
		NPCKnucklesWeldInfo[1].anonymous_5 = 0;
		NPCKnucklesWeldInfo[1].VertexBuffer = 0;
		NPCKnucklesWeldInfo[1].VertIndexes = Knuckles_LowerArmIndices_DC;
		NPCKnucklesWeldInfo[2].BaseModel = *KNUCKLES_OBJECTS;
		NPCKnucklesWeldInfo[2].ModelA = KNUCKLES_OBJECTS[6];
		v0 = KNUCKLES_OBJECTS[7];
		NPCKnucklesWeldInfo[2].VertIndexes = Knuckles_UpperArmIndices_DC;
		NPCKnucklesWeldInfo[2].ModelB = v0;
		NPCKnucklesWeldInfo[2].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_UpperArmIndices_DC) / 2);
		NPCKnucklesWeldInfo[2].WeldType = 2;
		NPCKnucklesWeldInfo[2].anonymous_5 = 0;
		NPCKnucklesWeldInfo[2].VertexBuffer = 0;
		NPCKnucklesWeldInfo[3].BaseModel = *KNUCKLES_OBJECTS;
		NPCKnucklesWeldInfo[3].ModelA = KNUCKLES_OBJECTS[7];
		NPCKnucklesWeldInfo[3].ModelB = KNUCKLES_OBJECTS[8];
		NPCKnucklesWeldInfo[3].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_LowerArmIndices_DC) / 2);
		NPCKnucklesWeldInfo[3].WeldType = 2;
		NPCKnucklesWeldInfo[3].anonymous_5 = 0;
		NPCKnucklesWeldInfo[3].VertexBuffer = 0;
		NPCKnucklesWeldInfo[3].VertIndexes = Knuckles_LowerArmIndices_DC;
		NPCKnucklesWeldInfo[4].BaseModel = *KNUCKLES_OBJECTS;
		NPCKnucklesWeldInfo[4].ModelA = KNUCKLES_OBJECTS[10];
		NPCKnucklesWeldInfo[4].ModelB = KNUCKLES_OBJECTS[11];
		NPCKnucklesWeldInfo[4].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_LegIndices_DC) / 2);
		NPCKnucklesWeldInfo[4].WeldType = 2;
		NPCKnucklesWeldInfo[4].anonymous_5 = 0;
		NPCKnucklesWeldInfo[4].VertexBuffer = 0;
		NPCKnucklesWeldInfo[4].VertIndexes = Knuckles_LegIndices_DC;
		NPCKnucklesWeldInfo[5].BaseModel = *KNUCKLES_OBJECTS;
		NPCKnucklesWeldInfo[5].ModelA = KNUCKLES_OBJECTS[11];
		NPCKnucklesWeldInfo[5].ModelB = KNUCKLES_OBJECTS[12];
		NPCKnucklesWeldInfo[5].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_LegIndices_DC) / 2);
		NPCKnucklesWeldInfo[5].WeldType = 2;
		NPCKnucklesWeldInfo[5].anonymous_5 = 0;
		NPCKnucklesWeldInfo[5].VertexBuffer = 0;
		NPCKnucklesWeldInfo[5].VertIndexes = Knuckles_LegIndices_DC;
		NPCKnucklesWeldInfo[6].BaseModel = *KNUCKLES_OBJECTS;
		NPCKnucklesWeldInfo[6].ModelA = KNUCKLES_OBJECTS[13];
		NPCKnucklesWeldInfo[6].ModelB = KNUCKLES_OBJECTS[14];
		NPCKnucklesWeldInfo[6].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_LegIndices_DC) / 2);
		NPCKnucklesWeldInfo[6].WeldType = 2;
		NPCKnucklesWeldInfo[6].anonymous_5 = 0;
		NPCKnucklesWeldInfo[6].VertexBuffer = 0;
		NPCKnucklesWeldInfo[6].VertIndexes = Knuckles_LegIndices_DC;
		NPCKnucklesWeldInfo[7].BaseModel = *KNUCKLES_OBJECTS;
		NPCKnucklesWeldInfo[7].ModelA = KNUCKLES_OBJECTS[14];
		NPCKnucklesWeldInfo[7].ModelB = KNUCKLES_OBJECTS[15];
		NPCKnucklesWeldInfo[7].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_LegIndices_DC) / 2);
		NPCKnucklesWeldInfo[7].WeldType = 2;
		NPCKnucklesWeldInfo[7].anonymous_5 = 0;
		NPCKnucklesWeldInfo[7].VertexBuffer = 0;
		NPCKnucklesWeldInfo[7].VertIndexes = Knuckles_LegIndices_DC;
		NPCKnucklesWeldInfo[8].BaseModel = *KNUCKLES_OBJECTS;
		NPCKnucklesWeldInfo[8].ModelA = KNUCKLES_OBJECTS[16];
		NPCKnucklesWeldInfo[8].ModelB = KNUCKLES_OBJECTS[17];
		NPCKnucklesWeldInfo[8].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_ShoeIndices_DC) / 2);
		NPCKnucklesWeldInfo[8].WeldType = 2;
		NPCKnucklesWeldInfo[8].anonymous_5 = 0;
		NPCKnucklesWeldInfo[8].VertexBuffer = 0;
		NPCKnucklesWeldInfo[8].VertIndexes = Knuckles_ShoeIndices_DC;
		NPCKnucklesWeldInfo[9].BaseModel = *KNUCKLES_OBJECTS;
		NPCKnucklesWeldInfo[9].ModelA = KNUCKLES_OBJECTS[18];
		v1 = KNUCKLES_OBJECTS[19];
		NPCKnucklesWeldInfo[9].VertIndexes = Knuckles_ShoeIndices_DC;
		NPCKnucklesWeldInfo[9].ModelB = v1;
		NPCKnucklesWeldInfo[9].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_ShoeIndices_DC) / 2);
		NPCKnucklesWeldInfo[9].WeldType = 2;
		NPCKnucklesWeldInfo[9].anonymous_5 = 0;
		NPCKnucklesWeldInfo[9].VertexBuffer = 0;
		NPCKnucklesWeldInfo[10].BaseModel = *KNUCKLES_OBJECTS;
		NPCKnucklesWeldInfo[10].ModelA = KNUCKLES_OBJECTS[20];
		NPCKnucklesWeldInfo[10].ModelB = KNUCKLES_OBJECTS[5];
		NPCKnucklesWeldInfo[10].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_HandIndices_DC) / 2);
		NPCKnucklesWeldInfo[10].WeldType = 2;
		NPCKnucklesWeldInfo[10].anonymous_5 = 0;
		NPCKnucklesWeldInfo[10].VertexBuffer = 0;
		NPCKnucklesWeldInfo[10].VertIndexes = Knuckles_HandIndices_DC;
		NPCKnucklesWeldInfo[11].BaseModel = *KNUCKLES_OBJECTS;
		NPCKnucklesWeldInfo[11].ModelA = KNUCKLES_OBJECTS[22];
		NPCKnucklesWeldInfo[11].ModelB = KNUCKLES_OBJECTS[9];
		NPCKnucklesWeldInfo[11].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_HandIndices_DC) / 2);
		NPCKnucklesWeldInfo[11].WeldType = 2;
		NPCKnucklesWeldInfo[11].anonymous_5 = 0;
		NPCKnucklesWeldInfo[11].VertexBuffer = 0;
		NPCKnucklesWeldInfo[11].VertIndexes = Knuckles_HandIndices_DC;
		NPCKnucklesWeldInfo[12].BaseModel = KNUCKLES_OBJECTS[1];
		NPCKnucklesWeldInfo[12].ModelA = KNUCKLES_OBJECTS[24];
		NPCKnucklesWeldInfo[12].ModelB = KNUCKLES_OBJECTS[25];
		NPCKnucklesWeldInfo[12].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_UpperArmIndices_DC) / 2);
		NPCKnucklesWeldInfo[12].WeldType = 2;
		NPCKnucklesWeldInfo[12].anonymous_5 = 0;
		NPCKnucklesWeldInfo[12].VertexBuffer = 0;
		NPCKnucklesWeldInfo[12].VertIndexes = Knuckles_UpperArmIndices_DC;
		NPCKnucklesWeldInfo[13].BaseModel = KNUCKLES_OBJECTS[1];
		NPCKnucklesWeldInfo[13].ModelA = KNUCKLES_OBJECTS[25];
		NPCKnucklesWeldInfo[13].ModelB = KNUCKLES_OBJECTS[26];
		NPCKnucklesWeldInfo[13].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_LowerArmIndices_DC) / 2);
		NPCKnucklesWeldInfo[13].WeldType = 2;
		NPCKnucklesWeldInfo[13].anonymous_5 = 0;
		NPCKnucklesWeldInfo[13].VertexBuffer = 0;
		NPCKnucklesWeldInfo[13].VertIndexes = Knuckles_LowerArmIndices_DC;
		NPCKnucklesWeldInfo[14].BaseModel = KNUCKLES_OBJECTS[1];
		NPCKnucklesWeldInfo[14].ModelA = KNUCKLES_OBJECTS[28];
		NPCKnucklesWeldInfo[14].ModelB = KNUCKLES_OBJECTS[29];
		NPCKnucklesWeldInfo[14].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_UpperArmIndices_DC) / 2);
		NPCKnucklesWeldInfo[14].WeldType = 2;
		NPCKnucklesWeldInfo[14].anonymous_5 = 0;
		NPCKnucklesWeldInfo[14].VertexBuffer = 0;
		NPCKnucklesWeldInfo[14].VertIndexes = Knuckles_UpperArmIndices_DC;
		NPCKnucklesWeldInfo[15].BaseModel = KNUCKLES_OBJECTS[1];
		NPCKnucklesWeldInfo[15].ModelA = KNUCKLES_OBJECTS[29];
		NPCKnucklesWeldInfo[15].ModelB = KNUCKLES_OBJECTS[30];
		NPCKnucklesWeldInfo[15].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_LowerArmIndices_DC) / 2);
		NPCKnucklesWeldInfo[15].WeldType = 2;
		NPCKnucklesWeldInfo[15].anonymous_5 = 0;
		NPCKnucklesWeldInfo[15].VertexBuffer = 0;
		NPCKnucklesWeldInfo[15].VertIndexes = Knuckles_LowerArmIndices_DC;
		NPCKnucklesWeldInfo[16].BaseModel = KNUCKLES_OBJECTS[1];
		NPCKnucklesWeldInfo[16].ModelA = KNUCKLES_OBJECTS[32];
		NPCKnucklesWeldInfo[16].ModelB = KNUCKLES_OBJECTS[33];
		NPCKnucklesWeldInfo[16].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_LegIndices_DC) / 2);
		NPCKnucklesWeldInfo[16].WeldType = 2;
		NPCKnucklesWeldInfo[16].anonymous_5 = 0;
		NPCKnucklesWeldInfo[16].VertexBuffer = 0;
		NPCKnucklesWeldInfo[16].VertIndexes = Knuckles_LegIndices_DC;
		NPCKnucklesWeldInfo[17].BaseModel = KNUCKLES_OBJECTS[1];
		NPCKnucklesWeldInfo[17].ModelA = KNUCKLES_OBJECTS[33];
		NPCKnucklesWeldInfo[17].ModelB = KNUCKLES_OBJECTS[34];
		NPCKnucklesWeldInfo[17].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_LegIndices_DC) / 2);
		NPCKnucklesWeldInfo[17].WeldType = 2;
		NPCKnucklesWeldInfo[17].anonymous_5 = 0;
		NPCKnucklesWeldInfo[17].VertexBuffer = 0;
		NPCKnucklesWeldInfo[17].VertIndexes = Knuckles_LegIndices_DC;
		NPCKnucklesWeldInfo[18].BaseModel = KNUCKLES_OBJECTS[1];
		NPCKnucklesWeldInfo[18].ModelA = KNUCKLES_OBJECTS[35];
		NPCKnucklesWeldInfo[18].ModelB = KNUCKLES_OBJECTS[36];
		NPCKnucklesWeldInfo[18].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_LegIndices_DC) / 2);
		NPCKnucklesWeldInfo[18].WeldType = 2;
		NPCKnucklesWeldInfo[18].anonymous_5 = 0;
		NPCKnucklesWeldInfo[18].VertexBuffer = 0;
		NPCKnucklesWeldInfo[18].VertIndexes = Knuckles_LegIndices_DC;
		NPCKnucklesWeldInfo[19].BaseModel = KNUCKLES_OBJECTS[1];
		NPCKnucklesWeldInfo[19].ModelA = KNUCKLES_OBJECTS[36];
		v2 = KNUCKLES_OBJECTS[37];
		NPCKnucklesWeldInfo[19].anonymous_5 = 0;
		NPCKnucklesWeldInfo[19].VertexBuffer = 0;
		NPCKnucklesWeldInfo[19].VertIndexes = Knuckles_LegIndices_DC;
		NPCKnucklesWeldInfo[19].ModelB = v2;
		NPCKnucklesWeldInfo[19].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_LegIndices_DC) / 2);
		NPCKnucklesWeldInfo[19].WeldType = 2;
		NPCKnucklesWeldInfo[20].BaseModel = KNUCKLES_OBJECTS[1];
		NPCKnucklesWeldInfo[20].ModelA = KNUCKLES_OBJECTS[38];
		NPCKnucklesWeldInfo[20].ModelB = KNUCKLES_OBJECTS[39];
		NPCKnucklesWeldInfo[20].anonymous_5 = 0;
		NPCKnucklesWeldInfo[20].VertexBuffer = 0;
		NPCKnucklesWeldInfo[20].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_ShoeIndices_DC) / 2);
		NPCKnucklesWeldInfo[20].WeldType = 2;
		NPCKnucklesWeldInfo[20].VertIndexes = Knuckles_ShoeIndices_DC;
		NPCKnucklesWeldInfo[21].BaseModel = KNUCKLES_OBJECTS[1];
		NPCKnucklesWeldInfo[21].ModelA = KNUCKLES_OBJECTS[40];
		v3 = KNUCKLES_OBJECTS[41];
		NPCKnucklesWeldInfo[21].anonymous_5 = 0;
		NPCKnucklesWeldInfo[21].VertexBuffer = 0;
		NPCKnucklesWeldInfo[21].ModelB = v3;
		NPCKnucklesWeldInfo[21].VertIndexes = Knuckles_ShoeIndices_DC;
		NPCKnucklesWeldInfo[21].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_ShoeIndices_DC) / 2);
		NPCKnucklesWeldInfo[21].WeldType = 2;
		NPCKnucklesWeldInfo[22].BaseModel = KNUCKLES_OBJECTS[1];
		NPCKnucklesWeldInfo[22].ModelA = KNUCKLES_OBJECTS[42];
		v4 = KNUCKLES_OBJECTS[27];
		NPCKnucklesWeldInfo[22].anonymous_5 = 0;
		NPCKnucklesWeldInfo[22].VertexBuffer = 0;
		NPCKnucklesWeldInfo[22].ModelB = v4;
		NPCKnucklesWeldInfo[22].VertIndexes = Knuckles_HandIndices_DC;
		NPCKnucklesWeldInfo[22].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_HandIndices_DC) / 2);
		NPCKnucklesWeldInfo[22].WeldType = 2;
		NPCKnucklesWeldInfo[23].BaseModel = KNUCKLES_OBJECTS[1];
		NPCKnucklesWeldInfo[23].ModelA = KNUCKLES_OBJECTS[44];
		v5 = KNUCKLES_OBJECTS[31];
		NPCKnucklesWeldInfo[23].anonymous_5 = 0;
		NPCKnucklesWeldInfo[23].VertexBuffer = 0;
		NPCKnucklesWeldInfo[24].BaseModel = 0;
		NPCKnucklesWeldInfo[24].ModelA = 0;
		NPCKnucklesWeldInfo[23].VertIndexes = Knuckles_HandIndices_DC;
		NPCKnucklesWeldInfo[24].ModelB = 0;
		NPCKnucklesWeldInfo[24].VertexPairCount = 0;
		NPCKnucklesWeldInfo[24].VertexBuffer = 0;
		NPCKnucklesWeldInfo[23].ModelB = v5;
		NPCKnucklesWeldInfo[23].VertexPairCount = (uint8_t)(LengthOfArray(Knuckles_HandIndices_DC) / 2);
		NPCKnucklesWeldInfo[23].WeldType = 2;
		NPCKnucklesWeldInfo[24].VertIndexes = 0;
	}

	void Init_Knuckles()
	{
		HMODULE hm = GetModuleHandle(L"CHRMODELS_orig");
		NJS_OBJECT** KNUCKLES_OBJECTS = (NJS_OBJECT**)GetProcAddress(hm, "___KNUCKLES_OBJECTS");
		KNUCKLES_OBJECTS[0]->child->child->sibling->sibling->sibling->sibling->child->child->sibling->sibling->sibling = KNUCKLES_OBJECTS[55];
		WriteJump((void*)0x007C94D0, InitKnucklesWeldInfo_mod);
		WriteJump((void*)0x007C9C80, InitNPCKnucklesWeldInfo_mod);
		WriteData((uint16_t**)0x0472CAC, (uint16_t*)&Knuckles_ShovelClawIndices_DC);
		WriteData((uint16_t**)0x0472B2C, (uint16_t*)&Knuckles_HandIndices_DC);
		WriteData((uint16_t**)0x0472835, (uint16_t*)&Knuckles_HandIndices_DC);
	}

	__declspec(dllexport) __declspec(dllexport) void __cdecl Init(const char* path, const HelperFunctions& helperFunctions)
	{
		//Welding
		Init_Knuckles();
		//Disable morphs
		WriteData<3>((void*)0x473FB2, 0x90u);
		WriteData<3>((void*)0x473CC1, 0x90u);
		WriteData<3>((void*)0x473FC7, 0x90u);
		WriteData<3>((void*)0x473CD5, 0x90u);

		//Functions

		//Replace textures
		ReplacePVM("knuckles", "HoneyOK");
	}
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}