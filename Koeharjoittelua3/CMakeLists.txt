cmake_minimum_required(VERSION 3.5)

project(Koeharjoittelua3 LANGUAGES C)

add_executable(Koeharjoittelua3 main.c)

install(TARGETS Koeharjoittelua3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
