cmake_minimum_required(VERSION 3.5)

project(Viikkotehtava2c LANGUAGES C)

add_executable(Viikkotehtava2c main.c)

install(TARGETS Viikkotehtava2c
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
