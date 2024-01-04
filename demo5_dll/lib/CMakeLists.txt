cmake_minimum_required(VERSION 3.10)

project(hello)

aux_source_directory(. SRCS)

# 动态库
add_library(${PROJECT_NAME} SHARED ${SRCS})

# 静态库
# add_library(${PROJECT_NAME} STATIC ${SRCS})
