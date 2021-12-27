#include <iostream>
#include <vector> // To use vectors, we have to include the library called vector.
#include <fstream>
#include <cstring>
#include <cmath>
using namespace std;

void print_vector(vector<int> b)
{

	cout << "|";
	for (int i = 0; i < b.size(); i++)
	{
		cout << b[i] << "|";
	}
	
}


int main()
{

	//To declare a vector, you write the syntax vector<datatype> name(size);
	//For example: if we want a vector containing amount of rainfall for the week we write:
	//vector<double> rainfall(7); //Vectors are indexed very, very similarly to arrays... Vectors can hold any data types, even custom types.

	//Note we can actually change our number of elements during runtime as if we are using datatype name = new datatype[varying_size].

	vector<int> v(3); //For numeric types, each element is automatically zero unless specified.

	//evidence:
	for (int i = 0; i < 3; i++)
	{
		cout << v[i] << " ";
	}
	cout << endl<<endl;
	//Let us mess with our vector v...

	v[0] = 10;
	v[1] = 22;
	v[2] = 5;

	for (int i = 0; i < 3; i++)
	{
		cout << v[i] << " ";
	}

	cout << endl << endl;
	cout << "Your first element is: " << v.front() << endl;  //vector_name.front() gets element from the beginning.
	cout << "Your last element is: " << v.back() << endl << endl; //vector_name.back() gets element from the end.


	v.push_back(3); //Inserts an element at the end that we specify.

	cout << "Your first element is: " << v.front() << endl;  //vector_name.front() gets element from the beginning.
	cout <<"Your last element is: " << v.back()<<endl<<endl; //vector_name.back() gets element from the end.

	

	/*for (int i = 0; i < 4; i++)
	{
		cout << v[i] << " ";
	}*/

	cout << v.at(2) << endl; //v.at(indexvalue) spits out element at that index.


	cout <<"The size of your vector is: "<<  v.size() << endl; //v.size() gets size of vector...


	print_vector(v);

	cout << endl << endl << endl;


	//Given a vector, the resize(N) will resize a vector. ex: Given a vector V, V.resize(3) will set the vector to have a new size of 3.
	//Note: if you resize a vector to a smaller size, you will pop the elements off of the end. If you resize to larger, you keep all
	//of the elements.

	vector<int> V;

	int SIZE;
	cout << "Enter size of your vector: ";
	cin >> SIZE;

	V.resize(SIZE);

	for (int i = 0; i < V.size(); i++)
	{
		cout << "Input entry " << i<<": ";
		cin >> V[i];
		cout << endl;
	}

	for (int i = 0; i < V.size(); i++)
	{
		cout <<  V[i] << " ";
		
	}
	cout << endl << endl;

	cout << "Enter size of your vector: ";
	cin >> SIZE;

	V.resize(SIZE);
	cout << endl;

	for (int i = 0; i < V.size(); i++)
	{
		cout << "Input entry " << i <<": ";
		cin >> V[i];
		cout << endl;
	}

	for (int i = 0; i < V.size(); i++)
	{
		cout << V[i] << " ";

	}

	cout << endl;

	//V.pop_back() removes the last element "pops it off"

	V.pop_back();
	cout << V.back() << endl;
	cout << V.size() << endl;

	for (int i = 0; i < V.size(); i++)
	{
		cout << v[i] << endl;
	}

	return 0;
}