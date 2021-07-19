#include<iostream>
#include<conio.h>
#include "bst.h"
using namespace std;


class Node {
public:
    int key;
    Node* left;
    Node* right;

    Node() {
        key = 0;
        left = NULL;
        right = NULL;
    }
    Node(int val) {
        key = val;
        left = NULL;
        right = NULL;
    }

};

class LinkedBST : public Abstractbst {
public:
    Node* Root;
    bool isEmpty();
    void addBst(int data, int index = 0);
    bool searchBst(int data, int index = 0);
    void inorder(Node* root);
    Node* findMax(Node* root);
    Node* findMin(Node* root);
    Node* removeBst(Node* root, int data);


    LinkedBST() {
        Root = NULL;
    }

};



bool LinkedBST::isEmpty() {
    if (Root == NULL) {
        return true;
    }
    else
        return false;
}

void LinkedBST::addBst(int data ,int index) {
    Node* newnode = new Node(data);
    Node* temp = Root;
    if (Root == nullptr) {
        Root = newnode;
        cout << "successfully added to the root" << endl << endl;
    }

    while (temp != nullptr) {
        if (newnode->key < temp->key && temp->left == nullptr) {
            temp->left = newnode;
            cout << "value added to the left" << endl;
            break;
        }

        else if (newnode->key < temp->key) {
            temp = temp->left;
        }

        else if (newnode->key > temp->key && temp->right == nullptr) {
            temp->right = newnode;
            cout << "value added to the right" << endl;
            break;

        }
        else {
            temp = temp->right;
        }
    }


}



bool LinkedBST::searchBst(int data, int index) {
    Node* node = Root;
    cout << "inside search Bst" << endl << endl;
    while (node != NULL) {
        if (data > node->key)
            node = node->right;

        else if (data < node->key)
            node = node->left;
        else
            return true;
    }
    return false;

}



void LinkedBST::inorder(Node* root) {

    if (root == NULL) {
        return;
    }

    inorder(root->left);
    cout << root->key << "\t";
    inorder(root->right);
}

Node* LinkedBST::findMax(Node* root) {

    Node* temp = root;
    if (temp->right == NULL) {
        return(temp);
    }

    while (temp->right != NULL) {

        temp = temp->right;

    }

    return(temp);


}

Node* LinkedBST::findMin(Node* root) {

    Node* temp = root;
    if (temp->left == NULL) {
        return(temp);
    }

    while (temp->left != NULL) {
        temp = temp->left;

    }

    return(temp);

}

Node* LinkedBST::removeBst(Node* root, int data) {

    Node* temp = root;

    if (temp == NULL) {
        return root;
    }

    else if (data < temp->key) {
        temp->left = removeBst(temp->left, data);

    }

    else if (data > temp->key) {
        temp->right = removeBst(temp->right, data);
    }

    else {

        if (root->left == NULL) {
            temp = root->right;
            delete root;
            return(temp);
        }



        else if (root->right == NULL) {
            temp = root->left;
            delete root;
            return(temp);
        }


        else {
            Node* temp = findMax(root->left);
            root->key = temp->key;
            root->left = removeBst(root->left, temp->key);
        }

    }

    return(root);
}

