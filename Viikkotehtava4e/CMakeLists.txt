cmake_minimum_required(VERSION 3.5)

project(Viikkotehtava4e LANGUAGES C)

add_executable(Viikkotehtava4e main.c)

install(TARGETS Viikkotehtava4e
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
