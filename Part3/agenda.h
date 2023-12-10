//
// Created by maloc on 03/12/2023.
//

#ifndef GESTIONAGENDA_AGENDA_H
#define GESTIONAGENDA_AGENDA_H
#include "listAppointment.h"


typedef struct AgendaCell{
    Contact *value;
    struct AgendaCell **arrayNext;
    llcAppointment *appointments;
    int level;
}AgendaCell;

typedef struct Agenda{
    AgendaCell* head;
}Agenda;



AgendaCell *createAgendaCell(Contact *guy);//Permet de creer une nouvelle cellule de l'agenda

Agenda *createAgenda();//Permet de creer un nouvel agenda

void displayAppointmentByContact(AgendaCell *cell);//Permet d'afficher tout les rendez vous d'un contact donné

void addContactToAgenda(Agenda *agenda, Contact *person);//Permet d'ajouter un contact dans l'agenda

void addAppointmentToContact(char fullName[60],AgendaCell *cell);//Permet d'ajouter un rendez vous a un contact

void addAppointmenttoContacttoAgenda(Agenda *agenda,char fullName[60]);//Permet d'ajouter un rendez vous a un contact a partir de l'agenda

void autoCompletionContact(Agenda *agenda);//Permet de donné tout les prenoms commençant par les 3 lettre donné

AgendaCell *researchContact(Agenda *agenda);//Permet de cherrcher un contact dans l'agenda







#endif //GESTIONAGENDA_AGENDA_H
