cmake_minimum_required (VERSION 3.10)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

project(unit-tests)
find_package(Boost REQUIRED)

SET (CMAKE_LIBRARY_OUTPUT_DIRECTORY
    ${PROJECT_BINARY_DIR}/bin
    CACHE PATH
    "Single Directory for all"
)

SET (CMAKE_RUNTIME_OUTPUT_DIRECTORY
    ${PROJECT_BINARY_DIR}/bin
    CACHE PATH
    "Single Directory for all"
)

SET (CMAKE_ARCHIVE_OUTPUT_DIRECTORY
    ${PROJECT_BINARY_DIR}/lib
    CACHE PATH
    "Single Directory for all"
)

include_directories(include)
add_subdirectory(src build/src) 
add_subdirectory(test build/test)
enable_testing()
