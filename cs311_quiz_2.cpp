#include <iostream>

using namespace std;


class TwoDigits
{
private:
	unsigned int _ones;
	unsigned int _tens;
	bool _overFlow;
	unsigned int _tens_carry;
	unsigned int _ones_carry;
public:
	TwoDigits() : _ones{ 0 }, _tens{ 0 }, _overFlow{ false }, _tens_carry{ 0 }, _ones_carry{ 0 }{}
	

	TwoDigits(unsigned int tens, unsigned int ones);
	TwoDigits(unsigned int tens, unsigned int ones, bool overflow) : _ones{ ones  }, _tens{ tens  }, _overFlow{overflow}
	{
		
		if (((_tens / 10) == 0) && ((_ones / 10) == 0))
		{
			_overFlow = false;
		}


		if ((_ones / 10) != 0 )
		{
			this->_overFlow = true;
			//cout << "ones/10 is: " << _ones / 10 << endl;
			//cout << "ones - 10*(ones/10) is: " << _ones - 10 * (_ones / 10) << endl;

			_ones_carry = _ones / 10;
			//cout << "Ones carry is: " << _ones_carry << endl;
			//cout << "Overflow is TRUE! " << _overFlow<< endl;
			//cout << "tens was: " << _tens;
			//_tens = _tens + _ones_carry;
			//cout << " tens is now: " << _tens << endl;


			_ones = ones - 10 * (_ones / 10);

			//cout << "Ones carry is: " << _ones_carry << endl;
			//cout << "Oness is finally " << _ones<<endl;

		}
		else
		{
			this->_ones_carry = 0;
		}

		if ((_tens / 10) != 0)
		{
			this->_overFlow = true;
			//	cout << "Overflow is TRUE! " << _overFlow<< endl;
			//	cout<< "tens/10 is: " << _tens / 10 << ", ones/10 is: " << _ones / 10<<endl;
				//cout << "tens - 10*(tens/10) is: " << _tens - 10 * (_tens / 10) << endl;
			_tens_carry = _tens / 10;

			_tens = _tens - 10 * (_tens / 10);

			//cout << "Tens carry is: " << _tens_carry << endl;
			//cout << "Tens is finally " << _tens;
		}
		else
		{
			_tens_carry = 0;
		}

	}

	bool get_overflow()
	{
		//cout << "OVERFLOW BOOL: " << this->_overFlow << endl << endl;
		return this->_overFlow;

	}

	friend TwoDigits operator +(TwoDigits x, TwoDigits y);

	friend ostream& operator<<(ostream& out, TwoDigits x);

	string print_overflow()
	{
		if (get_overflow())
	{
		return " Overflow: Y";
	}
	else
	{
		return " Overflow: N";
	}

	}
	

};

TwoDigits operator +(TwoDigits x, TwoDigits y)
{
	TwoDigits n;

	if ((x._ones + y._ones) / 10 != 0 )
	{
		n._ones_carry = (x._ones + y._ones) / 10;
	}

	//y._ones_carry = ((x._ones + y._ones) / 10);
	//cout << "y's carry is: " << y._ones_carry<<endl<<endl;

	if ((x._tens + y._tens + (x._ones_carry + y._ones_carry)) / 10 != 0 || x._tens > 9 || y._tens > 9)
	{
		n._overFlow = true;
	}

	unsigned int tens(x._tens + y._tens + (x._ones_carry + y._ones_carry + n._ones_carry));
	unsigned int ones(x._ones + y._ones);

	return{tens ,ones , n._overFlow};
}

ostream& operator<<(ostream& out, TwoDigits x) 
{
	cout << x._tens << x._ones << x.print_overflow();
	return out;
}

TwoDigits::TwoDigits(unsigned int tens, unsigned int ones) : _tens{ tens }, _ones{ ones } // I put the setter in the default constructor.
{

	if (((_tens / 10) == 0) && ((_ones / 10) == 0))
	{
		_overFlow = false;
	}


	if ((_ones / 10) != 0)
	{
		this->_overFlow = true;
		//cout << "ones/10 is: " << _ones / 10 << endl;
		//cout << "ones - 10*(ones/10) is: " << _ones - 10 * (_ones / 10) << endl;

		_ones_carry = _ones / 10;
		//cout << "Ones carry is: " << _ones_carry << endl;
		//cout << "Overflow is TRUE! " << _overFlow<< endl;
		//cout << "tens was: " << _tens;
		//_tens = _tens + _ones_carry;
		//cout << " tens is now: " << _tens << endl;


		_ones = ones - 10 * (_ones / 10);

		//cout << "Ones carry is: " << _ones_carry << endl;
		//cout << "Oness is finally " << _ones<<endl;

	}
	else
	{
		this->_ones_carry = 0;
	}

	if ((_tens / 10) != 0)
	{
		this->_overFlow = true;
		//	cout << "Overflow is TRUE! " << _overFlow<< endl;
		//	cout<< "tens/10 is: " << _tens / 10 << ", ones/10 is: " << _ones / 10<<endl;
			//cout << "tens - 10*(tens/10) is: " << _tens - 10 * (_tens / 10) << endl;
		_tens_carry = _tens / 10;

		_tens = _tens - 10 * (_tens / 10);

		//cout << "Tens carry is: " << _tens_carry << endl;
		//cout << "Tens is finally " << _tens;
	}
	else
	{
		_tens_carry = 0;
	}

}



int main()
{
	unsigned int a, b, c, d;
	cout << "Input tens: "; cin >> a; cout << "Input ones: "; cin >> b;
	cout << "Input tens: "; cin >> c; cout << "Input ones: "; cin >> d;
	TwoDigits x{ a, b };
	TwoDigits y{ c, d};

	/*TwoDigits x{ 9, 9 };
	TwoDigits y{ 9, 9 };*/



	cout << x << endl;




	cout<< "x+y is: " << x + y << endl;


	return 0;
}