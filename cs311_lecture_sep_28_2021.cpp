#include <iostream>
#include <vector>
#include <string>

using namespace std;

//

class Sample
{
public:
	int num;
	string name;
	int* pnum;


	//Sample();
	Sample() : num{ 0 }, name{ " " }, pnum{ new int[5] }{}
	Sample(int n, string m, int size = 5) : num{ n }, name{ m }, pnum{ new int[size] }{}


	// Copy Constructor to allow deep copy for resources:
	// Copy constructor is called when we have one object, and want to build another from that object.
	Sample(const Sample & s)
		: num{ s.num }, name{ s.name }, pnum{ new int[5] } // pnum now recieves its own copy of dynamic memory.
	{
		// deep copy: from s to new object:
		for (int i = 0; i < 5; ++i)
		{
			this->pnum[i] = s.pnum[i]; // copy value from pnum[i] to our new pnum[i].
		}
	}

	// We need a copy assignment operator. This will be called when making an assignment from one object to another.
	// We need two objects in order to call this operator, and must overload this operator as a member function, not friend.
	// By default from compiler: we will have a copy assignment operator that performs shallow copy. When class has dynamic
	// memory, we need to develop our own copy assignment operator to perform deep copy. 

	// Copy assignment operator:
	Sample& operator = (const Sample& that) // That is not a keyword like this.
	{
		// To prevent self-assign
		if (this != &that)
		{
			// Allocate new space for values.
			int* temp = new int[5]; //Create a new array to store values on right side of equal sign.


			// Deep copy: (Deep copy means to allocate a new space, then copy values over ie pass by value).
			for (int i = 0; i < 5; ++i)
			{
				temp[i] = that.pnum[i]; // Fill this array with values on RHS
			}
			// Recycle old space:
			delete[] this->pnum; // Delete this.array in heap. (will delete "temp" each time it is called).

			// Assign new space to pointer.
			this->pnum = temp; // Set dynamic array equal to temp.
		}

		return *this; // return dereferrenced this.
	}


	~Sample()
	{
		// To recycle a dynamic array: 
		delete[] pnum;

		cout << "dtor is called. " << endl;
	}
				// Destructors are called automatically when we go out of scope/end of lifespan of objects. 
				// By default (without destructor), the compiler will give us a destructor that does nothing. 
				// Usually resources that are allocated to the object should be sestroyed or recycled inside destructor.
				// (polymorphism) make base classs destructor virtual.

};

void print(Sample& n)
{
	cout <<"Name: "<< n.name << endl <<"Num: " << n.num << " " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << n.pnum[i] << " ";
	}
}


int main()
{
	Sample s1;
	//print(s1);

	Sample s2 = s1;

	Sample s3{ 7, "007" };
	s3.pnum[0] = 100;
	s3.pnum[1] = 200;
	s3.pnum[2] = 300;
	s3.pnum[3] = 400;
	s3.pnum[4] = 500;
	print(s3);


	Sample s4(s3); // Error when destructor is called because we try to essentially recylce to same dynamic array twice.
		   			  // For dynamic resources, we need deep copy, not shallow copy.


	print(s4);

	//print(s3);

//	int* pa = new int[10];
//	delete[] pa;
//	delete[] pa;  // Look: You see that we cannot delete the same dynamic array twice.



//	Demo for memory leak:
	//while (true)
	//{
	//	int* pa = new int[10];  // This will leak memory crazy fast. If we change the solution platform from x86 to 64, we will crash
	//							// our laptop... (It's by "Debug" beside undo/redo).
	//}




	return 0;
}



//Example of RULE OF THREE



//class Car //A very simple class just to demonstrate what these definitions mean.
////It's pseudocode C++/Javaish, I assume strings do not need to be allocated.
//{
//	private String sPrintColor;
//	private String sModel;
//	private String sMake;
//
//	public changePaint(String newColor)
//	{
//		this.sPrintColor = newColor;
//	}
//
//	public Car(String model, String make, String color) //Constructor
//	{
//		this.sPrintColor = color;
//		this.sModel = model;
//		this.sMake = make;
//	}
//
//	public ~Car() //Destructor
//	{
//		//Because we did not create any custom types, we aren't adding more code.
//		//Anytime your object goes out of scope / program collects garbage / etc. this guy gets called + all other related destructors.
//		//Since we did not use anything but strings, we have nothing additional to handle.
//		//The assumption is being made that the 3 strings will be handled by string's destructor and that it is being called automatically--if this were not the case you would need to do it here.
//	}
//
//	public Car(const Car& other) // Copy Constructor
//	{
//		this.sPrintColor = other.sPrintColor;
//		this.sModel = other.sModel;
//		this.sMake = other.sMake;
//	}
//	public Car& operator =(const Car& other) // Assignment Operator
//	{
//		if (this != &other)
//		{
//			this.sPrintColor = other.sPrintColor;
//			this.sModel = other.sModel;
//			this.sMake = other.sMake;
//		}
//		return *this;
//	}

//}