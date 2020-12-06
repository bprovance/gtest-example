cmake_minimum_required (VERSION 3.10)

set(PROJECT_NAME car-app)
project(${PROJECT_NAME})

set(SOURCES main.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/lib/)
target_link_libraries(${PROJECT_NAME} Car)