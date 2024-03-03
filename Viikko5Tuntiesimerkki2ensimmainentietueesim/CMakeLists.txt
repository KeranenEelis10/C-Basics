cmake_minimum_required(VERSION 3.5)

project(Viikko5Tuntiesimerkki2ensimmainentietueesim LANGUAGES C)

add_executable(Viikko5Tuntiesimerkki2ensimmainentietueesim main.c)

install(TARGETS Viikko5Tuntiesimerkki2ensimmainentietueesim
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
