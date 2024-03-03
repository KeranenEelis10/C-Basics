cmake_minimum_required(VERSION 3.5)

project(Viikko5Tuntiesimerkki4osoitintietueeseen LANGUAGES C)

add_executable(Viikko5Tuntiesimerkki4osoitintietueeseen main.c)

install(TARGETS Viikko5Tuntiesimerkki4osoitintietueeseen
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
