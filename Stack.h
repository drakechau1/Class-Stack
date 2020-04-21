#pragma once
#include "Node.h"

class Stack
{
public:
	// Contructor
	Stack();
	Stack(int, Node*);
	Stack(Stack&);
	// Destructor
	~Stack();
	// Function
	Node* initNode(int);
	bool isEmpty();
	bool Push(int);
	bool Pop();
	int Top();

private:
	Node* pTop;
	int n;
};


