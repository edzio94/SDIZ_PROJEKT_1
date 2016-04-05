//
// Created by lukasz on 3/21/16.
//


#include "TwoDList.h"

TwoDList::TwoDList(int size) {
    list_begin = new List;

    list_begin->next = NULL;
    list_begin->prev = NULL;
    list_end = list_begin;
    for (int i = 0; i < size; i++) {
        addToBegin(NULL);
    }
    this->size = size;

}

void TwoDList::addToBegin(int value) {
    List *a = new List();
    a->val = value;
    a->next = list_begin;
    a->prev = NULL;

    list_begin->prev = a;
    list_begin = a;

    size++;
    getEndList();
}

void TwoDList::addToEnd(int value) {
    List *x = list_begin;
    List *a = new List;
    a->val = value;
    a->next = NULL;

    for (int i = 0; i < size - 1; i++) {
        list_begin = list_begin->next;
    }

    a->prev = list_begin;
    list_begin->next = a;
    size++;
    list_begin = x;
    getEndList();
}

void TwoDList::showList() {
    printf("============= TWO D LIST===========");
    List *x = list_begin;
    printf("size = %d \n", size);
    for (int i = 0; i < size; i++) {
        printf("[%d] = %d\n", i, list_begin->val);
        list_begin = list_begin->next;
    }
    list_begin = x;
    printf(" \n");
    printf(" \n");
    printf(" \n");
}

void TwoDList::addToIndex(int index, int value) {
    List *tmp = list_begin;
    for (int i = 0; i < index; i++) {
        list_begin = list_begin->next;
    }

    list_begin->val = value;
    list_begin = tmp;
}

void TwoDList::delFromBegin() {
    if(size > 1) {
        list_begin = list_begin->next;
        delete list_begin->prev;
        size--;
        getEndList();
    }
    else
        printf("Cannot delete last element");
}

void TwoDList::delFromEnd() {
        if (size > 1) {
            List *tmp = list_begin;

            if (size == 1)
                delete list_begin;
            else {
                while (list_begin->next != NULL)
                    list_begin = list_begin->next;
                list_begin = list_begin->prev;
                delete list_begin->next;
                list_begin->next = NULL;
            }
            size--;
            list_begin = tmp;
            getEndList();
        }
        else
            printf("cannot delete last element.");
    }


void TwoDList::delFromIndex(int index) {
    if (size > 1) {
        List *tmp = list_begin;

        for (int i = 0; i < index - 1; i++) {
            list_begin = list_begin->next;
        }
        List *x = list_begin->next->next;
        delete list_begin->next;
        x->prev = list_begin;
        list_begin->next = x;
        list_begin = tmp;
        size--;
    }
    else
        printf("cannot delete last element.");


}

TwoDList::~TwoDList() {

}

/**
 * GET END LIST
 * IDZIEMY NA KONIEC LISTY I ZAPISUJEMY OSTATNI ELEMENT DO WSKAŹNIKA
 */
void TwoDList::getEndList() {
    List *tmp = list_begin;
    while (list_begin->next != NULL) {

        list_begin = list_begin->next;
    }
    list_end = list_begin;
    list_begin = tmp;
}


