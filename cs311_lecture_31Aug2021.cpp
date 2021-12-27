#include <iostream>
#include <vector>
#include <cstring>
#include <cassert>


using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::boolalpha;


// Classes are definitions. Objects are members of a class. Instance is a variable of class type. instantiate is the object version of declaring
// a variable.


// C++ objects: iostream, string.

//Functions associated with string classes... boolalpha, s.length (where s is a string), s.push_back('s');.

// cout is an object from ostream, cin is an object from istream class.
// :12:24 means error is on line 12, column 24.

class Pitcher
{
public:
	double era;

};


class Car
{

private:
	string _make;
	string _model;
	int _year;
	//size_t _year //size_t is an unsigned int...
	int _odometer;
	//make, model, year, odometer are encapsulated in the class type car.

public:
	// constructors
	//	Car() : _make{ "Lexus" }, _model{ "GS F" }, _year{ 2018 }, _odometer{ 500 } {}
	//Recall that all constructors MUST have the same name as their class.

	Car() : _make{ "Lexus" }, _model{ "GS F" }, _year{ 2018 }, _odometer{ 500 } //We use underscore for private member variables in a class.
	{
		cout<< "Default ctor called"<<endl;
	}//: means to start initialization list. And we use curly braces to actually assign values. We use this notation to initialize our private members.
	//We follow our initialized variables by empty {} which is the body for this function. Basically : means begin initializing var_name{} means 
	//initialize this var, {} means function body, which needs to follow because it allows us to have a function body after initilization of our objects.

	//This is the same as
	/*Car()
	{
	_make{ "Lexus" }, _model{ "GS F" }, _year{ 2018 }, _odometer{ 500 }
	};*/

	//Parametrized contructor

	Car(string make, string model, int year, int odometer)
		:_make{ make }, _model{ model }, _year{ year }, _odometer{ odometer } {}


	// getters and setters

	// Here are some getters that "get" values
	std::string get_make() const { return _make; }
	std::string get_model() const { return _model; }
	int get_year() const { return _year; }
	int get_odometer() const { return _odometer; }
	 

	// Setters set values to things.
	void set_make(string make) /*const Do not use const for setters*/ { _make = make; }
	void set_model(string model) { _model = model; } // We allow user to change make/model but not year.

	//const is a keyword you can write after your func_name(), but before {} to denote that everything inside shall be constant.
	void print() const {
		cout << "make: " << _make << endl;
		cout << "model: " << _model << endl;
		cout << "year: " << _year << endl;
		cout << "odometer: " << _odometer << endl;
		//Not ok to change member variables in const
		//_model = "name";


		//It is ok to make changes to local temp variables.
		int a = 0;
		a++;

	}



};

//class Name1;
Car my_fav()
{
	//Car result("Ford", "fiesta", 2018, 200);
	
	//return result;
	//return Car("ram", "1500", 2020, 100000);

	return { "ram", "1500", 2020, 100000 }; // We can use curly braces to initialize instead of making function calls.
}

void print_car(const Car& c)
{
	using std::cout;
	using std::endl;

	cout << "from pc: make: " << c.get_make() << endl;
	cout << "from pc: model: " << c.get_model() << endl;
	cout << "from pc: year: " << c.get_year() << endl;
	cout << "from pc: odometer: " << c.get_odometer() << endl;
}


int main()
{
	Car c1;

	//c1.make = "lexus * 2"; doesn't work as we tried to access a public function.

	c1.set_make("lexus * 2");

	c1.print();

	cout << endl << endl;

	Car c3( "Ford", "Focus", 2019, 2000 ); // We can still use curly braces to initialize when calling the constructor. 

	print_car(c3);

	cout << my_fav().get_make() << endl;

	return 0;
}





//int main()
//{
//	Car c1; //DO NOT write Car c1().
//
//	// int a(); makes a function, ergo c1() creates a function of object type car... Thus, don't fuck up and do that.
//
//	Car* pc = new Car();
//
//	c1.print();
//
//	cout << endl;
//
//	Car c2("Tesla", "Model Y", 2020, 5);
//	c2.print();
//	
//	Car c3{ "Ford", "Focus", 2019, 2000 }; // We can still use curly braces to initialize when calling the constructor. 
//	// Parentheses are better though when calling functions as {} are considered initializers.
//
//	cout << endl;
//
//	// Trick point of vector
//
//	vector<int> v1(100, 0); cout <<"Size of v1: " << v1.size()<<endl; //Notice this gives us a vector of 100 zeros. v1.size() = 100
//	vector<int> v2{ 100, 0 }; cout <<"Size of v2: " << v2.size() << endl; //This initializes the values 100 and 0 to our vector. v2.size() = 2
//
//	for (auto i : v1)
//	{
//		cout << i << "+";
//	}
//	cout << endl<<endl;
//
//
//	for (auto i : v2)
//	{
//		cout << i << "_";
//	}
//	cout << endl<<endl;
//
//	//assert(5, == 0);
//	cout << boolalpha << (5 == 0);
//
//
//	return 0;
//}



//int main()
//{
//	string s = "I am a string.";
//
//	Pitcher* pp = new Pitcher();
//	pp->era = 2.93; // -> means point to.
//	(*pp).era = 2.94; //Does the same thing, but make sure you use parentheses correctly.
//
//	cout << boolalpha << s.empty()<<endl; //Bool alpha returns true or false based upon whether s.function() is true or false.
//
//	int arr[1];
//	cout << "arr is a: " << typeid(arr).name() << endl; //typeid(arr).name gives us an i. 
//
//	
//
//
//
//	return 0;
//}