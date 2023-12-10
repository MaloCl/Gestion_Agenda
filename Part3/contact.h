//
// Created by maloc on 03/12/2023.
//

#ifndef GESTIONAGENDA_CONTACT_H
#define GESTIONAGENDA_CONTACT_H
#include "nv.h"

typedef struct Contact {
    char *firstName;
    char *lastName;
    char *fullName;
}Contact;

Contact *createContact();//Permet de creer un contact en demander les valeurs

Contact *createContactWithValues(char firstName[30],char lastName[30],char fullName[60]);//Permet de creer un contact avec toute les valeur donné en parametre (pour l'importation des fichiers)
#endif //GESTIONAGENDA_CONTACT_H
