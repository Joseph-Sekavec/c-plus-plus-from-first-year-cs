#include <iostream>
#include "Person.h"  // Always include header files if you want to utilize anything from their .h or .cpp files.
#include "Student.h"
#include <vector>
#include <fstream>
//#include "Person.cpp" // DO NOT INCLUDE A CPP FILE INSIDE OF A CPP FILE!!!!
using namespace std;

// learncpp.com read chapter 16...
// We talk about the difference between object composition and class inheritance.

void func1(const Person p) // This will NOT have a polymorphism.
{
	p.print();
}

void func2(const Person& p)  // This function will have polymorphism
{
	p.print();
}


int main()
{
	Person p1;
	Person p2{ "jane", "smith", "jan 1, 2000" };

	Student s1;
	Student s2{ "Sora" ,"", "jan 1, 1970", "Fall 2015", 120 };

	// POLYMORPHISM

	// Polymorphism since we are using pointers here.
	std::vector<Person*> v2; // We must use pointers to delay binding to trigger polymorphism.
	v2.push_back(&p2);
	v2.push_back(&s2);
	for (auto i : v2)
	{
		i->print();
	}


	// No polymorphism as no pointers or referrences are used.
	//std::vector<Person> v1;
	//v1.push_back(p2);
	//v1.push_back(s2); // Remember: A student is a person, ergo we can instantiate a student as a person.
	//for (auto i : v1)
	//{
	//	i.print();
	//}

	//cout << "++++++++++++++" << endl;

	//func1(s2);

	cout << "+++++++++++++++++" << endl;

	func2(s2);
	

	//s2.print();






	return 0;
}









//p1.print();
//p2.print();



//ofstream ofs;

//ofs.open("file.txt");
//ofs << "Hello world!" << endl;
//ofs.close();



// s1.print();  // This is a public member, so our subclass needs Student : public Person to inherit up to public class members.
				// print is inherited from the parent class.

//p2 = s2; // We can do this because technically a student is a person, but we cannot assign s2 = p2...

// Student s3{ p2, "Fall 2016", 11 }; // Ergo we cannot use a person object to assign values to a student object as
									  // the student object is a subclass of a person object.

//s2.print();

//cout << endl;
//s2.college_life();

//cout << endl << endl;

//s2.Person::print(); // Notice we can call our print that we inherited.

//func(p1);

// Note that s2 is a person object as student inherits from the person class.
//func(s2);

// virtual functions will call the version of the overrided function relevant to the object type. ie, if the object is a 
// child or grandchild class object, if a print() function is overrided in them, then the virtual keyword will ensure that
// the function defined in this subclass will be called. It is best to use the virtual keyword in the "lowest" inheritance.

//vector<int> v{ 1, 3, 2, 4,5 };

//swap(v[1], v[2]);

//for (int i = 0; i < v.size(); i++)
//{
//	cout << v[i] << " ";
//}
