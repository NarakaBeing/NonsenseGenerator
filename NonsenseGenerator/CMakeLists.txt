cmake_minimum_required(VERSION 3.23)
project("废话生成器")

set(CMAKE_CXX_STANDARD 17)

set(BOOST_ROOT "/opt/homebrew/Cellar/boost/1.79.0_2/include/boost")

include_directories(/opt/homebrew/Cellar/boost/1.79.0_2/include)

link_directories(/opt/homebrew/Cellar/boost/1.79.0_2/lib)

add_executable(untitled src/main.cpp src/Export/ReadLexicon.cpp src/Export/ReadLexicon.h src/CFunction/Func.cpp src/CFunction/Func.h src/Imported/FinalLib.hpp src/Imported/Word.hpp src/Imported/Sentence.hpp)

