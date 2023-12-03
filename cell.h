//
// Created by maloc on 11/11/2023.
//

#ifndef GESTIONAGENDA_CELL_H
#define GESTIONAGENDA_CELL_H
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "level.h"


typedef struct Cell{
    int value;
    int level;
    struct Cell **arrayNext;
}Cell;


Cell* createCell(int value);
void addLevelToCells(Cell* cell,Levels* levels);




#endif //GESTIONAGENDA_CELL_H
