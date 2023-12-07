//
// Created by maloc on 03/12/2023.
//

#include "contact.h"

Contact *createContact(){
    Contact *person = (Contact*) malloc(sizeof(Contact));
    printf("Enter Firstname :");
    person->firstName=scanString();
    printf("Enter Lastname :");
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