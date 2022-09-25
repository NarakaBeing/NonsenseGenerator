cmake_minimum_required(VERSION 3.23)
project("废话生成器")

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled src/main.cpp src/WordFactory/WordFac.cpp src/WordFactory/WordFac.h src/WordFactory/WordFactory.cpp src/WordFactory/WordFactory.h src/WordFactory/WordLib.h src/Interpreter/EnhanAddon.cpp src/Interpreter/EnhanAddon.h)
