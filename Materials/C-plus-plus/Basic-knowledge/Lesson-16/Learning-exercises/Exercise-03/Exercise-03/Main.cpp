/*
	[ description of the third learning exercise ] :
		- Create a vector of integers declared as ' A = { 46, 78, 40, 96, 74,
		58, 32, 56, 91, 6}; Use two pointers conjunction with a for loop to display
		the pairs of numbers on the screen:

		]
			[46, 78] [40,96] [74,58] [32,56] [91,6]
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			[46,78] [40,96] [74,58] [32,56] [91,6]

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	auto vector_a
		= new int[10]
		{
			46,
			78,
			40,
			96,
			74,
			58,
			32,
			56,
			91,
			6
		};

	auto ptr_a
		= vector_a + 0;

	auto ptr_b
		= vector_a + 1;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	for (auto i = 0; i < 10; i++)
	{
		cout << "[" << *(ptr_a + i) << "," << *(ptr_b + i) << "] ";

		i++;
	}

	cout << endl;
	cout << endl;

	ptr_a
		= nullptr;

	ptr_b
		= nullptr;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete ptr_a;
	delete ptr_b;
	delete[] vector_a;

	system("pause");
}