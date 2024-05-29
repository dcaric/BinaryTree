//
//  Node2.cpp
//  BinaryTree
//
//  Created by Dario Caric on 28.05.2024..
//

#include "Tree.hpp"
#include <iostream>

using namespace std;

Tree::Tree() {
    root = create_new_node(0);
}

Tree::~Tree() {
    delete root;
}

// create node
node* Tree::create_new_node(int key) {
    node *newNode = new node;
    newNode->key = key;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}


// returns root node of the tree
node* Tree::get_root_node() {
    return root;
}



// creating childs
void Tree::createLeftChild(node *parent, int key) {
    parent->left = create_new_node(key);
}

void Tree::createRightChild(node *parent, int key) {
    parent->right = create_new_node(key);
}


// reading childs
node* Tree::getLeftChild(node *parent) {
    return parent->left;
}

node* Tree::getRightChild(node *parent) {
    return parent->right;
}




// PRINTING
void Tree::printInOrder(node *root) {
    if (root == nullptr) {
        //cout << endl;
        return;
    }
    printInOrder(root->left);
    cout << root->key << " ";
    printInOrder(root->right);
}

void Tree::printPreOrder(node *root) {
    if (root == nullptr) {
        return;
    }
    cout << root->key << " ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}

void Tree::printPostOrder(node *root) {
    if (root == nullptr) {
        return;
    }
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout << root->key << " ";

    
}



