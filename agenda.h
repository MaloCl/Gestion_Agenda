//
// Created by maloc on 03/12/2023.
//

#ifndef GESTIONAGENDA_AGENDA_H
#define GESTIONAGENDA_AGENDA_H
#include "contact.h"
#include "appointment.h"

typedef struct Agenda{
    struct Contact guy;
    struct llcAppointment appointments;
};

#endif //GESTIONAGENDA_AGENDA_H
