cmake_minimum_required(VERSION 3.23)
project("废话生成器")

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled src/main.cpp src/Imported/WriteLexicon.cpp src/Imported/WriteLexicon.h src/Export/ReadLexicon.cpp src/Export/ReadLexicon.h src/Imported/Word/Word.hpp src/Imported/Word/Interface.hpp src/Imported/Word/Lib.h src/CFunction/Func.cpp src/CFunction/Func.h)
