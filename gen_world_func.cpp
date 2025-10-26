/*

#include <filesystem>
#include <iostream>
#include <fstream>
//#include "world_gen.hpp"

namespace fs = std::filesystem;

void make_world_folder() {
    fs::path folder_path = "./world_data";

    if (fs::exists(folder_path)) {
        // Remove existing folder and all its contents
        std::cout << "Folder already exists. Deleting existing folder and its contents.\n";
        fs::remove_all(folder_path);
        std::cout << "Deleted existing folder.\n";

    }

    // Create folder
    std::cout << "Creating world_data folder.\n";
    fs::create_directory(folder_path);
    std::cout << "Created folder: " << folder_path << "\n";
}


void create_chunk_file(int chunk_x, int chunk_y) {
    fs::path folder_path = "./world_data";
    std::string file_name = "ch" + std::to_string(chunk_x) + "x" + std::to_string(chunk_y) + "y.json";
    fs::path file_path = folder_path / file_name;

    std::ofstream chunk_file(file_path); // Create and open the file
    if (!chunk_file.is_open()) {
        std::cerr << "Failed to create chunk file: " << file_path << "\n";
        return;
    }

    chunk_file << "{\n";
    for (int tile_x = 0; tile_x < TILES_PER_CHUNK; ++tile_x) {
        for (int tile_y = 0; tile_y < TILES_PER_CHUNK; ++tile_y) {
            chunk_file << "    \"t" << tile_x << "x" << tile_y << "y\": {\"type\": \"rock\"}";
            if (!(tile_x == TILES_PER_CHUNK - 1 && tile_y == TILES_PER_CHUNK - 1)) {
                chunk_file << ",";
            }
            chunk_file << "\n";
        }
    }
    chunk_file << "}\n";
    chunk_file.close();

    std::cout << "Created chunk file: " << file_path << "\n";
}


void generate_world() {
    make_world_folder();
    
    for (int chunk_x = 0; chunk_x < CHUNKS_PER_WORLDX; ++chunk_x) {
        for (int chunk_y = 0; chunk_y < CHUNKS_PER_WORLDY; ++chunk_y) {
            create_chunk_file(chunk_x, chunk_y);
        }
    }

    std::cout << "World generation complete.\n";
}




*/