#include "stdafx.h"
#include "TerrainGenerator.h"

#include "GameManager.h"
#include "SimplexNoise.h"
#include "BlockData.h"
#include "Errors.h"
#include "ImageLoader.h"
#include "TexturePackLoader.h"

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

float mountainBase = 600.0f;

nString TerrainFunctionHelps[NumTerrainFunctions];

#ifndef ABS
#define ABS(a) (((a) < 0) ?(-(a)):(a))
#endif

Biome blankBiome;
