#include<iostream>
#include "arrayBST.h"

int main()
{
	ArrayBST arrayTree;
	//check if tree is empty (should result in empty)
	arrayTree.isEmpty() ? std::cout << "Empty" : std::cout << "Not Empty";
	std::cout << std::endl;

	//adding data in tree
	arrayTree.addBst(40);
	arrayTree.addBst(20);
	arrayTree.addBst(1);
	arrayTree.addBst(70);
	arrayTree.addBst(55);
	arrayTree.addBst(23);
	arrayTree.addBst(89);

	//check if tree is empty (should not result in empty)
	arrayTree.isEmpty() ? std::cout << "Empty" : std::cout << "Not Empty";
	std::cout << std::endl;
	
	//printing tree in inorder traversal
	arrayTree.printBST();
	std::cout << "\n";

	//search if a value exist or not; if exists return true else false
	arrayTree.searchBst(23) ? std::cout << "Data exists in the tree." : std::cout << "Data doesn't exist in the tree.";
	std::cout << std::endl;
	
	//remove a data from tree
	arrayTree.removeBst(23);
	arrayTree.printBST();
	std::cout << "\n";


	//std::cout << "Largest\t" << arrayTree.largest(5);



}