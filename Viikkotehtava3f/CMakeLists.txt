cmake_minimum_required(VERSION 3.5)

project(Viikkotehtava3f LANGUAGES C)

add_executable(Viikkotehtava3f main.c)

install(TARGETS Viikkotehtava3f
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
