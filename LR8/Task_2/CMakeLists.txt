cmake_minimum_required(VERSION 3.27)
project(Task_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Task_2 main.cpp
        functions.h
        menu.cpp
        input.cpp
        output.cpp
        add.cpp
        solve.cpp
        delete_and_change.cpp)
