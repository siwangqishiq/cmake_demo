cmake_minimum_required(VERSION 3.10)

project(demo)

add_subdirectory(lib_math)

aux_source_directory(. SRCS)

include_directories(lib_math)

add_executable(demo ${SRCS})

target_link_libraries(${PROJECT_NAME} math)

