//
// Created by maloc on 15/11/2023.
//

#ifndef GESTIONAGENDA_LEVEL_H
#define GESTIONAGENDA_LEVEL_H
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct Levels{
    int* tabLevel;
    int maxlevel;
    int nbcases;
}Levels;


Levels *createLevelsTab(int nbCase);
void getTabLevel(Levels *levels);
int calculLevel(int maxCases);
void printTab(Levels *levels);

#endif //GESTIONAGENDA_LEVEL_H
