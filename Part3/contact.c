//
// Created by maloc on 03/12/2023.
//

#include "contact.h"

Contact *createContact(){
    Contact *person = (Contact*) malloc(sizeof(Contact));
    printf("Entrer le prenom :");
    person->firstName=scanString();
    printf("Entrer le nom de famille :");
    person->lastName=scanString();
    char temp[30];
    strcpy(temp,person->lastName);
    person->fullName=(char*)malloc(60*sizeof(char));
    char *largetemp=(char*)malloc(60*sizeof(char));
    largetemp=strcat(temp,"_");
    largetemp= strcat(largetemp,person->firstName);
    strcpy(person->fullName,largetemp);
    clear();
    return person;
}

Contact *createContactWithValues(char firstName[30],char lastName[30],char fullName[60]){
    Contact *person = (Contact*) malloc(sizeof(Contact));
    person->firstName=firstName;
    person->lastName=lastName;
    person->fullName=fullName;
    return person;
}