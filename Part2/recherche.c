//
// Created by maloc on 29/11/2023.
//

#include "recherche.h"


Cell *searchingValueLevel0(LevelList *list, int value){
    Cell* temp=list->heads[0];
    while(temp != NULL && temp->value !=value) {
        temp = temp->arrayNext[0];
    };
    return temp;

}

Cell *searchValueDichotomique(Cell* cell, int value,int level, LevelList *list){
    Cell* tmp = cell;
    if(cell->value==value) {
        return cell;
    }else if(level==-1){
        return cell->arrayNext[0];
    }else {
        while(tmp->arrayNext[level] != NULL && tmp->arrayNext[level]->value <= value){
            tmp=tmp->arrayNext[level];
        }
        if(tmp->value>value){
            searchValueDichotomique(list->heads[level-1],value,level-1,list);
        }else if(tmp->value<value){
            searchValueDichotomique(tmp,value,level-1,list);
        }



    }

}

Cell *searchValueDichotomiqueInList(int value, LevelList *list){
    return searchValueDichotomique(list->heads[list->maxLevel],value,list->maxLevel,list);
}