cmake_minimum_required(VERSION 4.1)
project(TempLogger)

set(CMAKE_CXX_STANDARD 20)

add_executable(TempLogger TempLogger.cpp
        cmake-build-debug/TempAnalyzer.cpp
        cmake-build-debug/TempAnalyzer.h)
