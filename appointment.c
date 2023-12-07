//
// Created by maloc on 03/12/2023.
//

#include "appointment.h"

Appointment *createAppointment(){
    Appointment *rdv = (Appointment*) malloc(sizeof(Appointment));
    do{
        printf("Enter day of appointment:");
        scanf("%d",&(rdv->day));
    }while(rdv->day <=0 || rdv->day >=31);


    do{
        printf("Enter month of appointment:");
        scanf("%d",&(rdv->month));
    }while(rdv->month>12 || rdv->month <1);

    do{
        printf("Enter year of appointment;");
        scanf("%d",&(rdv->year));
    }while(rdv->year<=0);

    do{
        printf("Enter the duration of appointment:");
        scanf("%d",&(rdv->duration));
    }while(rdv->duration<=0);

    do{
        printf("Enter the hour of the appointment:");
        scanf("%d",&(rdv->dateHour));
    }while(rdv->dateHour<=0);

    printf("Enter subject of the appointment");
    rdv->subject=scanString();
    return rdv;
}

void deleteAppointment(Appointment *rdv){
    free(rdv->subject);
    free(rdv);
}

CellAppointment *createCellAppointment(){
    CellAppointment *newCell = (CellAppointment*) malloc(sizeof(CellAppointment));
    newCell->next=NULL;
    newCell->value=createAppointment();
    return newCell;
}
