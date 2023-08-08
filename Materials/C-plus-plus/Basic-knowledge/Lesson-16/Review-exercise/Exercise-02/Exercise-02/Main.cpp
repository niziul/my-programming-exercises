/*
	[ description of the second review exercise ] :
		- Write a function that displays the contents of a static vector initialized
		to the values below.

		]
			{ 15, 29, 48, 10, 35 }
		]

		a - make a version that only works for the 5 elements in the example.
		b - make a version that works with an number of elements.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -
			- function_a(int*);
			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- '15';
			- '29';
			- '48';
			- '10';
			- '35';

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -
			- function_b(int*, int);
			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- '65';
			- '89';
			- '28';
			- '40';
			- '55';
			- '95';
			- '15';
			- '63';
			- '61';
			- '75';

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;
using std::endl;

void function_a(int*);
void function_b(int*, int);

int main()
{
	auto values_a
		= new int[5]
		{
			15,
			29,
			48,
			10,
			35,
		};

	auto values_b
		= new int[10]
		{
			65,
			89,
			28,
			40,
			55,
			95,
			15,
			63,
			61,
			75
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "- function_a(int*);" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	function_a(values_a);

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "- function_b(int*, int);" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	function_b(values_b, 10);

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;
	
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete[] values_a;
	delete[] values_b;

	system("pause");
}

void function_a(int* vector)
{
	for (auto i = 0; i < 5; i++)
	{
		cout << "- \'" << *(vector + i) << "\';" << endl;
	}
}

void function_b(int* vector, int size)
{
	for (auto i = 0; i < size; i++)
	{
		cout << "- \'" << *(vector + i) << "\';" << endl;
	}
}