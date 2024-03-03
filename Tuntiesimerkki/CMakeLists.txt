cmake_minimum_required(VERSION 3.5)

project(Tuntiesimerkki LANGUAGES C)

add_executable(Tuntiesimerkki main.c)

install(TARGETS Tuntiesimerkki
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
