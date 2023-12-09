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
        printf("Pour suprimer un rdv, saisir 5\n");
        printf("Pour quitter, saisir 6\n");
        printf("Que faire : ");
        scanf("%d",&answer);
        fflush(stdin);
    }while(answer<1 && answer>4);
    return answer;
}

void switchChoice(int choice,Agenda* agenda, int* status){
    int i=0;
    CellAppointment *appoint;
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
            clear();
            break;
        case 5:
            printf("Saisir le contact (nom_prenom) pour suprimer le rdv: ");
            AgendaCell *contact = researchContact(agenda);
            displayAppointmentByContact(contact);
            if(contact->appointments!=NULL){
                printf("Choix du rendez-vous a suprimer: ");
                scanf("%d",&i);
                fflush(stdin);
                appoint=contact->appointments->heads;
                for(int j=0;j<i;j++){
                    appoint=appoint->next;
                }
                delFromList(contact->appointments,appoint);
            }
            break;
        case 6:
            *status = 0;
            break;
        default:
    }
}