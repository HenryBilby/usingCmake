cmake_minimum_required(VERSION 3.16)

project(using_cmake)

set(HELPERS_DIR src/helpers)
set(LIBRARIES_DIR src/libraries)

add_executable(using_cmake 
               src/main.cpp 
               ${HELPERS_DIR}/Print.cpp)

# set(OPENCV_INCLUDE_DIR /home/jdhao/local/include/opencv4/)
# set(OPENCV_LIB_DIR /home/jdhao/local/lib/)

# message(STATUS "OpenCV library path: ${OPENCV_LIB_DIR}")

# # set include directory
# target_include_directories(write_text PUBLIC "${OPENCV_INCLUDE_DIR}")

# # set library directory
# target_link_directories(write_text PUBLIC "${OPENCV_LIB_DIR}")

# link specific object files we need
# target_link_libraries(write_text opencv_imgcodecs opencv_core opencv_imgproc)

# Include the directory where LibMatematica project is. Otherwise, we can't use the
# library
add_subdirectory(${LIBRARIES_DIR}/MyMath)

# Link the executable and the library together
target_link_libraries(using_cmake MyMath)