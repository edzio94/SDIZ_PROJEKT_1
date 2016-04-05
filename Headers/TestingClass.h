//
// Created by lukasz on 3/20/16.
//

#ifndef SDIZ_PROJEKT_1_TESTINGCLASS_H
#define SDIZ_PROJEKT_1_TESTINGCLASS_H
#include <chrono>
#include "FileParser.h"
#include "DataHandler.h"
#include "Array.h"
#include "BinaryHeap.h"
#include "TwoDList.h"


class TestingClass {
public:

    DataHandler dataHandler;
    Array array;
    TwoDList List;
    BinaryHeap binaryHeap;
    std::chrono::time_point<std::chrono::system_clock> start, end;
    std::chrono::duration<double> elapsed_seconds;
   TestingClass( Array array, BinaryHeap binaryHeap,TwoDList TwoDirList, DataHandler dataHandler
                );

    void testArray();


    void testList();

    void testHeap();
};


#endif //SDIZ_PROJEKT_1_TESTINGCLASS_H
