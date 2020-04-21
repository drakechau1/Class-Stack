#include "Node.h"

void Node::setInfo(int info)
{
	this->info = info;
}

void Node::setpNext(Node* pHead)
{
	this->pNext = pHead;
}

int Node::getInfo()
{
	return info;
}

Node* Node::getpHead()
{
	return pNext;
}

Node::Node()
{
	this->info = 0;
	this->pNext = nullptr;
}

Node::Node(int info, Node* pHead)
{
	this->info = info;
	this->pNext = pHead;
}

Node::Node(Node*& p)
{
	this->info = p->info;
	this->pNext = p->pNext;
}
