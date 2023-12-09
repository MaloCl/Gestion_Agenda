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

Contact *createContact();
Contact *createContactWithValues(char firstName[30],char lastName[30],char fullName[60]);
#endif //GESTIONAGENDA_CONTACT_H
