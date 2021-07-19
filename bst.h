#pragma once

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

class Abstractbst {
public:
	virtual bool isEmpty() = 0;
	virtual void addBst(int data = 0, int index = 0 ,Node* newnode = nullptr) = 0;
	virtual void removeBst(int data = 0, int index = 0, Node* root = nullptr) = 0;
	virtual bool searchBst(int data = 0, int index = 0, Node* root = nullptr) = 0;
};
