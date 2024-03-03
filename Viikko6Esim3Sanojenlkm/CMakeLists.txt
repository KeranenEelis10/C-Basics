cmake_minimum_required(VERSION 3.5)

project(Viikko6Esim3Sanojenlkm LANGUAGES C)

add_executable(Viikko6Esim3Sanojenlkm main.c)

install(TARGETS Viikko6Esim3Sanojenlkm
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
