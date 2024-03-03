cmake_minimum_required(VERSION 3.5)

project(Koeharjoittelua2 LANGUAGES C)

add_executable(Koeharjoittelua2 main.c)

install(TARGETS Koeharjoittelua2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
