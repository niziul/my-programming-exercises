/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- '80';
			- '70';
			- '60';
			- '50';
			- '40';

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;
using std::endl;

void inversion(int*, int*);

int main()
{
	auto vector
		= new int[5]
		{
			40,
			50,
			60,
			70,
			80
		};

	auto size
		= new int
		{
			5
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	inversion(vector, size);

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete[] vector;
	delete size;

	system("pause");
}

void inversion(int* vector, int* size)
{
	for (auto i = *size - 1; i >= 0; i--)
	{
		cout << "- \'" << *(vector + i) << "\';" << endl;
	}
}