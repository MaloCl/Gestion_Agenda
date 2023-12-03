//
// Created by maloc on 11/11/2023.
//

#include "list.h"

LevelList *createLevelList(int nbcases){
    LevelList *newList = (LevelList*)malloc(sizeof(LevelList));
    newList->heads=(Cell**)malloc(calculLevel(nbcases)*sizeof(Cell*));
    newList->maxLevel=calculLevel(nbcases);
    for(int i=0;i< calculLevel(nbcases);i++){
        newList->heads[i]=NULL;
    }
    return newList;
}


void displayByLevelList(LevelList *list,int level){
    Cell *temp=list->heads[level];
    Cell *temp2=list->heads[0];
    int cpt;
    printf("[list head_%d @-]",level);
    while(temp!=NULL){
        while(temp2->value!=temp->value){
            printf("---------");
            cpt=temp2->value;
            while(cpt>9){
                printf("-");
                cpt=cpt/10;
            }
            temp2=temp2->arrayNext[0];
        }
        temp2=temp2->arrayNext[0];
        printf("-->");
        printf("[%d|@-]",temp->value);
        temp=temp->arrayNext[level];
    }
    if(temp2!=NULL){
        while(temp2!=NULL){
            printf("---------");
            cpt=temp2->value;
            while(cpt>9){
                printf("-");
                cpt=cpt/10;
            }
            temp2=temp2->arrayNext[0];
        }
    }
    printf("-->NULL");
}

void displayAllLevelList(LevelList *list){
    for (int i=0; i<=list->maxLevel;i++){
        displayByLevelList(list,i);
        printf("\n");
    }
}



void addCellToListLeveLZero(LevelList *list,Cell *cell){
    if(list->heads[0]==NULL){
        list->heads[0]=cell;
    }else if(list->heads[0]->value>cell->value){
        cell->arrayNext[0]=list->heads[0];
        list->heads[0]=cell;
    }else {
        Cell* temp=list->heads[0];
        while(temp->arrayNext[0] != NULL && temp->arrayNext[0]->value < cell->value){
            temp=temp->arrayNext[0];
        }
        if(temp->arrayNext[0]==NULL){
            temp->arrayNext[0]=cell;
        }else{
            cell->arrayNext[0]=temp->arrayNext[0];
            temp->arrayNext[0]=cell;
        }
    }

}

/*
void attributeLevels(LevelList *list){
    Levels levelTab = createLevelsTab(list->maxLevel)
}*/



void addLevelToList(LevelList *list, Levels *levels){
    addLevelToCells(list->heads[0],levels);
}

void updateLevelList(LevelList *list){
    for(int i=1;i<=list->maxLevel;i++){
        Cell* temp=list->heads[0];
        while(temp->level!=i){
            temp=temp->arrayNext[0];
        }
        list->heads[i]=temp;
        Cell *headtemp=list->heads[i];
        while(temp!=NULL){
            temp=temp->arrayNext[0];
            if(temp !=NULL && temp->level>=i){
                headtemp->arrayNext[i]=temp;
                headtemp=headtemp->arrayNext[i];
            }

        }
        headtemp->arrayNext[i]=NULL;
    }


}

void createNCells(int numberOfValue,LevelList *list){
     for(int i=0;i<numberOfValue;i++){
         addCellToListLeveLZero(list,createCell(i));
         if(i==numberOfValue*1/4){
             printf("25% ");
         }else if(i==numberOfValue*2/4){
             printf("50% ");
         }else if(i==numberOfValue*3/4){
             printf("75%");
         }
     }
 }