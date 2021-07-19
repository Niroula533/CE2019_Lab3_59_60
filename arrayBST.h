#pragma once
#include "bst.h"
#define Size 100

class ArrayBST : public Abstractbst {
private:
	int arr[Size] = {0};
	int root;
public:
	ArrayBST(int root = 0) :root(root){}
	bool isEmpty();
	void addBst(int data, int index = 1, Node* newnode = nullptr);
	void removeBst(int data, int index = 1, Node* root = nullptr);
	bool searchBst(int data, int index = 1 , Node* root = nullptr);
	void printBST(int value = 1);
	int largest(int index);
};
