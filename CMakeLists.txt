cmake_minimum_required(VERSION 3.26)
project(GestionAgenda C)

set(CMAKE_C_STANDARD 99)

add_executable(GestionAgenda main.c
        "Part 3/timer.c"
        "Part 3/timer.h"
        Part2/cell.c
        Part2/cell.h
        Part2/list.c
        Part2/list.h
        Part2/level.c
        Part2/level.h
        Part2/recherche.c
        Part2/recherche.h
        "Part 3/contact.c"
        "Part 3/contact.h"
        "Part 3/agenda.c"
        "Part 3/agenda.h"
        "Part 3/appointment.c"
        "Part 3/appointment.h"
        "Part 3/listAppointment.c"
        "Part 3/listAppointment.h"
        "Part 3/nv.c"
        "Part 3/nv.h"
        "Part 3/levelNameAgenda.c"
        "Part 3/levelNameAgenda.h"
        "Part 3/menu.c"
        "Part 3/menu.h"
)
