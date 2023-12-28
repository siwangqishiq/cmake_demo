aux_source_directory(. LIB_SRCS)

# 动态库
# add_library(math SHARED ${LIB_SRCS})

# 静态库
add_library(math STATIC ${LIB_SRCS})


