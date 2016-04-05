//
// Created by lukasz on 4/4/16.
//

#ifndef SDIZ_PROJEKT_1_BSTREE_H
#define SDIZ_PROJEKT_1_BSTREE_H


class BSTree {
public:
    struct Node{
        int value;
        Node* parent;
        Node* left;
        Node* right;
    }*pNode;
    Node* addValue(int value);
    BSTree();
    int getMinValue();
};


#endif //SDIZ_PROJEKT_1_BSTREE_H
