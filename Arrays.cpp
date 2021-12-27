#include <iostream>
#include <list>
#include <set>
#include <string>
using namespace std;


int main()
{
	int a[4] = { 1, 3, 5, 7 };

	for (auto i : a)
	{
		cout << i << " ";
	}

	cout << endl;

	set<int> i = { 1,3,5, 7, 6 };

	for (auto a : i)
	{
		cout << a << " ";
	}
	cout << endl << endl;

	string b;
	char c[100];
	list<string> s;
	s.push_back("Hello world");

	do
	{
		cout << "Please input a string: ";
		cin.getline(c, 100);
		if (strcmp(c, "q"))
		{
			s.push_back(c);
			
		}
	} while (strcmp(c, "q")); // strcmp returns false if two strings are equal.

	for (auto i : s)
	{
		cout << i << endl;
	}

	// s.remove(c); // Unlike Java lists, c++ remove acts like the remove function for sets in Java, ie, you remove the actual
					// element that you pass to the remove() function as opposed to the element at an index.

	
	return 0;
}