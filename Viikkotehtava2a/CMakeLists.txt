cmake_minimum_required(VERSION 3.5)

project(Viikkotehtava2a LANGUAGES C)

add_executable(Viikkotehtava2a main.c)

install(TARGETS Viikkotehtava2a
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
