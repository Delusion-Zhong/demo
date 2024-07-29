cmake_minimum_required(VERSION 3.10)
project(ManagementSystems)

set(CMAKE_CXX_STANDARD 17)

# 添加源文件
add_executable(Main
    src/main.cpp
    src/workManager.cpp
)
