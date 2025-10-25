#pragma once

const int SCREEN_SIZEX = 1000;
const int SCREEN_SIZEY = 1000;

const int W_TILESX = 80;
const int W_TILESY = 80;

const int TILE_SIZEX = SCREEN_SIZEX / W_TILESX;
const int TILE_SIZEY = SCREEN_SIZEY / W_TILESY;

const int TILES_PER_CHUNK = 10;

const int TILES_PER_SCREENX = 16;
const int TILES_PER_SCREENY = 16;

const int CHUNKS_PER_WORLDX = W_TILESX / TILES_PER_CHUNK;
const int CHUNKS_PER_WORLDY = W_TILESY / TILES_PER_CHUNK;


// chunk convention; ch0x8y or for example chunk ch6x7y
// tile convention; t0x0y

// 0, 0 is left/topmost chunk
// 7, 7 is right/bottommost chunk

// JSON file format: 
// in one folder all 64 chunks as separate files named ch0x0y.json to ch7x7y.json
// each chunk file contains 10 by 10 tiles with their data
// each tile should have its type other properties will be included later: 

/*
a chunk file could look like this:
the file name should be chXxYy.json where X and Y are chunk coordinates

{
    "t0x0y": {"type": "rock"}
    "t1x0y": {"type": "water"}
    ... 
}
*/

void make_world_folder();
void create_chunk_file(int chunk_x, int chunk_y);
void generate_world();

