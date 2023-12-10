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

Appointment *createAppointment();//Permet de creer un rendez vous

void deleteAppointment(Appointment *rdv);//Permet de suprimer un rendez vous

CellAppointment *createCellAppointment();//Permet de creer une cellule de rendez vous pour la liste chainé



#endif //GESTIONAGENDA_APPOINTMENT_H
