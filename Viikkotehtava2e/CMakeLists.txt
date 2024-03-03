cmake_minimum_required(VERSION 3.5)

project(Viikkotehtava2e LANGUAGES C)

add_executable(Viikkotehtava2e main.c)

install(TARGETS Viikkotehtava2e
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
