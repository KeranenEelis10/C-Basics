cmake_minimum_required(VERSION 3.5)

project(Koeharjoittelua7 LANGUAGES C)

add_executable(Koeharjoittelua7 main.c)

install(TARGETS Koeharjoittelua7
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
