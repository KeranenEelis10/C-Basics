cmake_minimum_required(VERSION 3.5)

project(Koetesti LANGUAGES C)

add_executable(Koetesti main.c)

install(TARGETS Koetesti
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
