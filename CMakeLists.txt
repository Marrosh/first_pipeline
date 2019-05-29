cmake_minimum_required (VERSION 2.6)

project (Example)

# The version number.
set (Example_VERSION_MAJOR 1)
set (Example_VERSION_MINOR 0)

# add the binary tree to the search path for include files
# so that we will find ExampleConfig.h
include_directories("${PROJECT_BINARY_DIR}")

add_executable(Example example.cpp)

#target_link_libraries (Tutorial MathFunctions)


