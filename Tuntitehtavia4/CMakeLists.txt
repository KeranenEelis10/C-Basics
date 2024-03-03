cmake_minimum_required(VERSION 3.5)

project(Tuntitehtavia4 LANGUAGES C)

add_executable(Tuntitehtavia4 main.c)

install(TARGETS Tuntitehtavia4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
