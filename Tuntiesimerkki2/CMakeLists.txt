cmake_minimum_required(VERSION 3.5)

project(Tuntiesimerkki2 LANGUAGES C)

add_executable(Tuntiesimerkki2 main.c)

install(TARGETS Tuntiesimerkki2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
