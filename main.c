#include "list.h"
#include "level.h"


int main() {

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





    return 0;
}


