cmake_minimum_required(VERSION 3.5)

project(Viikkotehtava LANGUAGES C)

add_executable(Viikkotehtava main.c)

install(TARGETS Viikkotehtava
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
