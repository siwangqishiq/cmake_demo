cmake_minimum_required(VERSION 3.10)

project(cmake_demo)

set(demo APP)

message(STATUS "binary dir :")
message(STATUS ${PROJECT_BINARY_DIR})
message(STATUS "source dir :")
message(STATUS ${PROJECT_SOURCE_DIR})

aux_source_directory(.  SOURCES)

add_executable(demo ${SOURCES})
