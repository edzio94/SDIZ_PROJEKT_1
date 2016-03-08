//
// Created by lukasz on 23.02.16.
//

#include <stdlib.h>
#include <iostream>

#ifndef SDIZ_PROJEKT_1_TWODLIST_H
#define SDIZ_PROJEKT_1_TWODLIST_H

#endif //SDIZ_PROJEKT_1_TWODLIST_H


class TwoDList{
public:
    struct List{
        int val;
        List* prev;
        List* next;
    }*list;

    int size;
    TwoDList(int value);
    /*TwoDList*/ void addToBegin(int value);
    void addToEnd(int value);
    void showList();


};
TwoDList::TwoDList(int value) {
    list = new List;
    list->val = value;
    list->prev = NULL;
    list->next = NULL;
    size = 1;

}

void TwoDList::addToBegin(int value) {
    List* a = new List;
    a->val = value;
    a->next = list;
    a->prev = NULL;
    list->prev = a;
    list = a;
}
void TwoDList::addToEnd(int value) {
List* a = new List;
    a->val = value;
    a->next = NULL;
    do{
        std::cout << list->val << std::endl;
        list = list->next;

    }while (list->next != NULL);
    a->prev = list;
    list->next = a;

}

void TwoDList::showList() {
    do{
        std::cout << list->val << std::endl;
        list = list->next;
    }while (list->next != NULL);
    std::cout<< list ->val << std::endl;

}
