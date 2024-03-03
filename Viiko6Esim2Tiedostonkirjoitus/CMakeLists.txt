cmake_minimum_required(VERSION 3.5)

project(Viiko6Esim2Tiedostonkirjoitus LANGUAGES C)

add_executable(Viiko6Esim2Tiedostonkirjoitus main.c)

install(TARGETS Viiko6Esim2Tiedostonkirjoitus
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
