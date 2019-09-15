cmake_minimum_required(VERSION 3.14)
project(stringExe)

set(CMAKE_CXX_STANDARD 98)

add_executable(stringExe main.cpp MyString.cpp MyString.h stringFunctions.cpp stringFunctions.h tests.cpp tests.h)