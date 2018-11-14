cmake_minimum_required (VERSION 3.10)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

project(example)

find_package(Boost REQUIRED COMPONENTS regex)

include_directories(${Boost_INCLUDE_DIRS})
add_executable(example example.cpp)

target_link_libraries(example Boost::regex)
