cmake_minimum_required(VERSION 3.13)
project(Chart)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_PREFIX_PATH /home/saji/Qt5.10.0/5.10.0/gcc_64/lib/cmake)

find_package(Qt5Charts REQUIRED)

add_executable(Chart main.cpp)

target_link_libraries(${PROJECT_NAME} Qt5::Charts)