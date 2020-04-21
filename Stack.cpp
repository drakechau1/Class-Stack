#include "Stack.h"
#include <iostream>
using namespace std;

// Contructor
Stack::Stack()
{
	n = 0;
	pTop = nullptr;
}

Stack::Stack(int n, Node* p)
{
	this->n = n;
	pTop = p;
}

Stack::Stack(Stack& s)
{
	pTop = s.pTop;
	this->n = s.n;
}

Stack::~Stack()
{
	return;
}
//----------------

Node* Stack::initNode(int x)
{
	Node* p = new Node;
	p->info = x;
	p->pNext = nullptr;
	return p;
}


bool Stack::isEmpty()
{
	if (pTop == nullptr)
	{
		return true;
	}
	return false;
}

bool Stack::Push(int x)
{
	Node* p = initNode(x);
	if (isEmpty())
	{
		pTop = p;
		return false;
	}
	p->pNext = pTop;
	pTop = p;
	return false;
}

bool Stack::Pop()
{
	if (pTop == nullptr)
	{
		cout << "\nStack is empty";
		return false;
	}
	pTop = pTop->pNext;
	return false;
}

int Stack::Top()
{
	return pTop->info;
}
