cmake_minimum_required(VERSION 3.5)

project(Viikkotehtava3b2 LANGUAGES C)

add_executable(Viikkotehtava3b2 main.c)

install(TARGETS Viikkotehtava3b2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
