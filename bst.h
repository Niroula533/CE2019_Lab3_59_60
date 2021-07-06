#pragma once

class Abstractbst {
public:
	virtual bool isEmpty();
	virtual void addBst(int key);
	virtual void removeBst(int key);
	virtual bool searchBst(int key);
};