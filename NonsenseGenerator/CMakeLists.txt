cmake_minimum_required(VERSION 3.23)
project("废话生成器")

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled src/main.cpp src/WordFactory/WordFac.cpp src/WordFactory/WordFac.h src/WordFactory/WordLib.h src/EnhanAddon/EnhanAccess.cpp src/EnhanAddon/EnhanAccess.h src/EnhanAddon/EnhanWords.h)
