/*
	[ description of the fourth learning exercise ] :
		- Create a vector of integers declared as B = {32, 16, 47, 10, 82,
		29, 30, 28, 15, 64 }; Use a for loop to display on the screen the pairs
		of numbers in the configuration below. Do not use pointers, work only with
		the index of the array.

		]
			[32,64] [16,15] [47,28] [10,30] [82,29]
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			[32,64] [16,15] [47,28] [10,30] [82,29]

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
			32,
			16,
			47,
			10,
			82,
			29,
			30,
			28,
			15,
			64
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	for (auto i = 0; i < 5; i++)
	{
		cout << "[" << *(vector_a + i) << "," << *(vector_a + (9 - i)) << "] ";
	}

	cout << endl;
	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete[] vector_a;

	system("pause");
}