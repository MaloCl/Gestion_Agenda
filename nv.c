//
// Created by maloc on 03/12/2023.
//

#include "nv.h"

char* scanString(){
    fflush(stdin);
    char* s = (char*)malloc(50*sizeof(char));
    gets(s);
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    char* word = (char*)malloc(i*sizeof(char));
    for(int j = 0 ; j<=i;j++){
        if(s[j]<=90 && s[j]>=65){
            s[j]=s[j]+('a'-'A');
        }
        word[j]=s[j];
    }
    free(s);
    return word;
}


