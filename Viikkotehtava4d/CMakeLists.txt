cmake_minimum_required(VERSION 3.5)

project(Viikkotehtava4d LANGUAGES C)

add_executable(Viikkotehtava4d main.c)

install(TARGETS Viikkotehtava4d
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
