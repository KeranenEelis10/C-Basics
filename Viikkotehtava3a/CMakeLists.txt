cmake_minimum_required(VERSION 3.5)

project(Viikkotehtava3a LANGUAGES C)

add_executable(Viikkotehtava3a main.c)

install(TARGETS Viikkotehtava3a
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
