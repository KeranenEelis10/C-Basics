cmake_minimum_required(VERSION 3.5)

project(Viikkotehtava1b LANGUAGES C)

add_executable(Viikkotehtava1b main.c)

install(TARGETS Viikkotehtava1b
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
