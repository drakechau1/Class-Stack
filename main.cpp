#include "Stack.h"
#include <iostream>
using namespace std;

int main()
{

	Stack s;
	int n;
	cout << "Number element of stack: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		s.Push(x);
	}

	if (s.isEmpty())
		cout << "\nStack is empty";
	else
		cout << "\nStack isn't empty";

	while (!s.isEmpty())
	{
		cout << "\ntop = " << s.Top();
		s.Pop();
	}

	if (s.isEmpty())
		cout << "\nStack is empty";
	else
		cout << "\nStack isn't empty";

	return 0;
}