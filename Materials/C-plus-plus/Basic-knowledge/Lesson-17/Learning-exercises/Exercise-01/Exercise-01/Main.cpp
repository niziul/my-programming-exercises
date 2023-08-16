/*
	[ description of the first learning exercise ] :
		- Make a program that receives 10 integer values from the keyboard, creates
		a vector to store the first five and another to store the last five. Create and
		display a third vector of the same size whose elements are the sum of the respective
		elements of the two vectors.

		]
			Enter 10 values: 4 8 2 3 9 1 2 0 4 6

			Vector A: 4 8 2 3 9
			Vector B: 1 2 0 4 6
			Vector C: 5 10 2 7 15
		]


	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter 10 values below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 4 8 2 3 9 1 2 0 4 6

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - ] vector_a: '4 8 2 3 9 ';
			- - ] vector_b: '1 2 0 4 6 ';
			- - ] vector_c: '5 10 2 7 15 ';

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	auto vector_a
		= new int[5];

	auto vector_b
		= new int[5];

	auto vector_c
		= new int[5];

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter 10 values below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	
	for (auto i = 0; i < 5; i++)
	{
		cin >> *(vector_a + i);
	}

	for (auto i = 0; i < 5; i++)
	{
		cin >> *(vector_b + i);
	}

	for (auto i = 0; i < 5; i++)
	{
		*(vector_c + i)
			= *(vector_a + i) + *(vector_b + i);
	}

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "- - ] vector_a: \'";

	for (auto i = 0; i < 5; i++)
	{
		cout << *(vector_a + i) << " ";
	}

	cout << "\';" << endl;

	cout << "- - ] vector_b: \'";

	for (auto i = 0; i < 5; i++)
	{
		cout << *(vector_b + i) << " ";
	}

	cout << "\';" << endl;

	cout << "- - ] vector_c: \'";

	for (auto i = 0; i < 5; i++)
	{
		cout << *(vector_c + i) << " ";
	}

	cout << "\';" << endl;
	
	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete[] vector_a;
	delete[] vector_b;
	delete[] vector_c;

	system("pause");
}