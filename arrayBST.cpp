#include<iostream>
#include "arrayBST.h"


bool ArrayBST::isEmpty()
{
	return(arr[1] == 0);
}

void ArrayBST::addBst(int data, int index, Node* newnode)
{
	if (arr[index] == 0)
	{
		arr[index] = data;
		return;
	}
	if (data < arr[index])
		addBst(data, 2 * index);
	else
		addBst(data, 2 * index + 1);
}

void ArrayBST::removeBst(int data, int index, Node* root)
{
	if (arr[index] == 0)
		return;
	
	if (data < arr[index])
		removeBst(data, 2 * index);
	else if (data > arr[index])
		removeBst(data, 2 * index + 1);
	else
	{
		if (arr[2 * index] == 0)
		{
			arr[index] = arr[2 * index + 1];
			removeBst(arr[2 * index + 1], 2 * index + 1);
		}
		else if (arr[2 * index + 1] == 0)
		{
			arr[index] = arr[2 * index];
			removeBst(arr[2 * index], 2 * index);
		}
		else
		{
			int largestValueIndex = largest(2 * index);
			arr[index] = arr[largestValueIndex];
			if (arr[2 * largestValueIndex] != 0 || arr[2 * largestValueIndex + 1] != 0)
			{
				removeBst(arr[largestValueIndex], largestValueIndex);
				return;
			}
			arr[largestValueIndex] = 0;
		}
	}
}



bool ArrayBST::searchBst(int data, int index, Node* root)
{
	if(arr[index] == data)		
		return true;
	
	if (data < arr[index] && arr[2 * index] != 0)
		searchBst(data, 2 * index);
	else if (data > arr[index] && arr[2 * index + 1] != 0)
		searchBst(data, 2 * index + 1);
	else
		return false;
}


void ArrayBST::printBST(int value)
{
	if (arr[value] == 0)
		return;

	printBST(2 * value);
	std::cout << arr[value] << "\t";
	printBST(2 * value + 1);
}

int ArrayBST::largest(int index)
{
	if (arr[2 * index + 1] == 0)
		return index;
	largest(2 * index + 1);
}

