//
// Created by maloc on 03/12/2023.
//

#include "listAppointment.h"

void delCellFromList(CellAppointment *cell,llcAppointment *appointments){

    CellAppointment *temp = appointments->head;
    if(temp!=cell){
        while(temp->next!=NULL && temp->next!=cell){
            temp=temp->next;
        }
        temp->next=cell->next;
        deleteAppointment(cell->value);
        free(cell);
    }else if(temp==cell){
        appointments->head=temp->next;
        deleteAppointment(temp->value);
        free(temp);
    }

}
