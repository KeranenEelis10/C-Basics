cmake_minimum_required(VERSION 3.5)

project(Viikkotehtava3c LANGUAGES C)

add_executable(Viikkotehtava3c main.c)

install(TARGETS Viikkotehtava3c
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
