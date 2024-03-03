cmake_minimum_required(VERSION 3.5)

project(Viikko4Tuntiesimerkki2 LANGUAGES C)

add_executable(Viikko4Tuntiesimerkki2 main.c)

install(TARGETS Viikko4Tuntiesimerkki2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
