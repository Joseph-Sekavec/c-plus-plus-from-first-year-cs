#include <iostream>
#include <vector>
#include <string>
//#include <typeinfo>
using namespace std;

// Rule of 3 and Rule of 0. (We consider special functions...
// Rule of 3
// 1. Default Constructor (Default is actually a keyword).
//
// 2. Rule of zero: applies to classes that are NOT managing resources (dynamic memory).
//
// 3. Three special member functions that are provided from compiler.
//
// 4. Rule of three: applies to classes that are managing resources (dynamic memory). The rule of three states that
// if you have the need of implementing ANY of these special members (copy constructor, copy assignment operator, destructor),
// then you need to implement ALL three of them.
//
// 5. Rule of five: rule of three along with two move related functions && is for "move".



//Default contructor
//  - The compiler will give you a default constructor for your class if you don't provide any other constructors.
//  - The default constructor from the compiler does NOT initialize member variables. That is, it does "nothing".
//  - Note we may use initializer to initialize our object {}
//	- If any contructors (default, para, copy, move) is provided by programmer, then the compiler will not give you the default one.
//  - Default constructor can be deleted (= delete;) or defaulted (=default;).

//  Copy 
//	- Copy constuctor is a constructor that copies values (shallow copy) from a given object to create a new object.
//  - If we need deep copy for objects, then we need to build our own copy constructor.
//	- By default, the compiler will give you one that performs shallow copy for our class.


class Sample
{
public:
	int num;
	string name;
	

	// Sample() = delete; // This deletes the default constructor...
	// Sample() = default; // This will allow you to use the default constructor even if you use your own...


	//Sample();
	//Sample(int num, string a) : num{ num }, name{ a }{}
	//Sample(Sample &s)
		//: num{ this->num }, name{ this->name }{}

};

void print(const Sample& s)
{
	cout << "name: " << s.name << endl;
	cout << "num: " << s.num << endl;
}

int main()
{
	Sample s1;  // We automatically call the default constructor whenever we declare an object of a class type.
	            // This is the default contructor from compiler.


	print(s1); 
	Sample s2{}; // Use {} to initialize all members. Initializer will provide default value (if any) for your types.
	
	print(s2);
	
	Sample s3{ 7, "bond" };

	print(s3);

	Sample s4{ s3};

	print(s4);

	s3.num = 8;
	print(s3);
	print(s4);
	
	
	int a;
	

	std::cout << typeid(s1.num).name();

	return 0;
}