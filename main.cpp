#include <iostream>
#include "Headers/TwoDList.h"
#include "Headers/BinaryHeap.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    TwoDList list(3);
    list.addToBegin(4);
    list.addToEnd(6);
    list.showList();

    BinaryHeap w(20);
    w.addToHeap(8);
    w.addToHeap(16);
    w.addToHeap(10);
    w.addToHeap(15);
    w.addToHeap(2);
    w.addToHeap(5);
    w.addToHeap(7);
    w.addToHeap(6);
    w.addToHeap(3);
    w.showHeap();
    return 0;
}