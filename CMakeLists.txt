cmake_minimum_required(VERSION 3.0)
project(CmakeTutorial_techsgin)

SET(VERSION_MAJOR "1")
SET(VERSION_MINOR "0")
SET(VERSION_PATCH "0")
SET(VERSION "${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}")

set(CMAKE_CXX_STANDARD 11)

# setenv
#--------
add_definitions(-DDEF_RET_YES)
#include_directories(${PROJECT_SOURCE_DIR}/inc)
include_directories("inc")
#link_directories(${PROJECT_SOURCE_DIR}/external/lib)

message("Binary Tree Path: ${PROJECT_BINARY_DIR}")

# add subfolders
#---------------
add_subdirectory(libssrc)
add_subdirectory(dlls)
add_subdirectory(execs)
