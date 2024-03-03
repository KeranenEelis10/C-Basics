cmake_minimum_required(VERSION 3.5)

project(Viikko7tuntiesmierkki1 LANGUAGES C)

add_executable(Viikko7tuntiesmierkki1 main.c)

install(TARGETS Viikko7tuntiesmierkki1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
