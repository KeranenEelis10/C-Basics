cmake_minimum_required(VERSION 3.5)

project(Viikkotehtava4b LANGUAGES C)

add_executable(Viikkotehtava4b main.c)

install(TARGETS Viikkotehtava4b
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
