//
// Created by maloc on 03/12/2023.
//

#include "menu.h"

int functionMenu(){
    int answer=0;
    do{
        printf("-------- Agenda personnel -------- \n");
        printf("Pour rechercher une personne, saisir 1\n");
        printf("Pour voir les rendez-vous d'une personne, saisir 2\n");
        printf("Pour creer un contact, saisir 3\n");
        printf("Pour creer un rendez-vous pour un contact, saisir 4\n");
        printf("Que faire : ");
        scanf("%d",&answer);
        fflush(stdin);
    }while(answer<1 && answer>4);
    return answer;
}

void switchChoice(int choice,Agenda* agenda){

    switch (choice) {
        case 1:
            autoCompletionContact(agenda);
            break;
        case 2:
            printf("Saisir le contact (nom_prenom) pour voir les rdv: ");
            displayAppointmentByContact(researchContact(agenda));
            break;
        case 3:
            addContactToAgenda(agenda,createContact());
            updateLevelToContactInAgenda(agenda);
            linkAgendaCellByLevel(agenda);
            break;
        case 4:
            printf("Saisir le contact (nom_prenom) pour ajouter un rdv: ");
            addAppointmenttoContacttoAgenda(agenda,scanString());
            break;
        default:
    }
}