#pragma once

class Abstractbst {
public:
	virtual bool isEmpty() = 0;
	virtual void addBst(int data = 0, int index = 0) = 0;
	//remove method took different parameteres in array and linked list representation, so we did not include it in abstract class
	//virtual void removeBst(int data = 0, int index = 0) = 0;    
	virtual bool searchBst(int data = 0, int index = 0) = 0;
};

