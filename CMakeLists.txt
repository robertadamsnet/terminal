cmake_minimum_required(VERSION 3.0.2)

add_library(terminal terminal.cpp)
target_link_libraries(terminal curses)
