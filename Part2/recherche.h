//
// Created by maloc on 29/11/2023.
//

#ifndef GESTIONAGENDA_RECHERCHE_H
#define GESTIONAGENDA_RECHERCHE_H
#include "list.h"
#include "../Part 3/timer.h"


Cell *searchingValueLevel0(LevelList *list, int value);
Cell *searchValueDichotomique(Cell* cell, int value,int level, LevelList *list);
Cell *searchValueDichotomiqueInList(int value,LevelList *list);

#endif //GESTIONAGENDA_RECHERCHE_H
