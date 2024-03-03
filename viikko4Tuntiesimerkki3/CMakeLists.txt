cmake_minimum_required(VERSION 3.5)

project(viikko4Tuntiesimerkki3 LANGUAGES C)

add_executable(viikko4Tuntiesimerkki3 main.c)

install(TARGETS viikko4Tuntiesimerkki3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
