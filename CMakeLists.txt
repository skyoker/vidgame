cmake_minimum_required(VERSION 3.16)
project(VidGame)

set(CMAKE_CXX_STANDARD 17)

find_package(SFML 3 REQUIRED COMPONENTS System Window Graphics Audio)

add_executable(VidGame
    main.cpp
    gen_world_func.cpp
)

target_link_libraries(VidGame PRIVATE SFML::System SFML::Window SFML::Graphics SFML::Audio)
