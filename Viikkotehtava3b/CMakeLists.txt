cmake_minimum_required(VERSION 3.5)

project(Viikkotehtava3b LANGUAGES C)

add_executable(Viikkotehtava3b main.c)

install(TARGETS Viikkotehtava3b
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
