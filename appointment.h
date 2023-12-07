//
// Created by maloc on 03/12/2023.
//

#ifndef GESTIONAGENDA_APPOINTMENT_H
#define GESTIONAGENDA_APPOINTMENT_H
#include "nv.h"
#include "contact.h"

typedef struct Appointment{
    int day;
    int month;
    int year;
    int duration;
    int dateHour;
    char* subject;
}Appointment;

typedef struct CellAppointment{
    struct Appointment* value;
    struct CellAppointment* next;
}CellAppointment;

Appointment *createAppointment();
void deleteAppointment(Appointment *rdv);
CellAppointment *createCellAppointment();



#endif //GESTIONAGENDA_APPOINTMENT_H
