//
// Created by maloc on 29/11/2023.
//

#ifndef GESTIONAGENDA_RECHERCHE_H
#define GESTIONAGENDA_RECHERCHE_H
#include "list.h"
#include "../timer.h"


Cell *searchingValueLevel0(LevelList *list, int value);//Recherche une valeur dans le niveau 0

Cell *searchValueDichotomique(Cell* cell, int value,int level, LevelList *list);//Recherche une valeur en utilisant les niveaux ( recherche semblable a la recherche dichotomique)

Cell *searchValueDichotomiqueInList(int value,LevelList *list);//Lance la recherche dans la liste

#endif //GESTIONAGENDA_RECHERCHE_H
