# Minimum version of CMake required to build this project
cmake_minimum_required(VERSION 3.16)

# Name of the project
project(MyMath)

# Add a library to this build. The name of the library is MyMath and it
# consists of only the MyMath.cpp file
add_library(MyMath src/MyMath.cpp)

set(MYMATH_INCLUDE_DIR inc/)
target_include_directories(MyMath PUBLIC "${MYMATH_INCLUDE_DIR}")