cmake_minimum_required(VERSION 3.16.2)

# set the project name
project(ArcadeApp VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# configure file
configure_file(src/ArcadeAppConfig.h.in src/ArcadeAppConfig.h)

add_subdirectory(src/utils)

# includes
# target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_BINARY_DIR}")

# add the executable
add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE utils)