#include "list.h"


int main() {
    Cell* testCell= createCell(13,3);
    Cell* testCell2= createCell(9,3);
    Cell* testCell3= createCell(14,0);
    LevelList *testList= createLevelList(5);
    addCellToList(testList,testCell);
    displayAllLevelList(testList);
    printf("\n");
    printf("\n");
    printf("\n");
    addCellToList(testList,testCell2);
    displayAllLevelList(testList);
    printf("\n");
    printf("\n");
    printf("\n");
    addCellToList(testList,testCell3);
    displayAllLevelList(testList);

    return 0;
}
