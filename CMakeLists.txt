cmake_minimum_required(VERSION 3.26)
project(GestionAgenda C)

set(CMAKE_C_STANDARD 99)

add_executable(GestionAgenda main.c
        Part2/cell.c
        Part2/cell.h
        Part2/list.c
        Part2/list.h
        Part2/level.c
        Part2/level.h
        Part2/recherche.c
        Part2/recherche.h
        "Part3/contact.c"
        "Part3/contact.h"
        "Part3/agenda.c"
        "Part3/agenda.h"
        "Part3/appointment.c"
        "Part3/appointment.h"
        "Part3/listAppointment.c"
        "Part3/listAppointment.h"
        "Part3/nv.c"
        "Part3/nv.h"
        "Part3/levelNameAgenda.c"
        "Part3/levelNameAgenda.h"
        "Part3/menu.c"
        "Part3/menu.h"
        "Part3/docsFunction.c"
        "Part3/docsFunction.h"
        timer.h
        timer.c
)
