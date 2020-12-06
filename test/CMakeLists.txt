cmake_minimum_required(VERSION 3.10)
set(PROJECT_NAME car-test)

set(SOURCES
    CarTest.cpp
    DmvTest.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/lib/)
include_directories(/usr/local/include)
target_link_libraries(${PROJECT_NAME} /usr/local/lib/libgtest.a)
target_link_libraries(${PROJECT_NAME} gmock gtest_main Car)

add_test(
    NAME ${PROJECT_NAME}
    COMMAND ${PROJECT_NAME}
)