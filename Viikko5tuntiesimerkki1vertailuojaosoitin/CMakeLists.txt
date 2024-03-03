cmake_minimum_required(VERSION 3.5)

project(Viikko5tuntiesimerkki1vertailuojaosoitin LANGUAGES C)

add_executable(Viikko5tuntiesimerkki1vertailuojaosoitin main.c)

install(TARGETS Viikko5tuntiesimerkki1vertailuojaosoitin
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
