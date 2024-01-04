cmake_minimum_required(VERSION 3.10)

project(app)

aux_source_directory(. SRCS)
include_directories(../lib)

# link_directories(../lib)
find_library(HELLO_LIBRARY
    NAMES hello
    PATHS ../lib
)

if(HELLO_LIBRARY)
    message("Found hello library: ${HELLO_LIBRARY}")
else()
    message(FATAL_ERROR "hello library not found")
endif()

add_executable(app ${SRCS})
target_link_libraries(${PROJECT_NAME} ${HELLO_LIBRARY})