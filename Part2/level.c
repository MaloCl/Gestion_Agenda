//
// Created by maloc on 15/11/2023.
//
#include "level.h"




int calculLevel(int maxCases){
    return ((int)floor(log(maxCases+1)/(log(2))));
}

Levels *createLevelsTab(int nbCases){
    Levels *levels =(Levels*) malloc(sizeof(Levels));
    levels->tabLevel=(int*)malloc(sizeof(int)*nbCases);
    for(int i=0;i<nbCases;i++){
        levels->tabLevel[i]=0;
    }
    levels->maxlevel= calculLevel(nbCases);
    levels->nbcases=nbCases;
    return levels;
}


void getTabLevel(Levels *levels){
    for(int i=0;i<levels->nbcases;i++) {
        int n = 1;
        int cpt = 0;
        while ((i + 1) % (int) pow(2, n) == 0) {
            n++;
            cpt++;
        }
        levels->tabLevel[i] = cpt;
    }
}

void printTab(Levels *levels){
    for(int i=0;i<levels->nbcases;i++){
        printf("%d ",levels->tabLevel[i]);
    }
}
