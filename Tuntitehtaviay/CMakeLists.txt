cmake_minimum_required(VERSION 3.5)

project(Tuntitehtaviay LANGUAGES C)

add_executable(Tuntitehtaviay main.c)

install(TARGETS Tuntitehtaviay
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
