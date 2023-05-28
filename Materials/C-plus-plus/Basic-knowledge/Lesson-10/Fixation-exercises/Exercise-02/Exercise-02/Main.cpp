/*
	[ description of the second fixation exercise ] :
		- Write a program that creates a vector named 'vector_a' of five
		  elements, initializing them to the values '10, 20, 30, 40 and 50'.
		  Create a second vector called 'vector_b' initializing only the first two
		  elements to '10 and 20' and the remaining elements to zero. Create a third vector
		  called 'vector_c' initializing only the third element to the value '30' and all other elements to zero.
		  Display the values in each vector to check the values stored.

	[ output ] :
		```
			 - - - - - - - - - - - - - - - - - - - - - - - - - -

			< vector_a > - - - - - - - - - - - - - - - - - - - -

			 [0] - '10'
			 [1] - '20'
			 [2] - '30'
			 [3] - '40'
			 [4] - '50'

			< vector_b > - - - - - - - - - - - - - - - - - - - -

			 [0] - '10'
			 [1] - '20'
			 [2] - '0'
			 [3] - '0'
			 [4] - '0'

			< vector_c > - - - - - - - - - - - - - - - - - - - -

			 [0] - '0'
			 [1] - '0'
			 [2] - '30'
			 [3] - '0'
			 [4] - '0'

			 - - - - - - - - - - - - - - - - - - - - - - - - - -
		```
*/

#include <iostream>
#include <array>

using std::cin;
using std::cout;
using std::array;

int main()
{
	auto nextline
		= '\n';

	auto vector_a
		= array<int, 5>
		{
			10,
			20,
			30,
			40,
			50
		};

	auto vector_b
		= array<int, 5>
		{
			10,
			20,
			0,
			0,
			0
		};

	auto vector_c
		= array<int, 5>
		{
			0,
			0,
			30,
			0,
			0
		};

	cout << " - - - - - - - - - - - - - - - - - - - - - - - - - -" << nextline;

	cout << nextline;
	
	cout << "< vector_a > - - - - - - - - - - - - - - - - - - - -" << nextline;

	cout << nextline;

	for (auto i = 0; i < vector_a.size(); i++)
	{
		cout << " [" << i << "] - \'" << vector_a[i] << "\'" << nextline;
	}

	cout << nextline;

	cout << "< vector_b > - - - - - - - - - - - - - - - - - - - -" << nextline;
	
	cout << nextline;

	for (auto i = 0; i < vector_b.size(); i++)
	{
		cout << " [" << i << "] - \'" << vector_b[i] << "\'" << nextline;
	}

	cout << nextline;
	
	cout << "< vector_c > - - - - - - - - - - - - - - - - - - - -" << nextline;
	
	cout << nextline;
	
	for (auto i = 0; i < vector_c.size(); i++)
	{
		cout << " [" << i << "] - \'" << vector_c[i] << "\'" << nextline;
	}

	cout << nextline;

	cout << " - - - - - - - - - - - - - - - - - - - - - - - - - -" << nextline;

	system("pause");
}