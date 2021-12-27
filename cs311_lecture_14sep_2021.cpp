#include <iostream>
#include <vector>
using namespace std;

// This lecture covers operator overloading...
//We are going to look at complex numbers.

class Complex  
{
private:
	double _real;
	double _imag;
public:
	//Default constructor
	Complex();
	//parameter constructors
	Complex(double real);
	Complex(double real, double imag);

	void print() const; 

	Complex add(const Complex& c);  //Complex is just the return type.
	Complex sub(const Complex& c);
	Complex mul(const Complex& c);
	Complex div(const Complex& c);


	// friend functions         must be declared inside of a class. Keyword is friend.

	friend Complex operator + (const Complex& c1, const Complex& c2);
	// Friend functions have access to everything (including private members).
	// Friend functions are NOT member functions.
	// Use friend functions to overload most operators.
	// Operator overloading rquires as least one custom type inside the (). //Custom types are classes.

	friend ostream& operator << (ostream& o, const Complex& c);

	friend Complex operator -(const Complex& c1, const Complex& c2)
	{
		return { c1._real - c2._real, c1._imag - c2._imag };
	}




	//(a + bi)(c + di) = ac + adi + cbi - bd
	// (a+ bi) / (c + di) = (ac + adi + cbi - bd)/(c^2 + d^2)


	friend Complex operator *(const Complex &c1, const Complex &c2)
	{
		return
		{
			c1._real * c2._real - c1._imag * c2._imag,
			c1._real*c2._imag + c2._real*c1._imag

		};
	}

	friend Complex operator / (const Complex& c1, const Complex& c2);

};

//(a + bi)(a - bi) = a^2 +b^2


// (a+ bi) / (c + di) = (ac - adi + cbi + bd)/(c^2 + d^2)
Complex operator /(const Complex& c1, const Complex& c2)
{
	double denom = c2._real * c2._real + c2._imag * c2._imag;

	return
	{
		

		(c1._real * c2._real + c1._imag * c2._imag) / denom,
		(c1._real * c2._imag - c1._imag * c2._real) / denom

	};
}


Complex Complex::div(const Complex& c)
{
	return
	{
		this->_real*c._real/(c._real*c._real + c._imag*c._imag) - this->_imag*c._imag/(c._real * c._real + c._imag * c._imag),
		this->_real*c._imag/(c._real * c._real + c._imag * c._imag) + this->_imag*c._real/ (c._real * c._real + c._imag * c._imag)

	};
}

Complex Complex::mul(const Complex& c)
{
	return
	{
		this->_real * c._real - this->_imag * c._imag,
		this->_real*c._imag + this->_real * c._imag
	};
}

	Complex Complex::sub(const Complex& c)
	{
		return
		{
			this->_real - c._real,
			this->_imag - c._imag
		};
		
	}

Complex::Complex()
	: _real{ 0.0 }, _imag{ 0.0 } {}

Complex::Complex(double real)
	: _real{ real }, _imag{ 0.0 } {}

Complex::Complex(double real, double imag)
	: _real{ real }, _imag{ imag } {}

Complex Complex::add(const Complex& c)
{
	return Complex{
		this->_real + c._real,  //"this" means object before the thing we passed to function points to the current object.
								// That is, "this" is our current object, and we are pointing to its member inside the class.
								// A better way is to say "c points to this member object".
		this->_imag + c._imag
	};
}



// Implement our friend functions... Can only use friend keyword inside of a class...

Complex operator + (const Complex& c1, const Complex& c2)
{
	return Complex{ c1._real + c2._real, c1._imag + c2._imag };
}

ostream& operator << (ostream& out, const Complex& c)
{
	out << c._real << " + " << c._imag << "i";

	return out;
}


void Complex::print() const
{
	cout << _real << " + " << _imag << "i";
	cout << endl;
}


int main()
{

	Complex c1{ 20, -4 };
	Complex c2{ 3, 2 };
	Complex c3{2, 4};
	Complex c4{1, 3};

	cout << c1 - c2<<endl;
	cout << c1 * c2<<endl;

	cout << c1.div(c2)<<endl;

	cout << c1 / c2 << endl;

	double a, b, c, d;

	cout << "Input the real part of your first number: ";
	cin >> a;
	cout << endl << "Input the imaginary part of your first number: ";
	cin >> b;

	cout << "Input the real part of your second number: ";
	cin >> c;
	cout << endl << "Input the imaginary part of your second number: ";
	cin >> d;

	cout << endl;

	Complex c5(a, b);
	Complex c6(c, d);

	cout << "Addition: " << c5 + c6 << endl;
	cout << "Subtraction: " << c5 - c6<<endl;
	cout << "Multiplication: " << c5 * c6 << endl;
	cout << "Division: " << c5 / c6 << endl;

	//Complex c1;

	//Complex c2(1.0);
	//
	//Complex c3(1.5, 2.5);

	//vector<Complex> vc{ c1, c2, c3 };

	//for (auto &c : vc)
	//	c.print();

	////Complex c4 = c2 + c3;

	//Complex c4 = c2.add(c3);
	//c4.print();

	//Complex result = c1.add(c2).add(c3).add(c4);
	//cout << c1 + c2 + c3 + c4<< endl;

	//Complex result2 = c4.add(c3.add(c2.add(c1)));
	//cout << result << endl;


	return 0;
}