/*
	[ description of the first learning exercise ] :
		- Initialize a vector of 5 integers with any numbers. Show your vector on the screen 
		  and ask the user to choose a position in the vector that he wants to modify and the number
		  he wants to put in that position. Modify the array according to what the user has chosen and display
		  it on the screen.

	[ output ] :
		```
			< - - - - - - - - - - - - - - - - - >

			] Values of the vector_a
			- - - - - - - - - - - - - - - - - - -

			[0] : 10
			[1] : 80
			[2] : 30
			[3] : 45
			[4] : 15

			] Change the position
			- - - - - - - - - - - - - - - - - - -
			: 2

			] New value
			- - - - - - - - - - - - - - - - - - -
			: 90

			] Updated values of the vector_a
			- - - - - - - - - - - - - - - - - - -

			[0] : 10
			[1] : 80
			[2] : 90
			[3] : 45
			[4] : 15

			- - - - - - - - - - - - - - - - - - -

			< - - - - - - - - - - - - - - - - - >
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

	auto user_input
		= 0;

	auto vector_a
		= array<int, 5>
		{
			10,
			80,
			30,
			45,
			15,
		};

	cout << "< - - - - - - - - - - - - - - - - - >" << nextline;

	cout << nextline;

	cout << "] Values of the vector_a" << nextline;

	cout << "- - - - - - - - - - - - - - - - - - -" << nextline;

	cout << nextline;

	for (auto i = 0; i < vector_a.size(); i++)
	{
		cout << "[" << i << "] : " << vector_a[i] << nextline;
	}

	cout << nextline;

	cout << "] Change the position" << nextline;

	cout << "- - - - - - - - - - - - - - - - - - -" << nextline;

	cout << ": ";
	cin >> user_input;

	cout << nextline;

	cout << "] New value" << nextline;

	cout << "- - - - - - - - - - - - - - - - - - -" << nextline;

	cout << ": ";
	cin >> vector_a[user_input];

	cout << nextline;
	
	cout << "] Updated values of the vector_a" << nextline;

	cout << "- - - - - - - - - - - - - - - - - - -" << nextline;

	cout << nextline;

	for (auto i = 0; i < vector_a.size(); i++)
	{
		cout << "[" << i << "] : " << vector_a[i] << nextline;
	}

	cout << nextline;

	cout << "- - - - - - - - - - - - - - - - - - -" << nextline;

	cout << nextline;
	
	cout << "< - - - - - - - - - - - - - - - - - >" << nextline;

	system("pause");
}