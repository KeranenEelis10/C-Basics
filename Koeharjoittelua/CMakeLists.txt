cmake_minimum_required(VERSION 3.5)

project(Koeharjoittelua LANGUAGES C)

add_executable(Koeharjoittelua main.c)

install(TARGETS Koeharjoittelua
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
