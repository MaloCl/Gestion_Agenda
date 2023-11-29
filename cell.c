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

void addLevelToCells(Cell* cell,Levels* levels){
    Cell* temp=cell;
    int i=0;
    while(temp!=NULL){
        temp->level=levels->tabLevel[i];
        temp=temp->arrayNext[0];
        i++;
    }
}