#include <iostream>
using namespace std;



//int least(double arr[], int size)
//{
//
//	int lest;
//	int index = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] < arr[index])
//		{
//			index = i;
//		}
//	}
//	lest = arr[index];
//
//	return lest;
//
//}
//
//
//
//int greatest(double arr[], int size)
//{
//	int great;
//	int index = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] > arr[index])
//		{
//			index = i;
//		}
//	}
//	great = arr[index];
//
//	return great;
//}



//double mean_val(double arr[],double size)
//{
//	double mean;
//	double sum = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		sum = sum + arr[i];
//	}
//	mean = (sum) / (size);
//
//	return mean;
//}


void least_greatest_mean(double arr[], double size, double& mean, double& great, double& least)
{



	//int great;
	int indexl = 0;
	//int lest;
	//double mean;
	double sum = 0;
	int indexg = 0; //Start index at 0
	
	
	
	
	
	if (size <= 0)
	{
		return; //If size is zero or less, stop.
	
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			if (arr[i] < arr[indexl])
			{
				indexl = i; //Change index to i if arr[i] is less than our current arr[index], do nothing otherwise.
			}
		}
		least = arr[indexl]; //Pass this value as a referrence.




		for (int i = 0; i < size; i++)
		{
			if (arr[i] > arr[indexg])
			{
				indexg = i; //Change index to i if arr[i] is greater than our current arr[index], do nothing otherwise.
			}
		}
		great = arr[indexg]; //Pass this value as a reference.



		for (int i = 0; i < size; i++)
		{
			sum = sum + arr[i];
		}
		mean = (sum) / (size);

		//cout << "Your smallest number is: " << lest << endl << endl;


		//cout << "Your greatest number is: " << great << endl << endl;

		//cout << "Your mean is: " << mean << endl << endl;
	}
	
}

int main()
{
	double size;
	double great = 0;
	double least = 0;
	double mean = 0;
	double num[1000]; //We can store as doubles because one of our outputs is a double potentially...

	cout << "Input size of array: ";
	cin >> size;


	//Input your array from 0 to maximum size.
	for (int i = 0; i < size; i++)
	{
		cout << "Input entry " << i<<": ";
		cin >> num[i];
		
	}

	cout << endl;


	

	
	
	least_greatest_mean(num, size, mean, great, least); //Pass mean,great,least as a referrence, pass num array and size to function.

	cout << "Your smallest number is: " << least << endl << endl; //Output the smallest number


	cout << "Your greatest number is: " << great << endl << endl; //Output the greatest number

	cout << "Your mean is: " << mean << endl << endl; //Output your mean


		
	


	
	return 0;


}