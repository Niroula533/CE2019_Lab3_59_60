#include<iostream>
#include "arrayBST.h"

int main()
{
	ArrayBST arrayTree;
	//arrayTree.isEmpty() ? std::cout << "Empty" : std::cout << "Not Empty";
	arrayTree.addBst(40);
	arrayTree.addBst(20);
	arrayTree.addBst(1);
	arrayTree.addBst(70);
	//arrayTree.isEmpty() ? std::cout << "Empty" : std::cout << "Not Empty";
	arrayTree.addBst(55);
	arrayTree.addBst(23);
	arrayTree.addBst(89);
	arrayTree.addBst(34);
	arrayTree.addBst(66);
	arrayTree.addBst(2);
	arrayTree.addBst(45);
	arrayTree.addBst(17);
	arrayTree.addBst(11);
	arrayTree.addBst(60);
	arrayTree.addBst(75);
	arrayTree.printBST();
	
	std::cout << std::endl;
	//arrayTree.searchBst(23) ? std::cout << "found" : std::cout << "Not Found";
	std::cout << std::endl;
	
	arrayTree.removeBst(70);
	arrayTree.printBST();
	
	//std::cout << "Largest\t" << arrayTree.largest(5);



}