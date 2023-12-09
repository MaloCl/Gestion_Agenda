//
// Created by maloc on 03/12/2023.
//

#include "listAppointment.h"

void delCellFromList(CellAppointment *cell){
    CellAppointment *temp = cell;
    if(temp!=NULL){
        while(temp->next!=NULL && temp->next!=cell){
            temp=temp->next;
        }
        temp->next=cell->next;
        deleteAppointment(cell->value);
        free(cell);
    }

}

void delFromList(llcAppointment *appointments, CellAppointment *cell){
    if(appointments->heads->next==NULL){
        appointments->heads=NULL;
    }else{
        delCellFromList(cell);
    }
}