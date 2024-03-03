cmake_minimum_required(VERSION 3.5)

project(Iltalaskuja LANGUAGES C)

add_executable(Iltalaskuja main.c)

install(TARGETS Iltalaskuja
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
