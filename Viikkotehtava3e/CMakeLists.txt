cmake_minimum_required(VERSION 3.5)

project(Viikkotehtava3e LANGUAGES C)

add_executable(Viikkotehtava3e main.c)

install(TARGETS Viikkotehtava3e
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
