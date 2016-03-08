//
// Created by lukasz on 25.02.16.
//

#include <stddef.h>
#include <iostream>

#ifndef SDIZ_PROJEKT_1_BINARYHEAP_H
#define SDIZ_PROJEKT_1_BINARYHEAP_H

#endif //SDIZ_PROJEKT_1_BINARYHEAP_H
class BinaryHeap
{
public:

    int size;
    struct Heap{
        int value;
        struct Heap* parent;
    };

    Heap *heapArray;

    BinaryHeap(int value);
    void addToHeap(int value);
    void resizeArray();
    void swap(Heap *h1, Heap *h2);
    void showHeap();
    void repairTree(int size);
};

BinaryHeap::BinaryHeap(int value) {
    size = 0;
    heapArray = new Heap [size + 1];
    heapArray[size++].value = value;
    //TODO: WORKS SHITTY. SIZE DOES NOT DECREMNTING


}

void BinaryHeap::addToHeap(int value) {
resizeArray();
heapArray[size++].value=value;
    repairTree(size);
}

void BinaryHeap::resizeArray()
{
    Heap* tmpheap = (Heap *) heapArray;
    heapArray =  new Heap[size + 1];
    heapArray =  tmpheap;
}



void BinaryHeap::showHeap() {
    for(int i = 0 ; i < (size -1);i++)
    {
        std::cout<<heapArray[i].value<<std::endl;
    }
}

void BinaryHeap::repairTree(int size) {

    if(size >=0) {
        int parentIndex = (size - 1) / 2;
        if (heapArray[parentIndex].value > heapArray[size - 1].value) {
            std::cout << "Swapping" << heapArray[parentIndex].value << " AND " << heapArray[size - 1].value <<
            std::endl;
            swap(&heapArray[parentIndex], &heapArray[size - 1]);
        }
        repairTree(size - 1);
    }

}

void BinaryHeap::swap(Heap *h1, Heap *h2) {
    Heap *tmp =  h1;
    h1 = h2;
    h2 = tmp;
}
