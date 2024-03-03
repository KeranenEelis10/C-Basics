cmake_minimum_required(VERSION 3.5)

project(Iltaharjoitus LANGUAGES C)

add_executable(Iltaharjoitus main.c)

install(TARGETS Iltaharjoitus
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
