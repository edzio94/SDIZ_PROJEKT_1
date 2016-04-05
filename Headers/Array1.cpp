//
// Created by lukasz on 3/19/16.
//

#include <cstdlib>
#include <climits>
#include "Array1.h"

Array1::Array1(int size) {

array = (block *) malloc( sizeof(block));

    for (int i = 0 ; i < size; i++){

        block * x =  (block *) malloc(sizeof (block));
        x->value = INT_MIN;
        x->parent = array;
    }

}

void Array1::addToBegin(int val) {

    block * x =  (block *) malloc(sizeof (block));
    x->value = val;
    x->parent = array;

}

void Array1::addToEnd(int val) {

    block * x = (block *) malloc(sizeof (block));
    x->value = val;
    x->parent = NULL;
        while(array->parent!= NULL)
        {
            array = array->parent;
        }
        array->parent = x;
}

void Array1::delFromIndex(int index) {

}







