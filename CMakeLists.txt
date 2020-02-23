# CMakeList.txt: test_cmake 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

project ("OMM" VERSION 0.1)

set(OMM_SOURCE_DIR src)
set(BINARY_DIR out)
# 将源代码添加到此项目的可执行文件。
add_library(omlib SHARED ${CMAKE_CURRENT_SOURCE_DIR}//omm/source/lib/user/src/lib.c)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}//omm/OMA_FRA ${CMAKE_BINARY_DIR}/cframe)
add_executable (aa ${CMAKE_SOURCE_DIR}/srcomm/source/aa/user/src/aa.c )

# TODO: 如有需要，请添加测试并安装目标。
