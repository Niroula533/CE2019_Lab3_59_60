#include<iostream>
#include "LinkedList.h"

using namespace std;

int main() {
    
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