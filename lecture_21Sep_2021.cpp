#include <iostream>
#include <vector>
using namespace std;





class Rational
{
	//TODO develop the Rational class
private:
	int _numerator;

	int _denominator;
	// TODO: overload operators for Rational class

public:


	Rational() : _numerator{ 0 }, _denominator{ 1 }{}

	Rational(int num) : _numerator{ num }, _denominator{ 1 }{}

	Rational(int a, int b) : _numerator{ a }, _denominator{ b }
	{
		if (_denominator == 0)
		{
			exit(1);
		}
	}

	friend Rational operator +(Rational a, Rational b)
	{
		return { (a._numerator * b._denominator + b._numerator * a._denominator),  (a._denominator * b._denominator) };
	}

	friend Rational operator -(Rational a, Rational b)
	{
		return { (a._numerator * b._denominator - b._numerator * a._denominator), a._denominator * b._denominator };
	}

	friend Rational operator *(Rational a, Rational b)
	{
		return { a._numerator * b._numerator, a._denominator * b._denominator };
	}

	friend Rational operator /(Rational a, Rational b)
	{
		return { a._numerator * b._denominator, a._denominator * b._numerator };
	}


	friend bool operator < (Rational a, Rational b)
	{
		if ((a._numerator * b._denominator) < (b._numerator * a._denominator))
		{
			return true;
		}
		else
		{
			return false;
		}
	}


	friend bool operator <= (Rational a, Rational b)
	{
		if ((a._numerator * b._denominator) <= (b._numerator * a._denominator))
		{
			return true;
		}
		else
		{
			return false;
		}
	}



	friend ostream& operator <<(ostream& out, Rational a)
	{
		out << a._numerator << "/" << a._denominator;
		return out;
	}


	friend istream& operator >>(istream& in, Rational a)
	{
		in >> a._numerator >> a._denominator;
		return in;
	}


	void print()
	{
		cout << this->_numerator << "/" << this->_denominator << endl;
	}

	void numerator(int n)
	{
		_numerator = n;
	}

	void denom(int d)
	{
		_denominator = d;
	}
};



int main() {
	// TODO: create Rational objects and test all overloaded operatots


	Rational a(1, 2);
	Rational b(2, 1);

	Rational c = a + b;

	//c.print();

	cout << "a + b is: " << a << " + " << b << " = " << c << endl;

	cout << "a / b is: " << (a / b) << endl;

	cout << "a * b is: " << (a * b) << endl;

	cout << "a-b is: " << (a - b) << endl;

	//Rat d(1,0);
	//Rat e(3,0);
	Rational d;
	Rational p;
	Rational y;
	int i, j, k, l;

	cout << "Input a numerator: "; cin >> i; cout << endl;
	d.numerator(i);
	cout << "Input a denominator: "; cin >> j; cout << endl;
	d.denom(j);



	cout << "Input an operation : ";
	char q;

	cin >> q;

	if ((q != '+') && (q != '-') && (q != '*') && (q != '/'))
	{
		cout << "You must enter an operation +,-,*, or /." << endl;
		exit(1);
	}

	cout << "Input a numerator: "; cin >> k; cout << endl;
	p.numerator(k);
	cout << "Input a denominator: "; cin >> l; cout << endl;
	p.denom(l);


	switch (q)
	{
	case '+':
		cout << d + p << endl;
		break;
	case '-':
		cout << d - p << endl;
		break;
	case '*':
		cout << d * p << endl;
		break;
	case '/':
		cout << d / p << endl;
		break;
	default:
		cout << "You have to enter +,-,* or /. ";
		exit(1);
		break;


	}

	return 0;
}













//class Rat
//{
//	//TODO develop the Rational class
//private: 
//	int numerator;
//
//	int denominator;
//	// TODO: overload operators for Rational class
//
//public:
//
//	//Rat();
//	Rat() : numerator{ 0 }, denominator{ 1 }{}
//
//	Rat(int num) : numerator{ num }, denominator{ 1 } {}
//
//	Rat(int a, int b) : numerator{ a }, denominator{ b } 
//	{
//		if (denominator == 0) exit(1);
//	
//	}
//	
//	friend Rat operator +(Rat a, Rat b)
//	{
//		return { (a.numerator * b.denominator + b.numerator * a.denominator),  (a.denominator * b.denominator) };
//	}
//
//	friend Rat operator -(Rat a, Rat b)
//	{
//		return {(a.numerator*b.denominator - b.numerator*a.denominator), a.denominator*b.denominator};
//	}
//
//	friend Rat operator *(Rat a, Rat b)
//	{
//		return {a.numerator*b.numerator, a.denominator*b.denominator};
//	}
//
//	friend Rat operator /(Rat a, Rat b)
//	{
//		return {a.numerator * b.denominator, a.denominator*b.numerator};
//	}
//
//	friend bool operator < (Rat a, Rat b)
//	{
//		if ((a.numerator * b.denominator) < (b.numerator * a.denominator))
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//
//	friend bool operator <= (Rat a, Rat b)
//	{
//		if ((a.numerator * b.denominator) <= (b.numerator * a.denominator))
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//	friend ostream& operator <<(ostream& out, Rat a)
//	{
//		out << a.numerator << "/" << a.denominator;
//		return out;
//	}
//
//	void print()
//	{
//		cout << this->numerator << "/" << this->denominator << endl;
//	}
//};
//
//
//int main()
//{
//	//Rat f(3, 0);
//	Rat a(1, 2);
//	Rat b(2, 1);
//
//	Rat c = a + b;
//
//	//c.print();
//
//	cout << "a + b is: " << a << " + " << b << " = "<<c<<endl;
//
//	cout << "a / b is: " << a / b <<endl;
//
//	cout << "a * b is: " << a * b <<endl;      
//
//	cout << "a-b is: " << a - b << endl;
//
//	cout << (a < b)<<endl;
//
//	cout << (b < a ) << endl;
//
//	cout << (1 < 2) << endl;
//
//	cout << (2 < 1) << endl;
//
//	//Rat e(3, 0);
//
//	return 0;
//}