#include<iostream>
#include "arrayBST.h"

int main()
{
	ArrayBST arrayTree;
	//check if tree is empty (should result in empty)
	std::cout << "Before adding data in the tree:\t";
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
	std::cout << "After adding Data in the tree:\t";
	arrayTree.isEmpty() ? std::cout << "Empty" : std::cout << "Not Empty";
	std::cout << "\n\n";
	
	//printing tree in inorder traversal
	std::cout << "Tree after adding datas: " << std::endl;
	arrayTree.printBST();
	std::cout << "\n\n";

	//search if a value exist or not; if exists return true else false
	std::cout << "Searching for a value (23 in this case):\n"; 
	arrayTree.searchBst(23) ? std::cout << "Data exists in the tree." : std::cout << "Data doesn't exist in the tree.";
	std::cout << "\n\n";
	
	//remove a data from tree
	arrayTree.removeBst(23);
	std::cout << "Data Elements in tree after using remove: " << std::endl;
	arrayTree.printBST();
	std::cout << "\n";


	//std::cout << "Largest\t" << arrayTree.largest(5);



}