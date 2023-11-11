//
// Created by maloc on 11/11/2023.
//

#ifndef GESTIONAGENDA_LIST_H
#define GESTIONAGENDA_LIST_H
#include "cell.h"

typedef struct LevelList{
    int maxLevel;
    int lastPosition;
    Cell **heads;
}LevelList;

LevelList *createLevelList(int maxLevel);
//void addHeadCellToList(LevelList *list,Cell *cell);
void displayByLevelList(LevelList *list,int level);
void displayAllLevelList(LevelList *list);
void addCellToListByLevel(LevelList *list,Cell *cell,int level);
void addCellToList(LevelList *list, Cell *cell);
void displayByLevelListJolie(LevelList *list,int level);

#endif //GESTIONAGENDA_LIST_H
