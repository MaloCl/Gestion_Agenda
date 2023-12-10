
#include "Part3/menu.h"
#include "Part3/docsFunction.h"
#include "Part2/recherche.h"
#include "timer.h"


int main() {

/* PART 1/2

    printf("Creation des cellules\n");
    LevelList *testList= createLevelList(500000);
    createNCells(500000,testList);

    Levels* levels= createLevelsTab(500000);
    getTabLevel(levels);

    addLevelToList(testList,levels);
    updateLevelList(testList);
    printf("\n");
    //displayAllLevelList(testList);
    printf("\n");


    printf("t");
    printf("\n");

    startTimer();
    Cell* searchedCell;
    for(int i=0;i<200000;i++){
        searchedCell=searchingValueLevel0(testList,rand()%500000);
    }
    stopTimer();
    displayTime();

    printf("\n");
    printf("\n");
    printf("\n");

    printf("t2");
    printf("\n");

    startTimer();
    Cell* searchedCell2;
    for(int i=0;i<200000;i++){
        searchedCell2 = searchValueDichotomiqueInList(rand()%2500000,testList);
    }
    stopTimer();
    displayTime();
*/

/*  PART 3*/

    int* status = (int*)malloc(sizeof(int));
    int choice;
    *(status)=1;
    Agenda *agenda= createAgenda();
    char* lastname;
    char* firstname;
    char* fullname;
    Contact *person;
    for(int i=0;i<100;i++){
        lastname=getLastNameFromDoc(rand()%10000);
        firstname=getFirstNameFromDoc(rand()%10000);
        fullname = makeFullName(lastname,firstname);
        person = createContactWithValues(firstname,lastname,fullname);
        addContactToAgenda(agenda, person );
    }

    while(*status){
        choice = functionMenu();
        switchChoice(choice,agenda,status);
    }

    printf("Merci d'avoir utilisé cet agenda !");


    return 0;
}


