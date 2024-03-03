cmake_minimum_required(VERSION 3.5)

project(Viikkotehtava4c LANGUAGES C)

add_executable(Viikkotehtava4c main.c)

install(TARGETS Viikkotehtava4c
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
