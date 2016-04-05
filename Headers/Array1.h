//
// Created by lukasz on 3/19/16.
//

#ifndef SDIZ_PROJEKT_1_ARRAY1_H
#define SDIZ_PROJEKT_1_ARRAY1_H


class Array1 {
public:
    struct block {
        int value;
        block *parent;
    } *array;

    Array1(int val);

    void addToBegin(int val);

    void addToEnd(int val);

    void delFromIndex(int index);
};


#endif //SDIZ_PROJEKT_1_ARRAY1_H
