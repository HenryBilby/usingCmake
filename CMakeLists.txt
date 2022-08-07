cmake_minimum_required(VERSION 3.16)

project(usingCmake)

set(PROJECT_INCLUDE_DIR inc/)
set(LIBRARIES_DIR src/libraries)

add_executable(usingCmake 
               main.cpp
               src/MathOperations.cpp)

# Include the directory where MyMath project is. Otherwise, we can't use the
# library
add_subdirectory(${LIBRARIES_DIR}/MyMath)

target_include_directories(usingCmake PUBLIC "${PROJECT_INCLUDE_DIR}" "${LIBRARIES_DIR}")

# Link the executable and the library together
target_link_libraries(usingCmake MyMath)