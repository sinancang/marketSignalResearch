cmake_minimum_required(VERSION 3.21)
project(AI_Trader)

set(CMAKE_CXX_STANDARD 14)

add_executable(AI_Trader signal.h Data.h contrarianSignal.cpp percentPriceData.cpp percentPriceData.h contrarianSignal.h parseCSV.h main.cpp parseCSV.cpp)
