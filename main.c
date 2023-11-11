#include "list.h"


int main() {
    Cell* testCell= createCell(18,3);
    Cell* testCell2= createCell(25,0);
    Cell* testCell3= createCell(31,1);
    Cell* testCell4= createCell(32,4);
    Cell* testCell5= createCell(56,2);
    Cell* testCell6= createCell(59,4);
    Cell* testCell7= createCell(59,0);
    Cell* testCell8= createCell(91,2);
    LevelList *testList= createLevelList(5);
    addCellToList(testList,testCell);
    addCellToList(testList,testCell2);
    addCellToList(testList,testCell3);
    addCellToList(testList,testCell4);
    addCellToList(testList,testCell5);
    addCellToList(testList,testCell6);
    addCellToList(testList,testCell7);
    addCellToList(testList,testCell8);

    displayAllLevelList(testList);


    return 0;
}


