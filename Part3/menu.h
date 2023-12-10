//
// Created by maloc on 03/12/2023.
//

#ifndef GESTIONAGENDA_MENU_H
#define GESTIONAGENDA_MENU_H
#include "agenda.h"
#include "levelNameAgenda.h"


int functionMenu();//Affiche les choix possible

void switchChoice(int choice,Agenda* agenda, int* status);//Réalise la bonne action en fonction du choix

#endif //GESTIONAGENDA_MENU_H
