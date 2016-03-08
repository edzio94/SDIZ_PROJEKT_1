cmake_minimum_required(VERSION 3.3)
project(SDIZ_PROJEKT_1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Headers/TwoDList.h Headers/CollectionsManager.h Headers/BinaryHeap.h )
add_executable(SDIZ_PROJEKT_1 ${SOURCE_FILES})