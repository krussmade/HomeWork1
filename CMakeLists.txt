cmake_minimum_required(VERSION 3.20)
project(CPrograms)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES
        rnd.h
        beast.h
        bird.h
        fish.h
        container.h
        container.cpp
        bird.cpp
        beast.cpp
        fish.cpp
        main.cpp)

add_executable(CPrograms ${SOURCE_FILES})

