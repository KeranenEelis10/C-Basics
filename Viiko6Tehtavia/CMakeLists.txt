cmake_minimum_required(VERSION 3.5)

project(Viiko6Tehtavia LANGUAGES C)

add_executable(Viiko6Tehtavia main.c)

install(TARGETS Viiko6Tehtavia
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
