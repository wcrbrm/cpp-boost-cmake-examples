cmake_minimum_required (VERSION 3.10)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

project(readnetstat)

find_package(Boost COMPONENTS system REQUIRED)

include_directories(${Boost_INCLUDE_DIRS})
add_executable(readnetstat read-netstat.cpp)

target_link_libraries(readnetstat Boost::system)