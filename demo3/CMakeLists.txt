cmake_minimum_required(VERSION 3.10)

project(demo)

aux_source_directory(. SRCS)

include_directories(lib)
add_subdirectory(lib)

# find_package(hello lib)
find_library(MY_DLL_LIBRARY hell PATHS lib)

if (hello_FOUND)
    add_executable(main ${SRCS})
    target_link_libraries(${PROJECT_NAME} ${hello})
else()
    message(status "not found lib hello")
endif()