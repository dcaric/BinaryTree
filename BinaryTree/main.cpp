//
//  main.cpp
//  DemoStruct
//
//  Created by Dario Caric on 28.05.2024..
//

#include <iostream>
#include <time.h>
#include <vector>
#include "Tree.hpp"

using namespace std;

/*
// generate random OIB number
int generateoib() {
    int result = rand() % 1000000000 + 1000000000;
    return result;
}

// generate random string of 10 characters
string generateRandomString() {
    string randomString
    = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    string result = "";
    for (int i = 0; i < 10; i++) {
        result += randomString[rand() % randomString.size()];
    }
    return result;
}
*/

int main() {
    
    // create tree object
    Tree tree = Tree();
    // reqads root node from created tree
    node *root_node = tree.get_root_node();
    
    
    
    // LEVEL 1
    // creates left and right childs for the root node
    tree.createLeftChild(root_node, 2);
    tree.createRightChild(root_node, 3);
    
    
    // reads left and right child of root node
    node *nodeLeft = tree.getLeftChild(root_node);
    node *nodeRight = tree.getRightChild(root_node);
    
    
    // LEVEL 2
    // creates left and right childs of the left child of root node
    tree.createLeftChild(nodeLeft, 4);
    tree.createRightChild(nodeLeft, 5);
    
    // create left and right childs of the right child of the root node
    tree.createLeftChild(nodeRight, 6);
    tree.createRightChild(nodeRight, 7);
    
    
    
    // preparation for LEVEL 3
    node *temp = nodeLeft;
    // reads left and right child of left child of the root node
    nodeLeft = tree.getLeftChild(nodeLeft);
    nodeRight = tree.getRightChild(temp); // temp keeps original value of nodeLeft before nodeLeft is overwritten
    
    
    // LEVEL 3
    // childs of left child of root
    tree.createLeftChild(nodeLeft, 8);
    tree.createRightChild(nodeLeft, 9);
    
    
    // childs of right child of root
    tree.createLeftChild(nodeRight, 10);
    tree.createRightChild(nodeRight, 11);
    
    
    // print tree inorder
    cout << "Inorder" << endl;
    tree.printInOrder(root_node);
    cout << endl << endl;

    
    // print tree preorder
    cout << "preorder" << endl;
    tree.printPreOrder(root_node);
    cout << endl << endl;

    // print tree postorder
    cout << "Postorder" << endl;
    tree.printPostOrder(root_node);
    cout << endl << endl;

    return 0;
}
