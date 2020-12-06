cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(PROJECT_NAME Car)
project(${PROJECT_NAME})

add_subdirectory(lib)
add_subdirectory(apps)

# Allow GTest
enable_testing()
add_subdirectory(googletest)
add_subdirectory(test)