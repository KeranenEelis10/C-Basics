cmake_minimum_required(VERSION 3.5)

project(Viikkotehtava3d LANGUAGES C)

add_executable(Viikkotehtava3d main.c)

install(TARGETS Viikkotehtava3d
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
