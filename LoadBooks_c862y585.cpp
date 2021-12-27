#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct book
{
	char title[1000];
	char author[1000];
	//int year;
	char year[100];
};



int main()
{
	//book_list1
	//book_list2
	int i = 0;
	char file_name[100];

	cout << "Enter filename: ";
	cin.getline(file_name,100);

	strcat_s(file_name, ".txt");

	cout << file_name<<endl<<endl;

	int size;

	ifstream ifs;
	ifs.open(file_name);
	ifs >> size;

	cout << "Books found: " << size << endl << endl;

	if (ifs.is_open())
	{
		cout << "Open"<<endl<<endl << endl;

	}
	else
	{
		cout << "Closed" << endl;
	}

	//book books;
	book* books = new book[size];

	ifs.getline(books[0].title, 100); // We need this so that we point to the next line...

	for (int j = 0; j < size; j++)
	{
		
		cout << "Book " << j+1 << ": "<<endl;
		ifs.getline(books[i].title,100);
		cout << "title: " << books[i].title<<endl<<endl;
		ifs.getline(books[i].author, 100);
		cout << "Author: " << books[i].author << endl << endl;
		ifs.getline(books[i].year,100);
		cout << "Year: " << books[i].year << endl << endl;
		//ifs.getline(books[0].title, 100); //This is necessary for getline to read the years...
	}



	ifs.close();

	if (ifs.is_open())
	{
		cout << "Open" << endl;

	}
	else
	{
		cout << "Closed" << endl;
	}

	delete[] books;

	return 0;
}