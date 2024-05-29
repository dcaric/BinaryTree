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
node* Tree::create_new_node(int k) {
    node *newNode = new node;     //sprema adrresu na kojoj je napravljena nova struktura u varb newNode
    newNode->key = k;        //u key iz strukture se sprema ono sta sam stavila u k
    newNode->left = nullptr;    //nullptr jer trenutno nema dice
    (*newNode).right = nullptr;
    return newNode;    //vraca adresu nove struk
}



node* Tree::get_root_node() {
    return root;    //vraca adresu root noda
}



// creating childs
void Tree::createLeftChild(node *parent, int key) {
    parent->left = create_new_node(key);      //(1)root: u  left varijablu se spremi add od nove strukture(ima nullptr) i posalje se  novi key
}

void Tree::createRightChild(node *parent, int key) {
    (*parent).right = create_new_node(key);
}


// reading childs
node* Tree::getLeftChild(node *parent) {
    return parent->left;    //posalje add noda i on vrate sta pise na left varb u trazenon nodu
}

node* Tree::getRightChild(node *parent) {
    return parent->right;
}




// PRINTING

//INORDER: left,parent,right
void Tree::printInOrder(node *currentNode) {
    if (currentNode == nullptr) {
        return;
    }
    printInOrder(currentNode->left);     //posalje joj left child zadnjeg levela
    cout << currentNode->key << " ";
    printInOrder(currentNode->right);
}


//PREORDER: parent,left,right
void Tree::printPreOrder(node *root) {
    if (root == nullptr) {
        return;
    }
    cout << root->key << " ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}



//POSTORDER:left,right,parent
void Tree::printPostOrder(node *root) {
    if (root == nullptr) {
        return;
    }
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout << root->key << " ";

    
}



