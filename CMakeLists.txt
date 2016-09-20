project(Bowling)
cmake_minimum_required(VERSION 2.6)

set(Bowling_VERSION_MAJOR 0)
set(Bowling_VERSION_MINOR 1)

set(OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/bin")
set(LIB_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/lib")

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules")
FIND_PACKAGE(CPPUNIT REQUIRED)

add_subdirectory(src)
add_subdirectory(include)
add_subdirectory(test)
