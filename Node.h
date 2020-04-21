#pragma once
class Node
{
private:
	int info;
	Node* pNext;
public:
	void setInfo(int);
	void setpNext(Node*);
	int getInfo();
	Node* getpHead();
	Node();
	Node(int, Node*);
	Node(Node*&);
	~Node() { return; };
	friend class Stack;
};

