cmake_minimum_required(VERSION 3.5)

project(Viikko4tuntiesimerkki LANGUAGES C)

add_executable(Viikko4tuntiesimerkki main.c)

install(TARGETS Viikko4tuntiesimerkki
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
