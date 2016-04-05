//
// Created by lukasz on 3/20/16.
//

#include "TestingClass.h"
#include "TwoDList.h"

const int size = 20000;

void TestingClass::testArray() {
    printf("=====T E S T I N G  A R R A Y=====\n");
    // dataHandler.showInput();


    printf("==== A D D  B E G I N ====\n");
    start = std::chrono::system_clock::now();
    for (int i = 1; i < size; i++) {
        array.addValueBegin(i);
    }
    end = std::chrono::system_clock::now();
    elapsed_seconds = end - start;
    std::cout << "[ARRAY] Adding begin time: " << elapsed_seconds.count() << "s \n";
    int w;

    w = getchar();

    array = Array(20);


    start = std::chrono::system_clock::now();
    for (int i = 1; i < size; i++) {

        array.addValueEnd(i);
    }
    end = std::chrono::system_clock::now();

    elapsed_seconds = end - start;
    std::cout << "[ARRAY] Adding end time: " << elapsed_seconds.count() << "s \n";

    array = Array(size);

    start = std::chrono::system_clock::now();
    for (int i = 1; i < size; i++) {

        array.addValue(i,i);
    }
    end = std::chrono::system_clock::now();

    elapsed_seconds = end - start;
    std::cout << "[ARRAY] Adding Index time: " << elapsed_seconds.count() << "s \n";


    //w = getchar();

    printf("==== D E L E T I N G   B E G I N ==== \n");
    start = std::chrono::system_clock::now();
    for (int i = 1; i < size; i++) {

        array.deleteFromBegin();
    }
    end = std::chrono::system_clock::now();

    elapsed_seconds = end - start;
    std::cout << "[ARRAY] deleting begin time: " << elapsed_seconds.count() << "s \n";


//w = getchar();

    for (int i = 1; i < size; i++) {

        array.addValueEnd(i);
    }
    printf("==== D E L E T I N G E N D==== \n");
    start = std::chrono::system_clock::now();
    for (int i = 1; i < size; i++) {

        array.deleteFromBegin();
    }
    end = std::chrono::system_clock::now();

    elapsed_seconds = end - start;
    std::cout << "[ARRAY] deleting end time: " << elapsed_seconds.count() << "s \n";

    for (int i = 1; i < size; i++) {

        array.addValueEnd(i);
    }

    printf("==== D E L E T I N G    I N D E X==== \n");
    int p = size;
    start = std::chrono::system_clock::now();
    for (int i = 1; i < size; i++) {

        array.deleteFromIndex(p--);
    }
    end = std::chrono::system_clock::now();

    elapsed_seconds = end - start;
    std::cout << "[ARRAY] deleting Index time: " << elapsed_seconds.count() << "s \n";

}

void TestingClass::testList() {
    int w;
    printf("===== T E S T I N G  A R R A Y =====\n");

    List = TwoDList(1);


    printf("==== A D D  TO  B E G I N ====\n");
    start = std::chrono::system_clock::now();
    for (int i = 1; i < size; i++) {
        List.addToBegin(i);
    }
    end = std::chrono::system_clock::now();

    elapsed_seconds = end - start;
    std::cout << "[LIST] Adding Begin time: " << elapsed_seconds.count() << "s \n";




    List = TwoDList(1);
    printf("==== A D D  TO  E N D ====\n");

    start = std::chrono::system_clock::now();
    for (int i = 1; i < size; i++) {
        List.addToEnd(i);
    }
    end = std::chrono::system_clock::now();

    elapsed_seconds = end - start;
    std::cout << "[LIST] Adding END time: " << elapsed_seconds.count() << "s \n";




    List = TwoDList(size);
    printf("==== A D D  T O  I N D E X==== \n");

    start = std::chrono::system_clock::now();
    for (int i = 1; i < size; i++) {
        List.addToIndex(i,i);
    }
    end = std::chrono::system_clock::now();

    elapsed_seconds = end - start;
    std::cout << "[LIST] Adding Index time: " << elapsed_seconds.count() << "s \n";


    printf("==== D E L E T I N G  B E G I N====\n");

    start = std::chrono::system_clock::now();
    for (int i = 1; i < size; i++) {
        List.delFromBegin();
    }
    end = std::chrono::system_clock::now();

    elapsed_seconds = end - start;
    std::cout << "[LIST] DELETING BEGIN time: " << elapsed_seconds.count() << "s \n";


    w = getchar();

    printf("==== D E L E T I N G  E N D====\n");

    for (int i = 1; i < size; i++) {
        List.addToBegin(i);
    }
    start = std::chrono::system_clock::now();
    for (int i = 1; i < size; i++) {

        List.delFromEnd();
    }
    end = std::chrono::system_clock::now();

    elapsed_seconds = end - start;
    std::cout << "[LIST] DELETING END time: " << elapsed_seconds.count() << "s \n";
    List =  TwoDList(2);

    printf("==== D E L E T I N G    I N D E X====\n");

    for (int i = 1; i < size; i++) {
        List.addToBegin(i);
    }

    start = std::chrono::system_clock::now();
    int p = size;
    for (int i = 1; i < size; i++) {

        List.delFromIndex(p--);
    }
    end = std::chrono::system_clock::now();

    elapsed_seconds = end - start;
    std::cout << "[LIST] DELETING INDEX time: " << elapsed_seconds.count() << "s \n";


}

void TestingClass::testHeap()
{
    int w;
    printf("==== T E S T I N G  H E A P ==== \n");

    printf("==== A D D I N G  T O  H E A P ==== \n");
    start = std::chrono::system_clock::now();
    binaryHeap = BinaryHeap(size);
    for(int i = 0  ; i < size; i++)
    {

        binaryHeap.addToHeap(w++ );
        w-=1;
    }
    end = std::chrono::system_clock::now();
    elapsed_seconds = end-start;
    printf("[HEAP] ADDDING ELEMENTS: %f \n",elapsed_seconds);
    //binaryHeap.showHeap();


    printf("==== D E L E T I N G  R O O T ==== \n");

    start = std::chrono::system_clock::now();

    for(int i = 0  ; i < size ; i++)
    {
        binaryHeap.deleteRoot();
    }
    end = std::chrono::system_clock::now();
    elapsed_seconds = end-start;
    printf("[HEAP] DELETING ELEMENTS: %f \n",elapsed_seconds);
    w = getchar();
}

TestingClass::TestingClass(Array array, BinaryHeap binaryHeap, TwoDList TwoDirList, DataHandler dataHandler
) : array(array), binaryHeap(binaryHeap), dataHandler(dataHandler), List(TwoDirList) {

}






