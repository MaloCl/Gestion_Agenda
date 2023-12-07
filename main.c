
#include "menu.h"

int main() {





    


/*
    LevelList *testList= createLevelList(200000);
    createNCells(200000,testList);

    Levels* levels= createLevelsTab(200000);
    getTabLevel(levels);

    addLevelToList(testList,levels);
    updateLevelList(testList);
    //displayAllLevelList(testList);
    printf("\n");

    printf("t");
    printf("\n");

    startTimer();
    for(int i=0;i<100000;i++){
        Cell* searchedCell=searchingValueLevel0(testList,rand()%200000);
    }
    stopTimer();
    displayTime();

    printf("\n");
    printf("\n");
    printf("\n");

    printf("t2");
    printf("\n");

    startTimer();
    for(int i=0;i<100000;i++){
        Cell* tmp = searchValueDichotomiqueInList(rand()%200000,testList);
    }
    stopTimer();
    displayTime();
*/

/*  PART 3
    Agenda *agenda = createAgenda();
    Contact *ashraf = createContact();
    Contact *malo = createContact();
    Contact *zizou = createContact();
    Contact *zizi = createContact();
    addContactToAgenda(agenda,ashraf);
    addContactToAgenda(agenda,zizou);
    addContactToAgenda(agenda,malo);
    addContactToAgenda(agenda,zizi);
    updateLevelToContactInAgenda(agenda);
    linkAgendaCellByLevel(agenda);

    researchContact(agenda);
*/


    AgendaCell *agenda= createAgenda();
    while(1){
        int choice = functionMenu();
        switchChoice(choice,agenda);
    }





    return 0;
}


