cmake_minimum_required(VERSION 3.16)

project(sfml CXX)
enable_testing()

list(APPEND CMAKE_MODULE_PATH /usr/share/SFML/cmake/Modules)
find_package(SFML COMPONENTS graphics window system REQUIRED)

add_executable(sfml main.cpp animation.cpp entity.cpp asteroid.cpp bullet.cpp player.cpp)
target_compile_options(sfml PRIVATE -Wall -Wextra)
target_link_libraries(sfml PRIVATE sfml-window sfml-graphics sfml-system)
