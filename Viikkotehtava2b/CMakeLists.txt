cmake_minimum_required(VERSION 3.5)

project(Viikkotehtava2b LANGUAGES C)

add_executable(Viikkotehtava2b main.c)

install(TARGETS Viikkotehtava2b
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
