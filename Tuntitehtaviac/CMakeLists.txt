cmake_minimum_required(VERSION 3.5)

project(Tuntitehtaviac LANGUAGES C)

add_executable(Tuntitehtaviac main.c)

install(TARGETS Tuntitehtaviac
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
