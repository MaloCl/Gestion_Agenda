//
// Created by maloc on 11/11/2023.
//

#include "cell.h"


Cell *createCell(int value,int level){
    Cell *newcell=(Cell*)malloc(sizeof(Cell));
    newcell->arrayNext=(Cell**)malloc((level+1)*sizeof (Cell*));

    for(int i=0;i<level+1;i++){
        newcell->arrayNext[i]=NULL;
    }


    newcell->value=value;
    newcell->level=level;
    return newcell;
}