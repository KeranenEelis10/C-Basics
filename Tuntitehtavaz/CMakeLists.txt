cmake_minimum_required(VERSION 3.5)

project(Tuntitehtavaz LANGUAGES C)

add_executable(Tuntitehtavaz main.c)

install(TARGETS Tuntitehtavaz
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
