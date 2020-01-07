add_library(
    utils
    Vec2D.h
    Vec2D.cpp
)

target_include_directories(utils PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")