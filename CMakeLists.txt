# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(HomeWork01)

set(CMAKE_CXX_STANDARD 17)

add_executable(HomeWork01
        main.cpp
        Animals/animal.h
        Animals/beast.h
        Animals/bird.h
        Animals/fish.h
        Animals/src/beast.cpp
        Animals/src/bird.cpp
        Animals/src/fish.cpp Animals/src/animal.cpp Animals/utils.h Animals/utils.cpp Animals/container.h Animals/container.cpp Animals/constants.h)
