#include <iostream>
#include "Headers/FileParser.h"
#include "Headers/DataHandler.h"
#include "Headers/BinaryHeap.h"
#include "Headers/TwoDList.h"
#include "Headers/Array.h"
#include "Headers/TestingClass.h"
#include "Headers/Menu.h"
#include "Headers/BSTree.h"


using namespace std;

bool checkRange(int index, int size);
void init_classes(FileParser &s,Array &array, TwoDList &twoDList, BinaryHeap &binaryHeap, BSTree &bsTree);
void menu();
int main() {
    FileParser fileParser("t.txt");


    DataHandler dataHandler;

    Menu menu;

   // dataHandler.inputData = fileParser.outputVector();
    BinaryHeap binaryHeap = NULL;
    TwoDList twoDList = NULL;
    BSTree bsTree;
    Array tab = NULL;
    init_classes(fileParser,tab,twoDList,binaryHeap,bsTree);



    bool t = true;

    while (t) {
        menu.showMainMenu();
        cin >> menu.choice;
        switch (menu.choice) {

            case 1:
                menu.showArrayMenu();
                cin >> menu.choice;

                 if (menu.choice == 1 || menu.choice == 2) {
                    int tmp;
                    printf("Add value: ");
                    cin >> tmp;
                    if (menu.choice == 1)
                        tab.addValueBegin(tmp);
                    else
                        tab.addValueEnd(tmp);
                }
                else if (menu.choice == 3) {
                    int tmp1, tmp2;
                    printf("Index: \n");
                    cin >> tmp1;
                    printf("Value: \n");
                    cin >> tmp2;
                    if (checkRange(tmp1, twoDList.size))
                        tab.addValue(tmp1, tmp2);
                    else
                        printf("Incorrect value");
                }
                else if (menu.choice == 4)
                    tab.deleteFromBegin();
                else if (menu.choice == 5)
                    tab.deleteFromEnd();
                else if(menu.choice == 6) {
                    int tmp;
                    printf("Index: ");
                    cin>>tmp;
                    if(checkRange(tmp,tab.size))
                    tab.deleteFromIndex(tmp);
                }
                tab.showArray();
                break;


            case 2:
                menu.showListMenu();
                cin >> menu.choice;
                 if (menu.choice == 1 || menu.choice == 2) {
                    int tmp;
                    printf("Add value: ");
                    cin >> tmp;
                    if (menu.choice == 1)
                        twoDList.addToBegin(tmp);
                    else
                        twoDList.addToEnd(tmp);
                }
                else if (menu.choice == 3) {
                    int tmp1, tmp2;
                    printf("Index: \n");
                    cin >> tmp1;
                    printf("Value: \n");
                    if (checkRange(tmp1, twoDList.size))
                        twoDList.addToIndex(tmp1, tmp2);
                    else
                        printf("Incorrect value");
                }
                else if (menu.choice == 4)
                    twoDList.delFromBegin();
                else if (menu.choice == 5)
                    twoDList.delFromEnd();
                else if (menu.choice == 6) {
                    int tmp;
                    printf("Index to delete: ");
                    cin >> tmp;
                    if (checkRange(tmp, twoDList.size))
                        twoDList.delFromIndex(tmp);
                    else
                        printf("Incorrect value");
                }

                twoDList.showList();
                break;
            case 3:
                menu.showBinaryHeapMenu();
                cin >> menu.choice;
                if (menu.choice == 1) {
                    int tmp;
                    printf("Add value: ");
                    cin >> tmp;
                    binaryHeap.addToHeap(tmp);
                }
                else if (menu.choice == 2)
                    binaryHeap.deleteRoot();

                binaryHeap.showHeap();
                break;
            case 9:
                t = false;
                break;
            default:
                break;

        }

    }

    return 0;
    //TODO: MENU. JUST PASTE IT

}



bool checkRange(int index, int size) {

    return (index >= 0 && index < size);
}
/**
 * @param fileParser
 * @param Array
 * @param TwoDList
 * @Param BinaryHeap
 */
void init_classes(FileParser &s,Array &array, TwoDList &twoDList, BinaryHeap &binaryHeap, BSTree &bsTree) {
    int tmp;
    int size = s.getNumber();
    printf("TMP: %d \n",size);
    array = Array(size);
    twoDList = TwoDList(size);
    binaryHeap = BinaryHeap(size);
    printf("Begore looop \n");
    for (int i = 0 ; i < size; i++)
    {

        tmp = s.getNumber();
        printf("TMP: %d \n",tmp);
        array.addValue(i,tmp);
        twoDList.addToIndex(i,tmp);
        binaryHeap.addToHeap(tmp);
//        bsTree.addValue(tmp);
    }
  //  printf("MIN: %d \n",bsTree.getMinValue());

}

