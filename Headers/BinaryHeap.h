//
// Created by lukasz on 25.02.16.
//

#include <stddef.h>
#include <iostream>

#ifndef SDIZ_PROJEKT_1_BINARYHEAP_H
#define SDIZ_PROJEKT_1_BINARYHEAP_H


class BinaryHeap
{
public:

    int size;
    int *heap;
    int currentIndex;
    BinaryHeap(int size);
    void addToHeap(int value);
    void deleteRoot();
    void showHeap();

    void resize();

    void decreaseArray();
};

#endif //SDIZ_PROJEKT_1_BINARYHEAP_H