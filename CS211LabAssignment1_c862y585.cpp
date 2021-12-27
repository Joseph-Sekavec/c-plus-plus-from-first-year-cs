//Write a C++ program which will ask the user for an input integer and then print the set of all even
//numbers followed by the set of all odd numbers up to the input number.
//This assignment explores a usage of the modulus operator ‘% ’.The modulus or the mod operator
//is a binary operator used as(A % B) and computes the remainder of the corresponding division
//operation(A / B).
//Make sure your output matches the formatting as shown in the test cases below.
//Make sure your code works for any input number, not just the test cases.Your code will be tested
//on other test cases not listed here.Make sure your output matches the formatting as shown in the
//test cases below.
//Please properly comment your code before submission.



#include <iostream>
using namespace std;

int main()
{
	int number,i=1,j=0; //I want an index variable for each loop
	cout << "Input a number." << endl;
	cin >> number; //Input your number.

	cout << "Your even numbers are: ";

	//We check from 1 to whatever number you input to see if it is even, then output the evens. If there are none, we say "None".
	while (i <= number) 
	{
		if (number == 1)
		{
			cout << "None" ;
		}
		else if (i % 2 == 0)
		{
			cout << i << " ";
		}
		i++;
	}

	cout << endl; //End line before we list the odds.
	cout << "Your odd numbers are:  ";

	//Check from 1 to your inputed number to see if the numbers are odd, output the odds.
	while (j <= number)
	{
		if (j % 2 != 0)
		{
			cout << j<<" ";
		}
		j++; //Update value of j.
	}



	return 0;
}