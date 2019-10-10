# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)

# 项目信息
project (solution2)

# 配置安装目录
set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR}/output)

# 查找目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

# 指定生成目标
add_executable(solution2 ${DIR_SRCS})

# 指定安装路径
install (TARGETS solution2 DESTINATION bin)
install (FILES "${PROJECT_SOURCE_DIR}/solution2.h" DESTINATION include)
