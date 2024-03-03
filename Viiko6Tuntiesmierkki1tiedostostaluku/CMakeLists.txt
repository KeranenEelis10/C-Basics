cmake_minimum_required(VERSION 3.5)

project(Viiko6Tuntiesmierkki1tiedostostaluku LANGUAGES C)

add_executable(Viiko6Tuntiesmierkki1tiedostostaluku main.c)

install(TARGETS Viiko6Tuntiesmierkki1tiedostostaluku
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
