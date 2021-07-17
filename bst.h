#pragma once

class Abstractbst {
public:
	virtual bool isEmpty() = 0;
	virtual void addBst(int key, int index) = 0;
	virtual void removeBst(int key, int index) = 0;
	virtual bool searchBst(int key, int index) = 0;
};