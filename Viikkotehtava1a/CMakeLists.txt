cmake_minimum_required(VERSION 3.5)

project(Viikkotehtava1a LANGUAGES C)

add_executable(Viikkotehtava1a main.c)

install(TARGETS Viikkotehtava1a
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
