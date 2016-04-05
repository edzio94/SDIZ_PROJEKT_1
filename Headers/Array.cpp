//
// Created by lukasz on 3/19/16.
//

#include <cstring>
#include <iostream>
#include "Array.h"

Array::Array(int size) {
    array = new int[size]();
    this->size = size;
    std::fill_n(array,size ,0);
}

/**
 * ADD VALUE BEGIN
 * Rozszerzamy TABLICE, przesuwamy elementy i wstawiamy nowy na początek
 */

void Array::addValueBegin(int value) {
    resize();
    for (int i = (size - 2); i >= 0; i--) {
        array[i + 1] = array[i];
    }
    array[0]= value;

}


void Array::resize() {
    int *newArr = new int[++size];
    memcpy(newArr, array, (size - 1) * sizeof(int));

    delete[] array;
    array = newArr;
    array[size -1] = 0;

}

/**
 * ADD VALUE END
 * ROZSZERZAMY TABLICE I DODAJEMY WARTOŚC NA NOWO ROZSZERZONY INDEX
 */
void Array::addValueEnd(int value) {
    resize();

    array[size - 1] = value;


}


/**
 * SHOW ARRAY -> Pobieranie wartości z danego indeksu
 */
void Array::showArray() {
    printf("============== A R R A Y ==============");
    for (int i = 0; i < size; i++) {
        printf("[%d] = %d \n",i,array[i]);
    }
    printf("\n");
    printf("\n");
    printf("\n");
}

void Array::addValue(int index, int value) {

    array[index] = value;
}
/**
 * DELETE FROM INDEX
 * USUWAMY INDEX Z ELEMENTU, PRZENOSIMY ELEMENTY Z I+1 do I. Zmniejszamy rozmiar tablicy
 */
void Array::deleteFromIndex(int index) {
    if (size > 1) {
        for (int i = index; i < size; i++)
            array[i] = array[i + 1];
        decreaseArray();
    }
    else
        printf("cannot delete last element.");
}
/**
 * DECREASE ARRAY
 * TWORZYMY TABLICE O MNEIJSZYM ROZMIARZE O JEDEN
 * PRZENOSImY WARTOŚCI
 * USUWAmy STARA TABLICE I
 * WRZUCAMY NOWĄ DO STAREJ
 */
void Array::decreaseArray() {
    int *newArr = new int[--size];
    memcpy(newArr, array, (size) * sizeof(int));

    delete[] array;
    array = newArr;
}

Array::~Array() {

}

void Array::deleteFromBegin() {
    if (size > 1) {
        for (int i = 1; i < size; i++) {
            array[i - 1] = array[i];
        }
        decreaseArray();
    }
    else
        printf("cannot delete last element.");
}
void Array::deleteFromEnd() {
    if (size > 1) {
        decreaseArray();
    }
    else
        printf("cannot delete last element.");
}




















