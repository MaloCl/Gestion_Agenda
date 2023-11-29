//
// Created by maloc on 11/11/2023.
//

#include "cell.h"


Cell *createCell(int value){
    Cell *newcell=(Cell*)malloc(sizeof(Cell));
    newcell->arrayNext=(Cell**)malloc(sizeof (Cell*));
    newcell->arrayNext[0]=NULL;
    newcell->value=value;
    newcell->level=0;
    return newcell;
}