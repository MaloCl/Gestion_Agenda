//
// Created by maloc on 07/12/2023.
//

#include "docsFunction.h"

char* getLastNameFromDoc(int line){
    FILE* fichier = NULL;
    char* name = (char*)malloc(sizeof(char)*30);

    fichier = fopen("C:\\Users\\maloc\\CLionProjects\\GestionAgenda\\Part3\\Part3Docs\\noms2008nat.txt", "r");
    if (fichier != NULL)
    {
        for (int i = 1; i <= line; ++i) {
            fgets(name, 30, fichier);
        }
    }
    name[strcspn(name, "\n")] = '\0';
    int i=0;
    while(name[i]!='\0'){
        i++;
    }
    for(int j = 0 ; j<=i;j++){
        if(name[j]<=90 && name[j]>=65){
            name[j]=name[j]+('a'-'A');
        }
    }

    return name;
}

char* getFirstNameFromDoc(int line){
    FILE* fichier = NULL;
    char* name = (char*)malloc(sizeof(char)*30);

    fichier = fopen("C:\\Users\\maloc\\CLionProjects\\GestionAgenda\\Part3\\Part3Docs\\noms2008nat.txt", "r");
    if (fichier != NULL)
    {
        for (int i = 1; i <= line; ++i) {
            fgets(name, 30, fichier);
        }
    }
    name[strcspn(name, "\n")] = '\0';
    int i=0;
    while(name[i]!='\0'){
        i++;
    }
    for(int j = 0 ; j<=i;j++){
        if(name[j]<=90 && name[j]>=65){
            name[j]=name[j]+('a'-'A');
        }
    }
    return name;
}

char* makeFullName(char lastName[30],char firstName[30]){
    char* name = (char*)malloc(sizeof(char)*60);
    name = strcpy(name,lastName);
    name = strcat(name,"_");
    name = strcat(name,firstName);
    return name;
}