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
    
    
    Tree tree = Tree();    //konst zove create new node
    
    
    node *root_node = tree.get_root_node();   //adresu roota spremi u root_node
    
    
    
    // LEVEL 1
    // creates left and right childs for the root node
    tree.createLeftChild(root_node, 2);   //u root nodu se na left varb spremi neka nova adresa
    tree.createRightChild(root_node, 3);     //u root nodu se na right varb spremi neka nova adresa
    
    

    node *nodeLeft = tree.getLeftChild(root_node);  //procita adresu od left varijable od roota i spremi u nodeLeft
    node *nodeRight = tree.getRightChild(root_node);  //procita adresu od right varijable od roota i spremi u nodeRight
    
    
    
    
    // LEVEL 2 (OD ROOTA DICA)
   // DICA OD LEFT CHILDA
    tree.createLeftChild(nodeLeft, 4);    //u left childu se na LEFT varb spremi neka nova adresa
    tree.createRightChild(nodeLeft, 5);   //u left childu se na RIGHT varb spremi neka nova adresa
    
    
    
    
    
   //DICA OD RIGHT CHILDA
    tree.createLeftChild(nodeRight, 6);     //u right childu(od roota) se na LEFT varb spremi neka nova adresa
    tree.createRightChild(nodeRight, 7);     //u right childu(od roota) se na RIGHT varb spremi neka nova adresa
    
    
    
    // preparation for LEVEL 3
    node *temp = nodeLeft;
    
    nodeLeft = tree.getLeftChild(nodeLeft);   //cita adresu na left varb od nodeLeft(dite od roota) i pregazi proslu add u nodeLeft sa novon
    nodeRight = tree.getRightChild(temp); //  //cita adresu na right varb od nodeLeft(dite od roota) koja je spremljena u temp varb
    
    
    
    
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
