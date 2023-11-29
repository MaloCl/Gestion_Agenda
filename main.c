#include "list.h"
#include "level.h"


int main() {
    Cell* testCell1= createCell(1);
    Cell* testCell2= createCell(5);
    Cell* testCell3= createCell(3);
    Cell* testCell4= createCell(2);
    Cell* testCell5= createCell(7);
    Cell* testCell6= createCell(4);
    Cell* testCell7= createCell(6);
    Cell* testCell8= createCell(8);
    Cell* testCell9= createCell(10);
    Cell* testCell10= createCell(9);
    Cell* testCell11= createCell(14);
    Cell* testCell14= createCell(13);
    Cell* testCell12= createCell(12);
    Cell* testCell13= createCell(11);
    Cell* testCell15= createCell(15);
    Cell* testCell16= createCell(16);
    Cell* testCell17= createCell(17);
    Cell* testCell18= createCell(19);
    Cell* testCell19= createCell(18);
    Cell* testCell20= createCell(20);
    Cell* testCell21= createCell(23);
    Cell* testCell22= createCell(22);
    Cell* testCell23= createCell(1000);
    Cell* testCell24= createCell(100);


    LevelList *testList= createLevelList(24);

    addCellToListLeveLZero(testList,testCell1);
    addCellToListLeveLZero(testList,testCell2);
    addCellToListLeveLZero(testList,testCell3);
    addCellToListLeveLZero(testList,testCell4);
    addCellToListLeveLZero(testList,testCell5);
    addCellToListLeveLZero(testList,testCell6);
    addCellToListLeveLZero(testList,testCell7);
    addCellToListLeveLZero(testList,testCell8);
    addCellToListLeveLZero(testList,testCell9);
    addCellToListLeveLZero(testList,testCell10);
    addCellToListLeveLZero(testList,testCell11);
    addCellToListLeveLZero(testList,testCell12);
    addCellToListLeveLZero(testList,testCell13);
    addCellToListLeveLZero(testList,testCell14);
    addCellToListLeveLZero(testList,testCell15);
    addCellToListLeveLZero(testList,testCell16);
    addCellToListLeveLZero(testList,testCell17);
    addCellToListLeveLZero(testList,testCell18);
    addCellToListLeveLZero(testList,testCell19);
    addCellToListLeveLZero(testList,testCell20);
    addCellToListLeveLZero(testList,testCell21);
    addCellToListLeveLZero(testList,testCell22);
    addCellToListLeveLZero(testList,testCell23);
    addCellToListLeveLZero(testList,testCell24);



    Levels* levels= createLevelsTab(24);
    getTabLevel(levels);

    addLevelToList(testList,levels);
    updateLevelList(testList);

    displayAllLevelList(testList);





    return 0;
}


