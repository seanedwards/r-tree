cmake_minimum_required (VERSION 2.8)
project(r-tree)

find_package(Boost 1.50 COMPONENTS unit_test_framework REQUIRED)

include_directories(${Boost_INCLUDE_DIRS} "${CMAKE_CURRENT_SOURCE_DIR}/include")

file(GLOB RTREE_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
file(GLOB RTREE_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/include/*.h")

add_library(rtree ${RTREE_SOURCES} ${RTREE_HEADERS})

add_subdirectory(test)


