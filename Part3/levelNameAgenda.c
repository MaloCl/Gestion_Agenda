//
// Created by maloc on 03/12/2023.
//

#include "levelNameAgenda.h"


int checkFirstLetter(char *a, char *b){
    return a[0]==b[0];
}

int checkSecondLetter(char *a, char *b){
    return a[1]==b[1];
}

int checkThirdLetter(char*a,char*b){
  return a[2]==b[2];
}


void updateLevelToContactInAgenda(Agenda *agenda){
    AgendaCell *temp = agenda->head;
    if(agenda!=NULL){
        agenda->head->level=3;
        if(agenda->head->arrayNext[0]!=NULL) {
            while(temp->arrayNext[0] != NULL){
                if(checkFirstLetter(temp->value->fullName,temp->arrayNext[0]->value->fullName)==0){
                    temp->arrayNext[0]->level=3;
                }
                else{
                    if(checkSecondLetter(temp->value->fullName,temp->arrayNext[0]->value->fullName)==0){
                        temp->arrayNext[0]->level=2;
                    }
                    else{
                        if(checkThirdLetter(temp->value->fullName,temp->arrayNext[0]->value->fullName)==0){
                            temp->arrayNext[0]->level=1;
                        }
                        else{
                            temp->arrayNext[0]->level=0;
                        }
                    }
                }
                temp = temp->arrayNext[0];
            }
        }
    }
}

void linkAgendaCellByLevel(Agenda *agenda){
    for(int i=1;i<4;i++){
        AgendaCell *tempLevel0 = agenda->head;
        AgendaCell *tempLevelX= agenda->head;
        while(tempLevel0->arrayNext[0]!=NULL){
            tempLevel0=tempLevel0->arrayNext[0];
            if(tempLevel0->level>=i){
                tempLevelX->arrayNext[i]=tempLevel0;
                tempLevelX=tempLevelX->arrayNext[i];
            }

        }
        if(tempLevelX!=NULL){
            tempLevelX->arrayNext[i]=NULL;
        }
    }
}


