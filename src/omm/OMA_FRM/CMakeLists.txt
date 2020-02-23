# CMakeList.txt: test_cmake 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

project ("CFRM" VERSION 0.1)

set(CFRM_SOURCE_DIR src)

# 将源代码添加到此项目的可执行文件。
add_library(framework STATIC ${CMAKE_CURRENT_SOURCE_DIR}//framework.c)

# TODO: 如有需要，请添加测试并安装目标。
