cmake_minimum_required (VERSION 2.6)
project (Neuro)
set(CMAKE_CXX_FLAGS "-O3 -W -Wall -pedantic -std=c++11")




add_executable(neuro neuro.cpp main.cpp)


