//
// Created by lukasz on 23.02.16.
//

#include <stdio.h>

#ifndef SDIZ_PROJEKT_1_COLLECTIONSMANAGER_H
#define SDIZ_PROJEKT_1_COLLECTIONSMANAGER_H

#endif //SDIZ_PROJEKT_1_COLLECTIONSMANAGER_H
class CollectionsManager{

public:
    CollectionsManager();
    void showAll(struct List* list);
};

void CollectionsManager::showAll(struct List *list) {
    do{
        printf("%d \n", list->value);
    }while(list->header =list);
}
