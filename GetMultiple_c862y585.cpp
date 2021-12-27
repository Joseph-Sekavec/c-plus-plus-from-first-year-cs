//Problem 1 of 2: Write a C++ program, without using any conditional statements, which will
//ask the user to input an integer number(say N) and ask for a multiple(say M).Your code should
//then output the next integer from N which is a multiple of M.
//Make sure your code works for all possible cases, not just the test cases.Your code will be tested
//on other test cases not listed here.
//Please properly comment your code before submission.


#include <iostream>
using namespace std;



int main()
{
	int num1, num2,multiple;

	cout << "Input a natural number " << endl;
	cin >> num1; //Your multiple must be greater than or equal to this.
	cout << "Input a natural number less than or equal to the first, that you want the next multiple of. " << endl;
	cin >> num2; //Input the number that you want a multiple of.

	multiple = num1; //Initialize this value to be your first number to avoid 0 or num2. That is, we want to go from num1 to the next multiple of num2.
	//Therefore, letting our initial value be less than num1 would give us zero before we can even get to num1...

	while (multiple % num2 != 0)  //We don't need to care about anything other than whether or not multiple is divisible by num2.
	{
		multiple = multiple + 1; //Update the value of multiple until you get an actual multiple of num2.
	}

	cout << multiple; //Display the number that is a multiple of num2, and greater than or equal to num1.
	

	return 0;
}