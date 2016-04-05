cmake_minimum_required(VERSION 3.3)
project(SDIZ_PROJEKT_1 )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Headers/TwoDList.h Headers/BinaryHeap.h  Headers/DataHandler.h Headers/Array.cpp Headers/Array.h  Headers/BinaryHeap.cpp Headers/Menu.cpp Headers/Menu.h Headers/TestingClass.cpp Headers/TestingClass.h Headers/DataHandler.cpp
        Headers/FileParser.h Headers/FileParser.cpp Headers/TwoDList.cpp t.txt)
set(CMAKE_SYSTEM_NAME Windows)

add_executable(SDIZ_PROJEKT_1 ${SOURCE_FILES})
