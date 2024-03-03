cmake_minimum_required(VERSION 3.5)

project(Koeharjoittelua4 LANGUAGES C)

add_executable(Koeharjoittelua4 main.c)

install(TARGETS Koeharjoittelua4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
