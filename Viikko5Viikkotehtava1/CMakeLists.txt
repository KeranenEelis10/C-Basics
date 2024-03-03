cmake_minimum_required(VERSION 3.5)

project(Viikko5Viikkotehtava1 LANGUAGES C)

add_executable(Viikko5Viikkotehtava1 main.c)

install(TARGETS Viikko5Viikkotehtava1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
