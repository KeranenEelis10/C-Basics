cmake_minimum_required(VERSION 3.5)

project(Tuntitehtaviax LANGUAGES C)

add_executable(Tuntitehtaviax main.c)

install(TARGETS Tuntitehtaviax
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
