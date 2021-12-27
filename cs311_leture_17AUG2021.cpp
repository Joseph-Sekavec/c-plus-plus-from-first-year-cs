#include <iostream>
#include <vector>
using namespace std;


/*

*Topics we will Cover:

*We will review functions, pointers, arrays, file operations.

*We will learn vectors, bubble sort.

* C++ classes and structures.
* Operator overloading.
* The rule of three/five
* Separate Compilation and Function Recursion
	* If we have recursion, we need a base case, lest we compile forever and cause stack overflow.
	* Separate compilation is where we break our program into multiple cpp files.
* Class inheritance
* Polymorphism
* Template Programming
* Exception Handling
* 


*We want to encapsulate implementation details into an object.


*/

int main()
{
	// Recall the syntax for vectors: vector<type> name(size);
	int size;
	cout << "Input a size for your vector: " << endl;

	cin >> size;

	vector<int> vector_ints(size);

	for (int i = 0; i < size; i++)
	{
		cout << "Input entry: " << i << ": ";
		cin >> vector_ints[i];
	}


	for (int i = 0; i < size; i++)
	{
	//	cout << "Input entry: " << i << ": ";
		cout << vector_ints[i];
	}

	vector_ints.push_back(88);

	cout << vector_ints[size];
	cout << endl << sizeof(vector_ints);
	cout << endl << vector_ints.size();
	cout << endl << vector_ints.at(3);
	cout << endl << vector_ints.back();
	cout << endl << vector_ints.front();
	

	return 0;
}
