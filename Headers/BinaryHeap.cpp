//
// Created by lukasz on 3/19/16.
//


#include <iomanip>
#include <climits>
#include <cstring>
#include "BinaryHeap.h"

BinaryHeap::BinaryHeap(int size) {

    heap = new int[size];
    this->size = size;
    for (int i = 0 ; i < size; i++)
    {
        heap[i] = INT_MIN;
    }
    currentIndex = 0;
}

void BinaryHeap::addToHeap(int value) {
    if (currentIndex>= size)
        resize();

    if (currentIndex < size) {
        heap[currentIndex] = value;
        int s = currentIndex;
        while (s != 0) {
            int p = s / 2;
            if (heap[p] < heap[s]) {
                std::swap(heap[p], heap[s]);
                s /= 2;
            }
            else
                break;
        }
        currentIndex++;

    }
}

void BinaryHeap::deleteRoot() {
    if (currentIndex>=1) {
        //int size = this->size - 1;
        int size = this->currentIndex -1;
        heap[0] = heap[size];

        int tmp = 0;
        while (tmp * 2 + 1 <= size) {
            if (heap[tmp] < heap[tmp * 2 + 1] || heap[tmp] < heap[tmp * 2 + 2]) {
                if (heap[tmp * 2 + 1] > heap[tmp * 2 + 2] || tmp * 2 + 2 > size) {
                    std::swap(heap[tmp], heap[(tmp * 2) + 1]);
                    tmp = (tmp * 2) + 1;
                }
                else {
                    std::swap(heap[tmp], heap[(tmp * 2) + 2]);
                    tmp = (tmp * 2) + 2;
                }
            }
            else
                break;
        }
        currentIndex--;
        decreaseArray();
    }
    else
        printf("Cannot delete root. There's none");

}

void BinaryHeap::showHeap() {
    printf("============= H E A P============= \n");
int levels = 0;

    int s = size;
    printf ("ROZMIAR KOPCA: %d \n",size);
    while(s != 1)
    {
        s/=2;
        levels++;
    }
    ++levels;
    int counter = 0;
    printf("Liczba poziomów: %d \n",levels);
    printf("%d \n",heap[0]);
    int tmp = 1*2;
    for(int i = 1;i < currentIndex;i++ )
    {



            printf("%d ",heap[i]);
        counter++;

        if (counter == tmp)
        {
            counter = 0;
            tmp*=2;

            printf("\n");
        }
    }
    printf("\n");
    printf("\n");
    printf("\n");


}

void BinaryHeap::resize() {

        int *newArr = new int[++size];
        memcpy(newArr, heap, (size - 1) * sizeof(int));

        delete[] heap;
        heap = newArr;
        heap[size -1] = 0;

}

void BinaryHeap::decreaseArray() {

        int *newArr = new int[--size];
        memcpy(newArr, heap, (size) * sizeof(int));

        delete[] heap;
        heap = newArr;


}















