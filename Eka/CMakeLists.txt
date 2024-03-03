cmake_minimum_required(VERSION 3.5)

project(Eka LANGUAGES C)

add_executable(Eka main.c)

install(TARGETS Eka
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
