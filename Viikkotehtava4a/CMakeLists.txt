cmake_minimum_required(VERSION 3.5)

project(Viikkotehtava4a LANGUAGES C)

add_executable(Viikkotehtava4a main.c)

install(TARGETS Viikkotehtava4a
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
