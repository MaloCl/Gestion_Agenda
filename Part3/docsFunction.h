//
// Created by maloc on 07/12/2023.
//

#ifndef GESTIONAGENDA_DOCSFUNCTION_H
#define GESTIONAGENDA_DOCSFUNCTION_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getLastNameFromDoc(int line);//Permet de recuperer un nom dans le document des noms

char* getFirstNameFromDoc(int line);//Permet de recuperer un prénom dans le document des prénoms

char* makeFullName(char lastName[30],char firstName[30]);//Permet de creer un nom_prenom avec les données des documents
#endif //GESTIONAGENDA_DOCSFUNCTION_H
