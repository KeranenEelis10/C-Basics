cmake_minimum_required(VERSION 3.5)

project(Koeharjoittelua5 LANGUAGES C)

add_executable(Koeharjoittelua5 main.c)

install(TARGETS Koeharjoittelua5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
