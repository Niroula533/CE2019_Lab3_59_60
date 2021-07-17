#include<iostream>
#include "arrayBST.h"


bool ArrayBST::isEmpty()
{
	return(arr[1] == 0);
}

void ArrayBST::addBst(int key, int index)
{
	if (arr[index] == 0)
	{
		arr[index] = key;
		return;
	}
	if (key < arr[index])
		addBst(key, 2 * index);
	else
		addBst(key, 2 * index + 1);
}

void ArrayBST::removeBst(int key, int index)
{
	if (arr[index] == 0)
		return;
	
	if (key < arr[index])
		removeBst(key, 2 * index);
	else if (key > arr[index])
		removeBst(key, 2 * index + 1);
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




bool ArrayBST::searchBst(int key, int index)
{
	if(arr[index] == key)		
		return true;
	
	if (key < arr[index] && arr[2 * index] != 0)
		searchBst(key, 2 * index);
	else if (key > arr[index] && arr[2 * index + 1] != 0)
		searchBst(key, 2 * index + 1);
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

