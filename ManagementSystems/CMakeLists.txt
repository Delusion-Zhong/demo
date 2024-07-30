cmake_minimum_required(VERSION 3.10)
project(ManagementSystems)

set(CMAKE_CXX_STANDARD 11)

# 添加 include 目录
include_directories(${PROJECT_SOURCE_DIR}/include)

# 添加 src 目录下的所有源文件
file(GLOB SOURCES "src/*.cpp")

# 设置可执行文件输出目录为 bin
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

add_executable(Main ${SOURCES})
