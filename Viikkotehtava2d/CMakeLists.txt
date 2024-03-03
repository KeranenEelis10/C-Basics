cmake_minimum_required(VERSION 3.5)

project(Viikkotehtava2d LANGUAGES C)

add_executable(Viikkotehtava2d main.c)

install(TARGETS Viikkotehtava2d
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
