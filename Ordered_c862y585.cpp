//Problem 2 of 2: Write a C++ program which will ask the user to input three integer numbers and
//then output which number is the largest, which is the second largestand which is the smallest.
//We will not worry about any ties where two numbers are the same.
//Make sure your code works for any three input numbers, not just the test cases.Your code will
//be tested on other test cases not listed here.
//Please properly comment your code before submission


#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3, largest, middle, smallest; 
	//I use 6 variables (3 for input, 3 for output) because I wanted a distinction between what is inputed, and what is outputed. Also, it 
	//is easier to know what you're manipulating when you copy/paste your code and start changing small things to get what you want. 
	//Plus the conditional statements become a bit more self explanatory.

	cout << "Input three numbers." << endl;
	cin >> num1 >> num2 >> num3;

	if (num1<num2 && num2<num3)
	{
		smallest = num1;
		middle = num2;
		largest = num3;

		cout << "Your largest number is " << largest << endl;
		cout << "Your second largest number is " << middle << endl;
		cout << "Your smallest number is " << smallest << endl;
	}
	else if (num1<num3 && num3<num2)
	{
		smallest = num1;
		middle = num3;
		largest = num2;

		cout << "Your largest number is " << largest << endl;
		cout << "Your second largest number is " << middle << endl;
		cout << "Your smallest number is " << smallest << endl;
	}
	else if (num2<num1 && num1<num3)
	{
		smallest = num2;
		middle = num1;
		largest = num3;

		cout << "Your largest number is " << largest << endl;
		cout << "Your second largest number is " << middle << endl;
		cout << "Your smallest number is " << smallest << endl;
	}
	else if (num2 < num3 && num3 < num1)
	{
		smallest = num2;
		middle = num3;
		largest = num1;

		cout << "Your largest number is " << largest << endl;
		cout << "Your second largest number is " << middle << endl;
		cout << "Your smallest number is " << smallest << endl;
	}
	else if (num3 < num1 && num1 < num2)
	{
		smallest = num3;
		middle = num1;
		largest = num2;

		cout << "Your largest number is " << largest << endl;
		cout << "Your second largest number is " << middle << endl;
		cout << "Your smallest number is " << smallest << endl;
	}
	else if (num3 < num2 && num2 < num1)
	{
		smallest = num3;
		middle = num2;
		largest = num1;

		cout << "Your largest number is " << largest << endl;
		cout << "Your second largest number is " << middle << endl;
		cout << "Your smallest number is " << smallest <<endl;
	}
	//I wanted to make cases of equivalence for practice.
	else if (num1 == num2 && num2 < num3)
	{
		smallest = num1;
		middle = num2;
		largest = num3;

		cout << "Your largest number is " << largest << endl;
		cout << smallest << " and " << middle << " are equal." << endl;
	}
	else if (num1 == num2 && num3 < num2)
	{
		smallest = num3;
		middle = num2;
		largest = num1;

		cout << "Your smallest number is " << smallest << endl;
		cout << largest << " and " << middle << " are equal." << endl;
	}
	else if (num1 == num3 && num3 < num2)
	{
		smallest = num1;
		middle = num3;
		largest = num2;

		cout << "Your largest number is " << largest << endl;
		cout << smallest << " and " << middle << " are equal." << endl;
	}
	else if (num1 == num3 && num2 < num3)
	{
		smallest = num2;
		middle = num3;
		largest = num1;

		cout << "Your smallest number is " << smallest << endl;
		cout << largest << " and " << middle << " are equal." << endl;
	}
	else if (num2 == num3 && num3 < num1)
	{
		smallest = num2;
		middle = num3;
		largest = num1;

		cout << "Your largest number is " << largest << endl;
		cout << smallest << " and " << middle << " are equal." << endl;
	}
	else if (num2 == num3 && num1 < num3)
	{
		smallest = num1;
		middle = num3;
		largest = num2;

		cout << "Your smallest number is " << smallest << endl;
		cout << largest << " and " << middle << " are equal." << endl;
	}
	else //if (num1 == num2 == num3)
	{
	cout << "All of your numbers are equal." << endl;
	}


	return 0;
}