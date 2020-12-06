cmake_minimum_required (VERSION 3.10)

set(PROJECT_NAME Car)
project(${PROJECT_NAME})

set (SOURCES
    Car.cpp
    Car.h
    CarInterface.h
    DmvInterface.h
    Dmv.h
    Dmv.cpp
)

add_library(${PROJECT_NAME} STATIC ${SOURCES})