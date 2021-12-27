#include <iostream>
using namespace std;

int str_len(char arr[])
{
	int length = 0;
	while (arr[length] != NULL) //If we still have characters that aren't NULL characters, add one to our length.
	{
		length++;
	}
	return length;
}


void removeExtraWhiteSpaces(char src[], char dest[], int src_max_size = 1000)
{
	int i = 0,j=0;
	int left_index = 0;
	int right_index = 0;
	
	int size = str_len(src);
	for (int i = 0; i < src_max_size; i++)
	{
		dest[i] = ' '; //Initialize everything to blank spaces so as to not get garbage values.
	}




	while(i< size)
	{
		if (!((src[i] == ' '  && src[i-1] == ' ')||(i==0 && src[i] == ' ')) ) //If we run into consecutive spaces, don't print.
		{
			
			dest[j] = src[i]; //Copy ONLY array elements that are characters, and up to one space after. Also, never print a space before
			                  //the first word.
			j++; //Update our index
		
		}
	

		i++;
		
	}
	
	dest[size] = '\0'; //Make a null character after our string.
	

}

void main()
{ 
	
char src[1000]; 


char dest[1000]; 


cout << "Input a string: " << endl; 

cin.getline(src, 1000); //We want to input a string with weird spacing.

cout << endl;



removeExtraWhiteSpaces(src, dest, 1000); //Call the function to remove the extra spaces...

int size = str_len(src); //I have no desire to print all of the crazy characters that aren't inputed, ergo, I want a size limit.

//cout << "Result string: ";
//for (int i = 0; i < size; i++)
//{
//		cout << dest[i]; 
//}
//cout << endl;

cout << dest << endl; //Since we have a null character at the end, we can actually print our string.


}


//int main()
//{
//
//
//
//
//
//	return 0;
//}

