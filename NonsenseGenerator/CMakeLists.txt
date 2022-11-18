cmake_minimum_required(VERSION 3.23)
project("废话生成器")

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled src/main.cpp src/Export/Purser.cpp src/Export/Purser.h src/CFunction/Func.cpp src/CFunction/Func.h src/Imported/FinalLib.hpp src/Imported/Word.hpp src/Imported/Sentence.hpp)

