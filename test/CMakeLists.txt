cmake_minimum_required (VERSION 2.8)
project(r-tree-test)

include_directories(${Boost_INCLUDE_DIRS})

file(GLOB TEST_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
file(GLOB TEST_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/*.h")

link_directories(${Boost_LIBRARY_DIRS})

ADD_DEFINITIONS(-DBOOST_TEST_DYN_LINK) 

add_executable(r-tree-test ${TEST_SOURCES} ${TEST_HEADERS})
target_link_libraries(r-tree-test
	rtree
	boost_unit_test_framework-mt
	${Boost_LIBRARIES}
	)

