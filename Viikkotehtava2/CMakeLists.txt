cmake_minimum_required(VERSION 3.5)

project(Viikkotehtava2 LANGUAGES C)

add_executable(Viikkotehtava2 main.c)

install(TARGETS Viikkotehtava2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
