cmake_minimum_required(VERSION 3.24)
project(labyrinth)

set(CMAKE_CXX_STANDARD 17)

add_executable(labyrinth main.cpp position/Position.cpp position/Position.h tile/Tile.cpp tile/Tile.h labyrinth/Labyrinth.cpp labyrinth/Labyrinth.h)
