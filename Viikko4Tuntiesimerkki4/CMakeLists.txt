cmake_minimum_required(VERSION 3.5)

project(Viikko4Tuntiesimerkki4 LANGUAGES C)

add_executable(Viikko4Tuntiesimerkki4 main.c)

install(TARGETS Viikko4Tuntiesimerkki4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
