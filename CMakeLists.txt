cmake_minimum_required(VERSION 3.16.3)
project("codeCount")

set (CMAKE_CXX_STANDARD 11)

file(GLOB src 
    "src/*.cpp"
    "src/*.hpp"
)

add_executable(codeCount ${src})