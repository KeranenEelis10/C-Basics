cmake_minimum_required(VERSION 3.5)

project(Viikko5Tuntiesimerkki3tietuetaulukko LANGUAGES C)

add_executable(Viikko5Tuntiesimerkki3tietuetaulukko main.c)

install(TARGETS Viikko5Tuntiesimerkki3tietuetaulukko
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
