//
// Created by maloc on 03/12/2023.
//

#include "agenda.h"

Agenda *createAgenda(){
    Agenda *newAgenda = (Agenda*)malloc(sizeof(Agenda));
    newAgenda->head=NULL;
    return newAgenda;
}

AgendaCell *createAgendaCell(Contact *guy){
    AgendaCell *newCell=(AgendaCell*)malloc(sizeof (AgendaCell));
    newCell->value=guy;
    newCell->arrayNext=(AgendaCell**)malloc(sizeof(AgendaCell*)*4);
    for(int i=0;i< 4;i++){
        newCell->arrayNext[i]=NULL;
    }
    newCell->appointments=(llcAppointment*) malloc(sizeof(llcAppointment));
    newCell->appointments->head=NULL;
    newCell->appointments->last=NULL;
    newCell->level=0;
    return newCell;
}

void addContactToAgenda(Agenda *agenda, Contact *guy){
    AgendaCell *newContact =createAgendaCell(guy);
    if(agenda->head==NULL){
        agenda->head=newContact;
    }
    else{
        AgendaCell *temp = agenda->head;
        AgendaCell *prev = agenda->head;
        while (temp!=NULL && strcmp(newContact->value->fullName,temp->value->fullName)>0){
            prev=temp;
            temp=temp->arrayNext[0];
        }
        if(temp==NULL){
            prev->arrayNext[0]=newContact;
        }else if(strcmp(newContact->value->fullName,temp->value->fullName)==-1){
            newContact->arrayNext[0]=prev->arrayNext[0];
            prev->arrayNext[0]=newContact;
        }
    }
}

void addAppointmentToContact(char fullName[60],AgendaCell *cell){
    AgendaCell *temp=cell;
    while(temp!=NULL && strcmp(fullName,temp->value->fullName)!=0){
        temp=temp->arrayNext[0];
    }
    if(temp!=NULL){
        if(temp->appointments->head==NULL){
            CellAppointment *tempAppointment = createCellAppointment();
            temp->appointments->head = tempAppointment;
            temp->appointments->last = tempAppointment;
        }else {
            CellAppointment *tempAppointment = createCellAppointment();
            temp->appointments->last->next = tempAppointment;
            temp->appointments->last = tempAppointment;
        }
    }
}


void addAppointmenttoContacttoAgenda(Agenda *agenda,char fullName[60]){
    addAppointmentToContact(fullName,agenda->head);
}


/*Affiche tout les contact qui comment par les 3 lettres données
 Avance dans la liste au niveau 3 tant que la premiere lettre est différente
 Puis
 Avance dans la liste au niveau 2 tant que la deuxieme lettre est différente si la premiere lettre change il n'y as pas de valeur trouver
 Puis
 Avance dans la liste au niveau 1 tant que la troisieme lettre est différente si la premiere lettre change il n'y as pas de valeur trouver
 Puis
 Avance dans la liste au niveau 0 et affiche les valeurs tant que la premiere lettre ne change pas
 */
void autoCompletionContact(Agenda *agenda){
    printf("saisir 3 lettres a chercher:");
    char * first3letters = scanString();
    AgendaCell *temp=agenda->head;

    while(temp!=NULL && temp->value->fullName[0]!=first3letters[0] ){
        temp=temp->arrayNext[3];
    }
    while (temp!=NULL && temp->value->fullName[0]==first3letters[0] && temp->value->fullName[1]!=first3letters[1] ){
        temp=temp->arrayNext[2];
    }
    while(temp!=NULL && temp->value->fullName[0]==first3letters[0] && temp->value->fullName[2]!=first3letters[2] ){
        temp=temp->arrayNext[1];
    }
    if(temp==NULL || temp->value->fullName[0]!=first3letters[0] ){
        clear();
        printf("Personne non trouve.\n\n");
    }else{
        clear();
        while (temp!=NULL && temp->value->fullName[2]==first3letters[2]){
            printf("%s \n",temp->value->fullName);
            temp=temp->arrayNext[0];
        }
        printf("\n");
    }
}

AgendaCell *researchContact(Agenda *agenda){
    char * contact = scanString();
    AgendaCell *temp=agenda->head;

    while(temp!=NULL && temp->value->fullName[0]!=contact[0] ){
        temp=temp->arrayNext[3];
    }
    while (temp!=NULL && temp->value->fullName[0]==contact[0] && temp->value->fullName[1]!=contact[1] ){
        temp=temp->arrayNext[2];
    }
    while(temp!=NULL && temp->value->fullName[0]==contact[0] && temp->value->fullName[2]!=contact[2] ){
        temp=temp->arrayNext[1];
    }
    while(temp!=NULL && strcmp(temp->value->fullName,contact)!=0){
        temp=temp->arrayNext[0];
    }
    return temp;

}


void displayAppointmentByContact(AgendaCell *cell){
    if(cell==NULL){
        clear();
        printf("Contact introuvable dans la liste\n\n");
    }else{
        CellAppointment *temp = cell->appointments->head;
        if(temp==NULL){
            clear();
            printf("Aucun rendez-vous.\n\n");
        }
        else{
            clear();
            int i=0;
            while(temp!=NULL){
                i++;
                printf("RDV numero %d\n",i);
                printf("jour : %d\n",temp->value->day);
                printf("mois : %d\n",temp->value->month);
                printf("annee : %d\n",temp->value->year);
                printf("duree du rdv : %d\n",temp->value->duration);
                printf("heure du rdv : %d\n",temp->value->dateHour);
                printf("sujet : %s\n",temp->value->subject);
                printf("\n\n");
                temp=temp->next;
            }
        }
    }
}
