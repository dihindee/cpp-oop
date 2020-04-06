# cmake_minimum_required(VERSION <specify CMake version here>)
cmake_minimum_required(VERSION 3.10)
project(oop)

set(CMAKE_CXX_STANDARD 17)

add_executable(oop main.cpp Animal.cpp Animal.h Mammal.cpp Mammal.h Fish.cpp Fish.h Bird.cpp Bird.h TerreMammal.cpp TerreMammal.h SeaMammal.cpp SeaMammal.h)
