//
// Created by maloc on 03/12/2023.
//

#include "appointment.h"

Appointment *createAppointment(){
    Appointment *rdv = (Appointment*) malloc(sizeof(Appointment));
    do{
        printf("Entrer le jour:");
        scanf("%d",&(rdv->day));
    }while(rdv->day <=0 || rdv->day >=31);


    do{
        printf("Entrer le mois:");
        scanf("%d",&(rdv->month));
    }while(rdv->month>12 || rdv->month <1);

    do{
        printf("Entrer l'annee:");
        scanf("%d",&(rdv->year));
    }while(rdv->year<=0);

    do{
        printf("Entrer le temps du rdv:");
        scanf("%d",&(rdv->duration));
    }while(rdv->duration<=0);

    do{
        printf("Entrer l'heure du rdv:");
        scanf("%d",&(rdv->dateHour));
    }while(rdv->dateHour<=0);

    printf("Entrer le sujet du rdv:");
    rdv->subject=scanString();
    clear();
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
