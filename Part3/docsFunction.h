//
// Created by maloc on 07/12/2023.
//

#ifndef GESTIONAGENDA_DOCSFUNCTION_H
#define GESTIONAGENDA_DOCSFUNCTION_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getLastNameFromDoc(int line);
char* getFirstNameFromDoc(int line);
char* makeFullName(char lastName[30],char firstName[30]);
#endif //GESTIONAGENDA_DOCSFUNCTION_H
