//
//  Node2.hpp
//  BinaryTree
//
//  Created by Dario Caric on 28.05.2024..
//

#ifndef Node2_hpp
#define Node2_hpp

#include <stdio.h>

struct node {
    int key; // useful data
    
    node *left, *right; // links to neighbors
};


class Tree {
    
private:
    node *root;
    node *create_new_node(int key);
    
public:
    // constructor and destructor
    Tree();
    ~Tree();
    
    // creating childs
    void createLeftChild(node* parent, int key);
    void createRightChild(node *parent, int key);
    
    // reading childs
    node* getLeftChild(node *parent);
    node* getRightChild(node *parent);
    
    // read root node
    node *get_root_node();
    
    
    // printing
    void printInOrder(node *root);
    void printPreOrder(node *root);
    void printPostOrder(node *root);
    
};

#endif /* Node2_hpp */
