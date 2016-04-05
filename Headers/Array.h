//
// Created by lukasz on 3/19/16.
//

#ifndef SDIZ_PROJEKT_1_ARRAY_H
#define SDIZ_PROJEKT_1_ARRAY_H


class Array {
public:
 /*   struct block{
        int value;
        block *next;
    } */
            int *array;
    int size;


    Array(int size);
    ~Array();

    void addValue(int index,int value);
    void addValueBegin(int value);
    void addValueEnd(int value);
    void deleteFromIndex(int index);
    void deleteFromBegin();
    void deleteFromEnd();
    void resize();
    void showArray();
    void decreaseArray();
};


#endif //SDIZ_PROJEKT_1_ARRAY_H
