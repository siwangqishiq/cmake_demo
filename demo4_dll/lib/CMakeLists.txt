cmake_minimum_required(VERSION 3.10)

project(hello)

aux_source_directory(. HELLO_SRCS)

# 动态库
# add_library(${PROJECT_NAME} SHARED ${HELLO_SRCS})

# 静态库
add_library(${PROJECT_NAME} STATIC ${HELLO_SRCS})
