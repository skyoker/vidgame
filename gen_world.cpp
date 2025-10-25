#include <iostream>
#include "world_gen.hpp"

int main() {
    std::cout << "Starting world generation...\n";
    generate_world();
    std::cout << "World generation completed.\n";
    return 0;
}