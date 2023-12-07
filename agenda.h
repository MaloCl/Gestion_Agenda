//
// Created by maloc on 03/12/2023.
//

#ifndef GESTIONAGENDA_AGENDA_H
#define GESTIONAGENDA_AGENDA_H
#include "contact.h"
#include "appointment.h"

typedef struct AgendaCell{
    Contact *value;
    struct AgendaCell **arrayNext;
    llcAppointment *appointments;
    int level;
}AgendaCell;

typedef struct Agenda{
    AgendaCell* head;
}Agenda;



AgendaCell *createAgendaCell(Contact *guy);
Agenda *createAgenda();
void displayAppointmentByContact(AgendaCell *cell);

void addContactToAgenda(Agenda *agenda, Contact *person);

void addAppointmentToContact(char fullName[30],AgendaCell *cell);

void addAppointmenttoContacttoAgenda(Agenda *agenda,char fullName[60]);

void autoCompletionContact(Agenda *agenda);

AgendaCell *researchContact(Agenda *agenda);





#endif //GESTIONAGENDA_AGENDA_H
