//
// Created by maloc on 11/11/2023.
//

#ifndef GESTIONAGENDA_LIST_H
#define GESTIONAGENDA_LIST_H
#include "cell.h"
#include "level.h"

typedef struct LevelList{
    int maxLevel;
    Cell **heads;
}LevelList;

LevelList *createLevelList(int nbcases);//Creer les liste chaines de toute les valeurs

void displayByLevelList(LevelList *list,int level);//Affiche toute les valeurs d'un seul niveau

void displayAllLevelList(LevelList *list);//Affiche toute les valeurs de tout les niveaux

void addCellToListLeveLZero(LevelList *list,Cell *cell);//Ajoute une cellule de valeur au niveau 0

void attributeLevels(LevelList *list);//Attribue le niveau a chaque valeur en fonction de sa position

void addLevelToList(LevelList *list, Levels *levels);//Attribue les niveau a partir de la liste

void updateLevelList(LevelList *list);//Creer la liste chainé de chaque niveau

void createNCells(int numberOfValue,LevelList *list);//Creer N nombre de cellules et les ajoute dans la liste

#endif //GESTIONAGENDA_LIST_H
