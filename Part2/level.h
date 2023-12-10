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


Levels *createLevelsTab(int nbCase);//Creer un tableau ou sera stocké le niveau de chaque Nème valeurs

void getTabLevel(Levels *levels);//Ajoute les niveau dans le tableau

int calculLevel(int maxCases);//Donne le niveau maximal en focntion du nombre de case donné

void printTab(Levels *levels);//affiche le tableau des niveaux (pour verifier qu'il fonctionne correctement)

#endif //GESTIONAGENDA_LEVEL_H
