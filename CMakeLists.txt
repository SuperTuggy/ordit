cmake_minimum_required(VERSION 3.16)


project(Ordit VERSION 0.1.0 LANGUAGES CXX) 
set(CMAKE_C_COMPILER "clang")
set(CMAKE_CXX_COMPILER "clang++")
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(ordit
    main.cpp
    planner.cpp
)

target_include_directories(ordit PRIVATE src)
