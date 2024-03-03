cmake_minimum_required(VERSION 3.5)

project(Tuntitehtavatn LANGUAGES C)

add_executable(Tuntitehtavatn main.c)

install(TARGETS Tuntitehtavatn
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
