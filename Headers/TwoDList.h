//
// Created by lukasz on 23.02.16.
//

#include <stdlib.h>
#include <iostream>

#ifndef SDIZ_PROJEKT_1_TWODLIST_H
#define SDIZ_PROJEKT_1_TWODLIST_H


class TwoDList {
public:
    struct List {
        int val;
        List *prev;
        List *next;
    } *list_begin, *list_end;

    int size;

    TwoDList(int value);

    ~TwoDList();

    void getEndList();

    /*TwoDList*/ void addToBegin(int value);

    void addToEnd(int value);

    void showList();

    void addToIndex(int index, int value);

    void delFromBegin();

    void delFromEnd();

    void delFromIndex(int index);


};

#endif //SDIZ_PROJEKT_1_TWODLIST_H




