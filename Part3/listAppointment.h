//
// Created by maloc on 03/12/2023.
//

#ifndef GESTIONAGENDA_LISTAPPOINTMENT_H
#define GESTIONAGENDA_LISTAPPOINTMENT_H
#include "appointment.h"

typedef struct llcAppointment{
    CellAppointment* head;
    CellAppointment* last;
}llcAppointment;

void delCellFromList(CellAppointment *cell,llcAppointment *appointments);






#endif //GESTIONAGENDA_LISTAPPOINTMENT_H
