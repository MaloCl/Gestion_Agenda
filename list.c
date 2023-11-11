//
// Created by maloc on 11/11/2023.
//

#include "list.h"

LevelList *createLevelList(int maxLevel){
    LevelList *newList = (LevelList*)malloc(sizeof(LevelList));
    newList->heads=(Cell**)malloc(maxLevel*sizeof(Cell*));
    for(int i=0;i<maxLevel;i++){
        newList->heads[i]=NULL;
    }
    newList->maxLevel=maxLevel;
    newList->lastPosition=0;
    return newList;
}


/* void addHeadCellToList(LevelList *list,Cell *cell){
    if(cell->level<=list->maxLevel && cell->level>=list->lastPosition){
        for(int i=list->lastPosition;i<cell->level;i++){
            list->heads[i]=cell;
            list->lastPosition++;
        }
    }
    else{
        printf("Cell too big, can't be added !");
    }
}
*/


void displayByLevelList(LevelList *list,int level){
    Cell *temp=list->heads[level];
    printf("[list head_%d @-]",level);
    while(temp!=NULL){
        printf("-->");
        printf("[%d|@-]",temp->value);
        temp=temp->arrayNext[level];
    }
    printf("-->NULL");
}


void displayAllLevelList(LevelList *list){
    for (int i=0; i<list->maxLevel;i++){
        displayByLevelList(list,i);
        printf("\n");
    }
}

void addCellToListByLevel(LevelList *list,Cell *cell,int level){
    if(level<list->maxLevel){
        Cell *temp=list->heads[level];
        if(list->heads[level]==NULL ){
            list->heads[level]=cell;
        }
        else if(cell->value<temp->value){
            cell->arrayNext[level]=temp;
            list->heads[level]=cell;
        }
        else{
            while(temp->arrayNext[level]!=NULL && cell->value>temp->arrayNext[level]->value){
                temp = temp->arrayNext[level];
            }
            if(temp->arrayNext[level]==NULL){
                temp->arrayNext[level]=cell;
            }else{
                temp->arrayNext[level]->arrayNext[level]=cell->arrayNext[level];
                temp->arrayNext[level]=cell;
            }
        }
    }
}

void addCellToList(LevelList *list, Cell *cell){
    for(int i=0;i<=cell->level;i++){
        addCellToListByLevel(list,cell,i);
    }
}