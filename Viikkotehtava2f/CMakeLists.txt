cmake_minimum_required(VERSION 3.5)

project(Viikkotehtava2f LANGUAGES C)

add_executable(Viikkotehtava2f main.c)

install(TARGETS Viikkotehtava2f
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
