cmake_minimum_required(VERSION 3.4)

project(format_sample_01)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

string(REPLACE ":" ";" LIB_PATHS $ENV{LD_LIBRARY_PATH})
string(REPLACE ":" ";" INC_PATHS $ENV{CPLUS_INCLUDE_PATH})

set(CMAKE_LIBRARY_PATH ${CMAKE_LIBRARY_PATH} ${LIB_PATHS})
set(CMAKE_INCLUDE_PATH ${CMAKE_LIBRARY_PATH} ${INC_PATHS})

find_package(Boost COMPONENTS filesystem REQUIRED )

add_executable(format_sample_01 format_sample_01.cpp)
target_link_libraries(format_sample_01 PRIVATE ${Boost_LIBRARIES})
target_include_directories(format_sample_01 PRIVATE ${Boost_INCLUDE_DIR} )
