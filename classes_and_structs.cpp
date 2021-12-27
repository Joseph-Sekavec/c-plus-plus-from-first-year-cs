#include <iostream>
using namespace std;

class block
{

private:
	int arr[10];


public:

	void initialize_block();
	void print_block();
	

};

void block::initialize_block()
{
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;

	}
}

void block::print_block()
{
	for (int i = 0; i < 10; i++)
	{
		cout<< arr[i]<<" ";

	}
}

int main()
{
	block var;
	var.initialize_block();
	var.print_block();

	return 0;
}