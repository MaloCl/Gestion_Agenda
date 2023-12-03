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

LevelList *createLevelList(int nbcases);
//void addHeadCellToList(LevelList *list,Cell *cell);
void displayByLevelList(LevelList *list,int level);
void displayAllLevelList(LevelList *list);
void addCellToListLeveLZero(LevelList *list,Cell *cell);
void attributeLevels(LevelList *list);
void addLevelToList(LevelList *list, Levels *levels);
void updateLevelList(LevelList *list);

void createNCells(int numberOfValue,LevelList *list);

#endif //GESTIONAGENDA_LIST_H
