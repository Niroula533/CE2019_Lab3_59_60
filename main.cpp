#include<iostream>
#include "include/LinkedList.h"
#include "include/arrayBST.h"

using namespace std;

int main()
{

     //Array representation

    std::cout << "\t\t\t\tArray Representation" << std::endl;
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

    
    //Linked List representation

    std::cout << "\t\t\t\tLinked List Representation" << std::endl;
    LinkedBST obj;
    Node* max, * min;
    int val, option;
    do {
        cout << "\nwhat operation do you like to perform?" << endl;
        cout << "Enter 0 to exit" << endl;
        cout << "Enter 1 for insertion" << endl;
        cout << "Enter 2 for findMax" << endl;
        cout << "Enter 3 for findMin" << endl;
        cout << "Enter 4 for inorder traversal" << endl;
        cout << "Enter 5 for deletion" << endl;
        cout << "Enter 6 for searching" << endl;

        cout << "\n";
        cout << "please select an option: ";
        cin >> option;

        Node* newnode = new Node();

        switch (option) {

        case 0:
            return 0;
            break;

        case 1:
            cout << "Enter the value for insertion" << endl;
            cin >> val;
            obj.addBst(val);
            break;

        case 2:
            max = obj.findMax(obj.Root);
            cout << "Max" << max->key;
            cout << endl;
            break;

        case 3:
            min = obj.findMin(obj.Root);
            cout << endl;
            cout << "Min" << min->key;
            cout << endl;
            break;

        case 4:
            obj.inorder(obj.Root);
            break;

        case 5:
            cout << "please enter value for deletion: ";
            cin >> val;
            obj.removeBst(obj.Root,val);
            break;

        case 6:
            cout << "please enter data to be searched: ";
            cin >> val;

            bool msg = obj.searchBst(val);
            cout << msg;
            break;




        }

    } while (option != 0);

    cout << "exited";

}