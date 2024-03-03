cmake_minimum_required(VERSION 3.5)

project(Viikkotehtava1c LANGUAGES C)

add_executable(Viikkotehtava1c main.c)

install(TARGETS Viikkotehtava1c
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
