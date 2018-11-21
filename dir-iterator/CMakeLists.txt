cmake_minimum_required (VERSION 3.10)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
set(Boost_USE_STATIC_LIBS ON)

project(dir-iterator)

find_package(Boost REQUIRED COMPONENTS system filesystem)
message(status "** Boost Include: ${Boost_INCLUDE_DIR}")
message(status "** Boost Libraries: ${Boost_LIBRARY_DIRS}")
message(status "** Boost Libraries: ${Boost_LIBRARIES}")

include_directories(${Boost_INCLUDE_DIRS})
add_executable(dir-iterator dir-iterator.cpp)

target_link_libraries(dir-iterator -static-libgcc -static-libstdc++ Boost::system Boost::filesystem)
