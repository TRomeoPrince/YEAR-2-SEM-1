cmake_minimum_required(VERSION 3.16)

project(Group4DataViz LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(dataviz
    src/Statistics.cpp
)

target_include_directories(dataviz
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(statistics_example
    examples/statistics_example.cpp
)

target_link_libraries(statistics_example
    PRIVATE dataviz
)

add_executable(test_statistics
    tests/test_statistics.cpp
)

target_link_libraries(test_statistics
    PRIVATE dataviz
)
