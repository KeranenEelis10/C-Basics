cmake_minimum_required(VERSION 3.5)

project(Viikko7Tuntiesimerkki2 LANGUAGES C)

add_executable(Viikko7Tuntiesimerkki2 main.c)

install(TARGETS Viikko7Tuntiesimerkki2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
