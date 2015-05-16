/*
 * Maps.c
 *
 *  Created on: 8 Oct 2013
 *      Author: Jamie
 */

#include "MappingDefinitions.h"
#include "Tilesets.h"

const u16 map3_0[] = { 0x041C, 0x041D, 0x041C, 0x041D, 0x041C, 0x041D, 0x041C, 0x041D,
		0x041C, 0x041D, 0x041C, 0x041F, 0x32A6, 0x32A7, 0x041E, 0x041D,
		0x041C, 0x041D, 0x041C, 0x041D, 0x041C, 0x041D, 0x041C, 0x041D,
		0x0414, 0x0415, 0x0424, 0x0425, 0x0424, 0x0425, 0x0424, 0x0425,
		0x0424, 0x0425, 0x0424, 0x0427, 0x32AE, 0x32AF, 0x0426, 0x0425,
		0x0424, 0x0425, 0x0424, 0x0425, 0x0424, 0x0425, 0x0414, 0x0415,
		0x041C, 0x041F, 0x32A6, 0x328E, 0x328E, 0x328E, 0x328E, 0x328E,
		0x328E, 0x328E, 0x328E, 0x328E, 0x3285, 0x3286, 0x328E, 0x328E,
		0x328E, 0x328E, 0x328E, 0x328E, 0x328E, 0x328F, 0x041E, 0x041D,
		0x0414, 0x0417, 0x32AE, 0x3296, 0x3296, 0x3281, 0x3282, 0x3282,
		0x3282, 0x3283, 0x3296, 0x3296, 0x3296, 0x3296, 0x3281, 0x3282,
		0x3282, 0x3282, 0x3283, 0x3296, 0x3296, 0x3297, 0x0416, 0x0415,
		0x041C, 0x041F, 0x32AE, 0x32C7, 0x329E, 0x0689, 0x068A, 0x068A,
		0x068A, 0x068B, 0x32C6, 0x3296, 0x32C7, 0x329E, 0x0689, 0x068A,
		0x068A, 0x068A, 0x068B, 0x32C6, 0x3296, 0x3297, 0x041E, 0x041D,
		0x0414, 0x0417, 0x32AE, 0x3297, 0x3011, 0x0691, 0x0693, 0x0692,
		0x0692, 0x0694, 0x3295, 0x3296, 0x3297, 0x3011, 0x0691, 0x0693,
		0x0692, 0x0692, 0x0694, 0x3295, 0x3296, 0x3297, 0x0416, 0x0415,
		0x041C, 0x041F, 0x32AE, 0x3297, 0x32A5, 0x0698, 0x0699, 0x069A,
		0x069B, 0x069C, 0x3295, 0x3296, 0x3297, 0x32A5, 0x0698, 0x0699,
		0x069A, 0x069B, 0x069C, 0x3295, 0x3296, 0x3297, 0x041E, 0x041D,
		0x0414, 0x0417, 0x32AE, 0x3297, 0x06AD, 0x06A0, 0x06A3, 0x06A2,
		0x06A1, 0x06A4, 0x3295, 0x3296, 0x3297, 0x06AD, 0x06A0, 0x06A3,
		0x06A2, 0x06A1, 0x06A4, 0x3295, 0x3296, 0x3297, 0x0416, 0x0415,
		0x041C, 0x041F, 0x32AE, 0x32BF, 0x328E, 0x32BE, 0x3296, 0x32BF,
		0x328E, 0x328E, 0x32BE, 0x3296, 0x32BF, 0x328E, 0x32BE, 0x3296,
		0x32BF, 0x328E, 0x328E, 0x32BE, 0x3296, 0x3297, 0x041E, 0x041D,
		0x0414, 0x0417, 0x32AE, 0x3296, 0x3296, 0x3296, 0x3296, 0x3296,
		0x3296, 0x3296, 0x3296, 0x3296, 0x3296, 0x32A8, 0x32A9, 0x32A9,
		0x32A9, 0x32A9, 0x32BD, 0x32B5, 0x3296, 0x3297, 0x0416, 0x0415,
		0x041C, 0x041F, 0x32AE, 0x3296, 0x3296, 0x3296, 0x3296, 0x3296,
		0x3296, 0x3296, 0x3296, 0x3296, 0x32C7, 0x06B0, 0x06B1, 0x06B1,
		0x06B1, 0x06B1, 0x06B3, 0x06B4, 0x32CE, 0x3297, 0x041E, 0x041D,
		0x0414, 0x0417, 0x32AE, 0x3296, 0x32C7, 0x0684, 0x0684, 0x0684,
		0x0684, 0x0402, 0x32C6, 0x3296, 0x3297, 0x06B8, 0x06B9, 0x06B9,
		0x06B9, 0x06B9, 0x06BB, 0x06BC, 0x32AE, 0x3297, 0x0416, 0x0415,
		0x041C, 0x041F, 0x32AE, 0x3296, 0x3297, 0x3004, 0x3004, 0x3004,
		0x3004, 0x3011, 0x3295, 0x3296, 0x3297, 0x06C0, 0x06C1, 0x06D0,
		0x06C2, 0x06C3, 0x06C4, 0x06C5, 0x32AE, 0x3297, 0x041E, 0x041D,
		0x0414, 0x0417, 0x32AE, 0x3296, 0x3297, 0x3004, 0x3004, 0x3004,
		0x3004, 0x3008, 0x3295, 0x3296, 0x3297, 0x06C8, 0x06C9, 0x06D8,
		0x06AC, 0x06CB, 0x06CC, 0x06CD, 0x32AE, 0x3297, 0x0416, 0x0415,
		0x041C, 0x041F, 0x32AE, 0x3296, 0x3297, 0x0403, 0x3009, 0x3011,
		0x3009, 0x3011, 0x3295, 0x3296, 0x32BF, 0x328E, 0x328E, 0x32BE,
		0x3296, 0x32BF, 0x328E, 0x328E, 0x328C, 0x3297, 0x041E, 0x041D,
		0x0414, 0x0417, 0x32AE, 0x3296, 0x32BF, 0x328E, 0x328E, 0x328E,
		0x328E, 0x328E, 0x32BE, 0x3296, 0x32C7, 0x329E, 0x329E, 0x329E,
		0x329E, 0x329E, 0x329E, 0x32C6, 0x3296, 0x3297, 0x0416, 0x0415,
		0x041C, 0x041F, 0x32AE, 0x3296, 0x3296, 0x3296, 0x3296, 0x3296,
		0x3296, 0x3296, 0x3296, 0x3296, 0x3290, 0x0687, 0x0687, 0x0687,
		0x0402, 0x0687, 0x0687, 0x3288, 0x3296, 0x3297, 0x041E, 0x041D,
		0x0414, 0x0417, 0x32B6, 0x329E, 0x329E, 0x329E, 0x329E, 0x12D1,
		0x1123, 0x1123, 0x12D2, 0x3296, 0x3296, 0x3296, 0x3296, 0x3296,
		0x3296, 0x3296, 0x3296, 0x3296, 0x3296, 0x3297, 0x0416, 0x0415,
		0x041C, 0x041F, 0x3011, 0x3011, 0x3009, 0x3011, 0x3009, 0x112A,
		0x112B, 0x112B, 0x112C, 0x329E, 0x329E, 0x329E, 0x329E, 0x329E,
		0x329E, 0x329E, 0x329E, 0x329E, 0x329E, 0x329F, 0x041E, 0x041D,
		0x0414, 0x0417, 0x300E, 0x300F, 0x300E, 0x300F, 0x3008, 0x112A,
		0x112B, 0x112B, 0x112C, 0x3011, 0x3008, 0x3011, 0x3008, 0x3011,
		0x3008, 0x3011, 0x300E, 0x300F, 0x300E, 0x300F, 0x0416, 0x0415
};

const u16 map3_19[] = {
		0x041C, 0x041D, 0x041C, 0x041D, 0x041C, 0x041D, 0x041C, 0x041D,
		0x041C, 0x041F, 0x30DB, 0x30DC, 0x30DC, 0x30DD, 0x041E, 0x041D,
		0x041C, 0x041D, 0x041C, 0x041D, 0x041C, 0x041D, 0x041C, 0x041D,
		0x0414, 0x0415, 0x0424, 0x0425, 0x0424, 0x0425, 0x0424, 0x0425,
		0x0424, 0x0427, 0x30DB, 0x30DC, 0x30DC, 0x30DD, 0x0426, 0x0425,
		0x0424, 0x0425, 0x0424, 0x0425, 0x0424, 0x0425, 0x0414, 0x0415,
		0x041C, 0x041F, 0x3008, 0x3009, 0x3008, 0x3009, 0x3008, 0x3009,
		0x3008, 0x3009, 0x30DB, 0x30DC, 0x30DC, 0x30DD, 0x3009, 0x3008,
		0x3009, 0x3008, 0x3009, 0x3004, 0x3001, 0x3004, 0x041E, 0x041D,
		0x0414, 0x0417, 0x3010, 0x3011, 0x3010, 0x3011, 0x3010, 0x3011,
		0x300E, 0x300F, 0x30DB, 0x30DC, 0x30DC, 0x3103, 0x30D4, 0x30D4,
		0x30D4, 0x30D4, 0x30D4, 0x30D4, 0x30D4, 0x30D5, 0x0416, 0x0415,
		0x041C, 0x041F, 0x3008, 0x3009, 0x3008, 0x3009, 0x3008, 0x3009,
		0x041E, 0x041F, 0x30E3, 0x30E4, 0x30E4, 0x30E4, 0x30E4, 0x30E4,
		0x30E4, 0x30E4, 0x3104, 0x30DC, 0x30DC, 0x30DD, 0x041E, 0x041D,
		0x0414, 0x0417, 0x04B0, 0x0487, 0x0487, 0x0487, 0x0487, 0x04B1,
		0x0416, 0x0417, 0x04B0, 0x0487, 0x0487, 0x0487, 0x0487, 0x04B1,
		0x3010, 0x3011, 0x30E3, 0x30E4, 0x30E4, 0x30E5, 0x0416, 0x0415,
		0x041C, 0x041F, 0x3001, 0x3004, 0x3010, 0x3011, 0x3001, 0x3004,
		0x041E, 0x041F, 0x300D, 0x300D, 0x300D, 0x300D, 0x300D, 0x300D,
		0x300D, 0x300D, 0x300D, 0x300D, 0x300D, 0x300D, 0x041E, 0x041D,
		0x0414, 0x0417, 0x3004, 0x3001, 0x3008, 0x3009, 0x3004, 0x3008,
		0x0416, 0x0417, 0x300D, 0x300D, 0x300D, 0x300D, 0x300D, 0x300D,
		0x300D, 0x300D, 0x300D, 0x300D, 0x300D, 0x300D, 0x0416, 0x0415,
		0x041C, 0x041F, 0x3001, 0x3004, 0x3010, 0x3011, 0x3001, 0x3004,
		0x041E, 0x041F, 0x300D, 0x300D, 0x300D, 0x300D, 0x300D, 0x300D,
		0x300D, 0x300D, 0x300D, 0x300D, 0x300D, 0x300D, 0x041E, 0x041D,
		0x0414, 0x0417, 0x3004, 0x3001, 0x3008, 0x3009, 0x3004, 0x3001,
		0x0416, 0x0417, 0x300D, 0x300D, 0x300D, 0x300D, 0x300D, 0x300D,
		0x300D, 0x300D, 0x300D, 0x300D, 0x300D, 0x300D, 0x0416, 0x0415,
		0x041C, 0x041F, 0x04B0, 0x0487, 0x0487, 0x0487, 0x0487, 0x04B1,
		0x041E, 0x041F, 0x300D, 0x300D, 0x300D, 0x300D, 0x300D, 0x300D,
		0x300D, 0x300D, 0x300D, 0x300D, 0x300D, 0x300D, 0x041E, 0x041D,
		0x0414, 0x0417, 0x3010, 0x3004, 0x3010, 0x3011, 0x3010, 0x3011,
		0x0426, 0x0427, 0x3011, 0x3008, 0x3011, 0x30D3, 0x30D4, 0x30D4,
		0x30D4, 0x30D4, 0x30D4, 0x30D4, 0x30D4, 0x30D5, 0x0416, 0x0415,
		0x041C, 0x041F, 0x3004, 0x3010, 0x3008, 0x3010, 0x3008, 0x3010,
		0x3011, 0x3008, 0x3009, 0x3009, 0x3008, 0x30DB, 0x30DC, 0x3105,
		0x30E4, 0x30E4, 0x30E4, 0x30E4, 0x30E4, 0x30E5, 0x041E, 0x041D,
		0x0414, 0x0417, 0x3010, 0x3004, 0x3010, 0x3011, 0x3010, 0x3011,
		0x3008, 0x3010, 0x3011, 0x3011, 0x3010, 0x30E3, 0x30E4, 0x30E5,
		0x300D, 0x300D, 0x300D, 0x300D, 0x300D, 0x300D, 0x0416, 0x0415,
		0x041C, 0x041F, 0x300E, 0x300F, 0x3010, 0x3011, 0x3010, 0x3011,
		0x3010, 0x3011, 0x300E, 0x300F, 0x300E, 0x300F, 0x300E, 0x300F,
		0x300D, 0x300D, 0x300D, 0x300D, 0x300D, 0x300D, 0x041E, 0x041D,
		0x0414, 0x0417, 0x041E, 0x041F, 0x04B0, 0x0487, 0x0487, 0x0487,
		0x0487, 0x04B1, 0x041E, 0x041F, 0x041E, 0x041F, 0x041E, 0x041F,
		0x300D, 0x300D, 0x300D, 0x300D, 0x300D, 0x300D, 0x0416, 0x0415,
		0x041C, 0x041F, 0x0426, 0x0427, 0x3008, 0x3011, 0x3008, 0x3011,
		0x3008, 0x3011, 0x0426, 0x0425, 0x0424, 0x0425, 0x0424, 0x0427,
		0x300D, 0x300D, 0x300D, 0x300D, 0x300D, 0x300D, 0x041E, 0x041D,
		0x0414, 0x0417, 0x3011, 0x3008, 0x3011, 0x3008, 0x3011, 0x3008,
		0x3011, 0x3008, 0x3011, 0x3008, 0x3011, 0x30D3, 0x30D4, 0x30D5,
		0x300D, 0x300D, 0x300D, 0x300D, 0x300D, 0x300D, 0x0416, 0x0415,
		0x041C, 0x041F, 0x3010, 0x3011, 0x3010, 0x30D3, 0x30D4, 0x30D4,
		0x30D4, 0x30D4, 0x30D4, 0x30D4, 0x30D4, 0x3102, 0x30DC, 0x30DD,
		0x3011, 0x3008, 0x3011, 0x3004, 0x3008, 0x3004, 0x041E, 0x041D,
		0x0414, 0x0417, 0x3008, 0x3009, 0x3008, 0x30DB, 0x30DC, 0x30DC,
		0x3105, 0x30E4, 0x30E4, 0x30E4, 0x30E4, 0x30E4, 0x30E4, 0x30E5,
		0x3008, 0x3011, 0x3004, 0x3008, 0x3004, 0x3011, 0x0416, 0x0415,
		0x041C, 0x041F, 0x04B0, 0x04B1, 0x3008, 0x04C0, 0x0497, 0x0497,
		0x04C1, 0x3008, 0x3011, 0x04B0, 0x0487, 0x0487, 0x0487, 0x0487,
		0x0487, 0x0487, 0x0487, 0x0487, 0x0487, 0x04B1, 0x041E, 0x041D,
		0x0414, 0x0417, 0x3008, 0x3009, 0x3010, 0x30DB, 0x30DC, 0x30DC,
		0x3103, 0x30D4, 0x30D4, 0x30D4, 0x30D4, 0x30D4, 0x30D4, 0x30D4,
		0x30D4, 0x30D4, 0x30D4, 0x30D4, 0x30D4, 0x30D5, 0x0416, 0x0415,
		0x041C, 0x041F, 0x3008, 0x3009, 0x3008, 0x30E3, 0x30E4, 0x30E4,
		0x30E4, 0x30E4, 0x30E4, 0x30E4, 0x30E4, 0x30E4, 0x30E4, 0x30E4,
		0x30E4, 0x30E4, 0x3104, 0x30DC, 0x30DC, 0x30DD, 0x041E, 0x041D,
		0x0414, 0x0417, 0x3010, 0x3011, 0x3010, 0x3011, 0x3010, 0x3011,
		0x3010, 0x3011, 0x3010, 0x3011, 0x3010, 0x3011, 0x3010, 0x3011,
		0x3010, 0x3011, 0x30DB, 0x30DC, 0x30DC, 0x30DD, 0x0416, 0x0415,
		0x041C, 0x041F, 0x300E, 0x300F, 0x300E, 0x300F, 0x300E, 0x300F,
		0x300E, 0x300F, 0x300E, 0x300F, 0x300D, 0x300D, 0x300D, 0x300D,
		0x300D, 0x300D, 0x30DB, 0x30DC, 0x30DC, 0x30DD, 0x041E, 0x041D,
		0x0414, 0x0417, 0x041E, 0x041F, 0x041E, 0x041F, 0x041E, 0x041F,
		0x041E, 0x041F, 0x041E, 0x041F, 0x300D, 0x300D, 0x300D, 0x300D,
		0x300D, 0x300D, 0x30DB, 0x30DC, 0x30DC, 0x30DD, 0x0416, 0x0415,
		0x041C, 0x041F, 0x0426, 0x0425, 0x0424, 0x0425, 0x0424, 0x0425,
		0x0424, 0x0425, 0x0424, 0x0427, 0x300D, 0x300D, 0x300D, 0x300D,
		0x300D, 0x300D, 0x04C0, 0x0497, 0x0497, 0x04C1, 0x041E, 0x041D,
		0x0414, 0x0417, 0x3010, 0x3004, 0x3010, 0x3004, 0x3010, 0x3009,
		0x3008, 0x3009, 0x3008, 0x3009, 0x300D, 0x300D, 0x300D, 0x300D,
		0x300D, 0x300D, 0x30DB, 0x30DC, 0x30DC, 0x30DD, 0x0416, 0x0415,
		0x041C, 0x041F, 0x3004, 0x3008, 0x3004, 0x3010, 0x3001, 0x3011,
		0x3010, 0x3011, 0x3010, 0x3011, 0x300D, 0x300D, 0x300D, 0x300D,
		0x300D, 0x300D, 0x30DB, 0x30DC, 0x30DC, 0x30DD, 0x041E, 0x041D,
		0x0414, 0x0417, 0x30D3, 0x30D4, 0x30D4, 0x30D4, 0x30D4, 0x30D4,
		0x30D4, 0x30D4, 0x30D4, 0x30D4, 0x30D4, 0x30D4, 0x30D4, 0x30D4,
		0x30D4, 0x30D4, 0x3102, 0x30DC, 0x30DC, 0x30DD, 0x0416, 0x0415,
		0x041C, 0x041F, 0x30E3, 0x30E4, 0x30E4, 0x30E4, 0x30E4, 0x30E4,
		0x30E4, 0x30E4, 0x30E4, 0x3104, 0x30DC, 0x30DC, 0x3105, 0x30E4,
		0x30E4, 0x30E4, 0x30E4, 0x30E4, 0x30E4, 0x30E5, 0x041E, 0x041D,
		0x0414, 0x0417, 0x04B0, 0x0487, 0x0487, 0x04B1, 0x3009, 0x3008,
		0x3008, 0x0402, 0x04B0, 0x04C8, 0x0497, 0x0497, 0x04C9, 0x0487,
		0x0487, 0x0487, 0x0487, 0x0487, 0x0487, 0x04B1, 0x0416, 0x0415,
		0x041C, 0x041F, 0x3001, 0x3009, 0x300D, 0x300D, 0x300D, 0x300D,
		0x300D, 0x300D, 0x300D, 0x30DB, 0x30DC, 0x30DC, 0x30DD, 0x3008,
		0x3009, 0x300D, 0x300D, 0x300D, 0x300D, 0x300D, 0x041E, 0x041D,
		0x0414, 0x0417, 0x3001, 0x3011, 0x300D, 0x300D, 0x300D, 0x300D,
		0x300D, 0x300D, 0x300D, 0x30DB, 0x30DC, 0x30DC, 0x30DD, 0x3010,
		0x3011, 0x300D, 0x300D, 0x300D, 0x300D, 0x300D, 0x0416, 0x0415,
		0x041C, 0x041F, 0x300D, 0x300D, 0x300D, 0x300D, 0x300D, 0x300D,
		0x300D, 0x3009, 0x3004, 0x30E3, 0x30E4, 0x30E4, 0x30E5, 0x300D,
		0x300D, 0x300D, 0x300D, 0x300D, 0x3004, 0x3008, 0x041E, 0x041D,
		0x0414, 0x0417, 0x300D, 0x300D, 0x300D, 0x300D, 0x300D, 0x300D,
		0x300D, 0x3004, 0x3008, 0x3009, 0x300D, 0x300D, 0x3008, 0x300D,
		0x300D, 0x300D, 0x300D, 0x300D, 0x3009, 0x3004, 0x0416, 0x0415,
		0x041C, 0x041F, 0x04E7, 0x04E7, 0x04E7, 0x04E7, 0x04E7, 0x04E7,
		0x04E7, 0x04E7, 0x04E7, 0x04ED, 0x300D, 0x300D, 0x04EC, 0x04E7,
		0x04E7, 0x04E7, 0x04E7, 0x04E7, 0x04E7, 0x04E7, 0x041E, 0x041D,
		0x0414, 0x0417, 0x300E, 0x300F, 0x300E, 0x300F, 0x300E, 0x300F,
		0x300E, 0x300F, 0x300E, 0x06AB, 0x300D, 0x300D, 0x06AA, 0x300F,
		0x300E, 0x300F, 0x300E, 0x300F, 0x300E, 0x300F, 0x0416, 0x0415,
		0x041C, 0x041F, 0x041E, 0x041F, 0x041E, 0x041F, 0x041E, 0x041F,
		0x041E, 0x041F, 0x041E, 0x06BA, 0x300D, 0x300D, 0x06B2, 0x041F,
		0x041E, 0x041F, 0x041E, 0x041F, 0x041E, 0x041F, 0x041E, 0x041D,
		0x0414, 0x0415, 0x0414, 0x0415, 0x0414, 0x0415, 0x0414, 0x0415,
		0x0414, 0x0415, 0x0414, 0x0415, 0x300D, 0x300D, 0x0414, 0x0415,
		0x0414, 0x0415, 0x0414, 0x0415, 0x0414, 0x0415, 0x0414, 0x0415
};

const u16 map3_0BorderData[] = {
		0x001C, 0x001D, 0x0014, 0x0015
};

const MapConnectionData connectionData3_0[] = {
		{ 0x00000002, 0x00000000, 0x03, 0x1, 0x0000}, { 0x00000001, 0x00000000, 0x03, 0x27, 0x0000 }
};

const MapConnection connections3_0 = { 1, (MapConnectionData*)(&connectionData3_0) };

const MapConnectionData connectionData3_19[] = {
		{ 0x00000001, 0x00000000, 0x03, 0x0, 0x0000}
};

const MapConnection connections3_19 = { 1, (MapConnectionData*)(&connectionData3_19) };

const TEXT_LOCATION Tileset tileset0 = { 0x1, &Tileset0Tiles, &Tileset0Pal, &Tileset0MapBlock, &Tileset0AnimStruct, &Tileset0BlockInformation };
const TEXT_LOCATION Tileset tileset1 = { 0x101, &Tileset1Tiles, &Tileset1Pal, &Tileset1MapBlock, 0, &Tileset1BlockInformation };

const WildPokemonEntry wildData[] = { { 75, 3, 6, Caterpie }, { 25, 7, 9, Metapod } };

const WildPokemonData wildDataInner = { { 20, 20, 20, 20 }, { (WildPokemonEntry*)&wildData, 0, 0, 0 } };

const WildData mapWildData = { { (WildPokemonData*)&wildDataInner, 0, 0, 0, 0 } };

const MapFooter mapFooter3_0 = { 24, 20, &map3_0BorderData, &map3_0, &tileset0, &tileset1, 2, 2 };
const MapHeader mapHeader3_0 = { &mapFooter3_0, 0, 0, &connections3_0, Song_GSCPalletTown, { 3, 0 }, 0, 0, 0, 0, 0, 0, 0, 0, (WildData*)0 };

const MapFooter mapFooter3_19 = { 24, 40, &map3_0BorderData, &map3_19, &tileset0, &tileset1, 2, 2 };
const MapHeader mapHeader3_19 = { &mapFooter3_19, 0, 0, &connections3_19, Song_GSCRoute1, { 3, 19 }, 0, 0, 0, 0, 0, 0, 0, 0, (WildData*)&mapWildData };

const RODATA_LOCATION MapHeader* bankZero[] = { };

const RODATA_LOCATION MapHeader* bankOne[] = { };

const RODATA_LOCATION MapHeader* bankTwo[] = { };

const RODATA_LOCATION MapHeader* bankThree[] = { &mapHeader3_0, &mapHeader3_19 };

const RODATA_LOCATION MapHeader** maps[] = { &bankZero, &bankOne, &bankTwo, &bankThree };

const RODATA_LOCATION MapHeader* errorMap = &mapHeader3_0;
