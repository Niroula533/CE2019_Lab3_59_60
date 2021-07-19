#pragma once

class Abstractbst {
public:
	virtual bool isEmpty() = 0;
<<<<<<< HEAD
	virtual void addBst(int key, int index) = 0;
	virtual void removeBst(int key, int index) = 0;
	virtual bool searchBst(int key, int index) = 0;
};
=======
	virtual void addBst(int data = 0, int index = 0 ) = 0;
	//remove method took different parameteres in array and linked list representation, so we did not include it in abstract class
	//virtual void removeBst(int data = 0, int index = 0) = 0;  
	virtual bool searchBst(int data = 0, int index = 0) = 0;
};
>>>>>>> 504937b3a7d14c265772f486bc95a32e3e527a93
