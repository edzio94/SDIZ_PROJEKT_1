//
// Created by lukasz on 4/4/16.
//

#include <clocale>
#include <cstdio>
#include "BSTree.h"


BSTree::Node *BSTree::addValue(int value) {
   Node *tmp;
    if (pNode != NULL) {
       tmp = pNode;
   }
    if (pNode == NULL) {
        printf("Creating root");
        pNode = new Node;
        pNode->value = value;
        pNode->parent = pNode->left = pNode->right = NULL;
        tmp = pNode;
    }
    else {
        printf("SSSSS");
        bool end = false;
        Node *parent;
        while (!end) {
            if (pNode->value > value ) {
                printf("IDE W LEWO");
                parent = pNode;
                pNode = pNode->left;

            }
            else if (pNode->value < value) {
                printf("IDE W PRAWO");
                parent = pNode;
                pNode = pNode->right;
            }

             if (pNode == NULL) {
                pNode = new Node;
                pNode->value = value;
                pNode->left = pNode->right = NULL;
                pNode->parent = parent;
                 if (value > parent->value)
                     parent->right = pNode;
                 else
                     parent->left = pNode;
                end = true;
            }

        }
    }
    pNode = tmp;
    return pNode;

}

int BSTree::getMinValue() {
    while(pNode->left != NULL)
        pNode = pNode->left;

    return pNode->value;
}

BSTree::BSTree() {

}





