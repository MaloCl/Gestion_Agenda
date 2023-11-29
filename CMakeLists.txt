cmake_minimum_required(VERSION 3.26)
project(GestionAgenda C)

set(CMAKE_C_STANDARD 99)

add_executable(GestionAgenda main.c
        timer.c
        timer.h
        cell.c
        cell.h
        list.c
        list.h
        level.c
        level.h
        recherche.c
        recherche.h
)
