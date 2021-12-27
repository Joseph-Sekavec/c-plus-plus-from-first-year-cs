#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;



//1. [3 points] Write a C++ function (along with helper functions) that prints out all the prime numbers in a given array of integers. 
//Your code should follow the exact function declaration given below:
//void printPrimes(int array[], int arr_size);


//void printPrimes(int array[], int arr_size)
//{
//	int flag = 0;
//
//
//
//	for (int i = 0; i < arr_size; i++)
//	{
//		for (int j = 2;j <array[i];j++)
//		{
//			if ((array[i] % j == 0) || array[i] == 2)
//			{
//				flag = 1;
//			//	cout <<"Flag is: " << flag << endl<<endl;
//			}
//		}
//
//
//
//		if (flag == 0 && array[i] >=2)
//		{
//			cout <<"Prime number: "<< array[i] << " "<<endl;
//		}
//		//cout << "Flag is: " << flag << endl;
//		flag = 0;
//		//cout << "Flag is: " << flag << endl;
//
//	
//	}
//
//
//
//}
//
//
//int main()
//{
//	const int arr_size = 13;
//	int array[arr_size];
//
//	
//	
//	
//	/*int size;
//	cout<< "Enter size of your array: ";
//	cin>>size;
//	int arr = new int[size];
//	for (int i = 0; i<size;i++)
//	{
//		cin >> arr[i];
//
//	}
//
//	*/
//
//
//	for (int i = 0; i < arr_size; i++)
//	{
//		cout << "Input a number: ";
//		cin >> array[i];
//
//	}
//
//	cout << endl << endl;
//
//
//
//
//	printPrimes(array,arr_size);
//
//
//
//	return 0;
//}


















///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





//2.[3 points] Write a C++ function (along with helper functions) that can add two integer matrices. 
//Your function should perform element-wise addition for all the array numbers.
//Element-wise addition basically adds individual elements to create the final values,
//where result[x][y] := arr1[x][y] + arr2[x][y].Your code
//should follow the exact function declaration given below:
//void addMatrices(int** matrix1, int matrix1_nrows, int matrix1_ncols, int** matrix2, int matrix2_nrows, int matrix2_ncols, int** dest_matrix);


void addMatrices(int** matrix1, int matrix1_nrows, int matrix1_ncols, int** matrix2, int
	matrix2_nrows, int matrix2_ncols, int** dest_matrix)
{
	if (matrix1_ncols < matrix2_ncols)
	{
		matrix1_ncols = matrix1_ncols;
	}
	else
	{
		matrix1_ncols = matrix2_ncols;
	}
	if (matrix1_ncols < matrix2_ncols)
	{
		matrix1_ncols = matrix1_ncols;
	}
	else
	{
		matrix1_nrows = matrix2_nrows;
	}
	int column_number = 0;
	int row_number = 0;
	for (int i = 0; i < matrix1_nrows; i++)
	{
		for (int j = 0; j < matrix1_ncols; j++)
		{
			dest_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
			column_number++;
			cout << "Column position is: " << column_number << endl << endl;
		}
		row_number++;
	}
	column_number = column_number / row_number;
	cout << "column number is: " << column_number << endl;
	for (int i = 0; i < matrix1_nrows; i++)
	{
		for (int j = 0; j < matrix1_ncols; j++)
		{
			cout << dest_matrix[i][j] << " ";
			if ((j + 1) % column_number == 0)
				
			{
			cout << endl;
			}
		}
	}
}
int main()
{
	int matrix_rows;
	int matrix_columns;
	int matrix_rows1;
	int matrix_columns1;
	int matrix_rows2;
	int matrix_columns2;
	cout << "Enter the number of rows for your matrix 1: ";
	cin >> matrix_rows1;
	cout << endl;
	cout << "Enter the number of rows for your matrix 1: ";
	cin >> matrix_columns1;
	cout << endl;
	int** matrix1 = new int* [matrix_columns1];
	//Make new column arrays for matrix1...
	for (int i = 0; i < matrix_columns1; i++)
	{
		matrix1[i] = new int[matrix_columns1];
	}
	for (int k = 0; k < matrix_rows1; k++)
	{
		for (int l = 0; l < matrix_columns1; l++)
		{
			cout << "Enter matrix entry: " << k << ", " << l << ": ";
			cin >> matrix1[k][l];
		}
	}
	cout << endl;
	for (int k = 0; k < matrix_rows1; k++)
	{
		for (int l = 0; l < matrix_columns1; l++)
		{
			cout << matrix1[k][l] << " ";
			if ((l + 1) % matrix_columns1 == 0)
			{
				
					cout << endl;
			}
		}
	}
	///Make matrix2...
	///
	///
	///
	///
	///
	cout << "Enter the number of rows for your matrix 2: ";
	cin >> matrix_rows2;
	cout << endl;
	cout << "Enter the number of columns for your matrix 2: ";
	cin >> matrix_columns2;
	cout << endl;
	int** matrix2 = new int* [matrix_columns2];
	for (int i = 0; i < matrix_columns2; i++)
	{
		matrix2[i] = new int[matrix_columns2];
	}
	for (int k = 0; k < matrix_rows2; k++)
	{
		for (int l = 0; l < matrix_columns2; l++)
		{
			cout << "Enter matrix entry: " << k << ", " << l << ": ";
			cin >> matrix2[k][l];
		}
	}
	cout << endl;
	for (int k = 0; k < matrix_rows2; k++)
	{
		for (int l = 0; l < matrix_columns2; l++)
		{
			cout << matrix2[k][l] << " ";
			if ((l + 1) % matrix_columns2 == 0)
			{
				cout << endl;
			}
		}
	}

		//Make destination matrix...
		if (matrix_rows1 < matrix_rows2)
		{
			matrix_rows = matrix_rows1;
		}
		else
		{
			matrix_rows = matrix_rows2;
		}
	if (matrix_columns1 < matrix_columns2)
	{
		matrix_columns = matrix_columns1;
	}
	else
	{
		matrix_columns = matrix_columns2;
	}
	int** dest_matrix = new int* [matrix_columns];
	for (int i = 0; i < matrix_columns; i++)
	{
		dest_matrix[i] = new int[matrix_columns];
	}
	addMatrices(matrix1, matrix_rows, matrix_columns, matrix2, matrix_rows, matrix_columns,
		dest_matrix);
	return 0;
}









//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




//3. [3 points] Write a C++ function using recursion that returns the Greatest Common Divisor of two integers. 
//The greatest common divisor (gcd) of two integers, which are not zero, is the largest positive integer 
//that divides each of the integers. For example, the gcd of 8 and 12 is 4. Your code should follow the 
//exact function declaration given below:
//int GCD(int number1, int number2); Input: int number1, int number2: 
//Input numbers Output: Returns the greatest common divisor of the input numbers Example:
//number1 = 21, number2 = 14 Returns = 7 


//int recursiveGCD(int number1, int number2, int i,int ret_num,int max_it)
//{
//	
//	if ((number1 % i == 0) && (number2 % i == 0))
//	{
//		ret_num = i;
//	}
//	if (i == max_it)
//	{
//		return ret_num;
//	}
//	i++;
//	recursiveGCD(number1, number2,i,ret_num,max_it);
//
//
//}
//
//int main()
//{
//	int number1;
//	int number2;
//	int max_it;
//	
//
//	cout << "Input a number: ";
//	cin >> number1;
//
//	cout << endl << "Input another number: ";
//	cin >> number2;
//	cout << endl;
//
//	if (number1 <= number2)
//	{
//		max_it = number1;
//	}
//	else
//	{
//		max_it = number2;
//	}
//
//
//	int gcd = recursiveGCD(number1, number2,1,1,max_it);
//
//	cout << "Your GCD is: " << gcd<<endl;
//
//	return 0;
//}













//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////






//4. [3 points] Write a C++ function 
//(along with helper functions) that returns the maximum number in a list of integers stored in the file – “numbers.txt”. 
//Your code should follow the exact function declaration given below:
//int maxFileNum(istream& inputFile);


//int maxFileNum(istream& ifs)
//{
//	int great;
//	int num;
//
//	ifs >> num;
//	great = num;
//
//	while (!(ifs.eof()))
//	{
//		ifs >> num;
//		if (num > great)
//		{
//			great = num;
//		}
//	}
//
//	return great;
//
//
//}
//
//int main()
//{
//	int num;
//	ifstream ifs;
//	ofstream ofs;
//
//	ifs.open("numbers.txt");
//	ofs.open("numbers1.txt");
//
//	if (ifs.is_open())
//	{
//		cout << "Open" << endl;
//	}
//
//
//	
//
//	int max = maxFileNum(ifs);
//
//	cout <<"The greatest number in your file is: "<< max<<endl;
//
//	ifs.close();
//	ofs.close();
//
//
//	if (!(ifs.is_open()))
//	{
//		cout << "Closed" << endl;
//	}
//
//
//	return 0;
//}
















//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




//5. [3 points] Write a C++ function (along with helper functions) that deletes all occurrences of a word from a given string. 
//Your code should follow the exact function declaration given below:                             
//void deleteWords(char* inputString, char* word, char* destString);  

//I think the best way is concatonation... 
//Send substring to function then if !(strcmp(substrng, word)==0) concatonate, else don't concatonate do this by passing a starting and 
//ending index from original array... I think See hw2 in CS211 folder if I get lost.




//void deleteWords(char* inputString, char* word, char* destString)
//{
//	int left_idx = 0;
//	int right_idx = 0;
//	int end_idx = strlen(inputString);
//	char temp[1000];
//	int word_end = strlen(word);
//	int size_of_temp = 0;
//	
//
//	//cout << right_idx;
//
//	//cout << "Word size to omit is: " << word_end << endl;
//
//
//
//
//	//cout << endl;
//	int j = 0;
//	int k = 0;
//	int a = 0;
//	//cout << "Right idx is: " << right_idx << endl;
//
//
//	while (right_idx != end_idx+1)
//	{
//		//cout << "left_idx before if is: " << left_idx<<endl;
//
//		if (inputString[right_idx] == ' ' || inputString[right_idx] == NULL)
//		{
//			
//			for (int i = left_idx; i <= right_idx; i++)
//			{
//				temp[j] = inputString[left_idx];
//				//cout <<"j is: " << j << endl;
//			//	cout << temp[j] << endl;
//				j++;
//				//cout << "Updated j is: " << j<<endl;
//				left_idx++;
////				cout << "Left idx is: " << left_idx << endl;
//			}
//			//cout << "left index is: " << left_idx << endl;
//			temp[j] = NULL;
//			//temp[j - 1] = NULL;
//			j = 0;
//			//cout << "j is: " << j<<endl;
//			
//
//			//cout << "temp is: " << temp << endl;
//			//size_of_temp = right_idx;
//			//cout << "size of temp is: " << size_of_temp << endl;
//			
//			if (!(strncmp(temp, word,strlen(temp)-1) == 0)) //We do strlen(temp) -1 because we want to exclude the space...
//			{
//				//cout << " temp is: " << word;
//		
//				//cout << "temp is not " << word<<endl;
//				for (int i = 0; i < strlen(temp) + a; i++)
//				{
//				//	cout << "k is: " << k << endl;
//					destString[k] = temp[i];
//
//					k++;
//				}
//				
//				//destString[k] = NULL;
//				//cout << " a is the size of our dest array and is: " << a<<endl<<endl;
//			}
//			
//			//destString[k-1] = ' ';
//			destString[k] = NULL;
//			destString[k+1] = NULL;
//			//cout <<"Dest String is: " << destString<<endl;
//			
//
//		}
//		right_idx++;
//	
//		//cout << "left idx after if: " << right_idx << endl;
//	}
//
//	
//
//
//}



//int main()
//{
//	int size;
//
//	
//	cout << "Input size of your array: ";
//	cin >> size;
//	cout << endl;
//
//	char* inputString = new char[size];
//	char* destString = new char[size];
//	char* word = new char[size];  //This is the word we do NOT want to copy into our new array.
//
//	cin.ignore();
//	cin.clear();
//
//	cout << "Give an input string: ";
//	
//	cin.getline(inputString, size);
//
//	cout << endl<<"Input a word to exclude from your string: ";
//
//	cin >> word;
//
//	//This was a really hacky way to do it...
//	//int a = strlen(word);
//	//word[a] = ' '; //We need to add a space because the strcmp will read up to the space as temp will be word' ' that is, whatever our word is
//	               //along with a space. So if we don't add it, we have a problem.
//	//word[a + 1] = NULL;
//
//	//cout << word << "a" << endl;
//
//	
//
//
//	deleteWords(inputString, word, destString);
//
//	
//
//	cout << "Your new string is: " << destString << endl;
//
//	delete[] inputString;
//	delete[] word;
//	delete[] destString;
//
//	return 0;
//}



