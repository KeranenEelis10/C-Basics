cmake_minimum_required(VERSION 3.5)

project(Kokeentekoa LANGUAGES C)

add_executable(Kokeentekoa main.c)

install(TARGETS Kokeentekoa
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
