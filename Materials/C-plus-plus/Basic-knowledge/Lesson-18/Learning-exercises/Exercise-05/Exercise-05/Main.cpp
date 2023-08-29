/*
	[ description of the fifth learning exercise ] :
		- Create a program that reads the age of people until 0 (zero)
		is entered. Then display how many people are over 18 (eighteen).

		- Challenge: also show the age of the youngest and oldest person in
		the group.

		]
			Enter the ages of the people in the group:

			15 20 14 32 17 0

			In this group, 2 people have already reached the age of adulthood.
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter the ages of the people in the group below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 15
			: 20
			: 14
			: 32
			: 17
			: 0

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- over eighteen : '2';
			- youngest      : '14';
			- oldest        : '32';

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
	auto input
		= new int;

	auto oldest
		= new int{};

	auto youngest
		= new int{};

	auto over_eighteen
		= new int{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter the ages of the people in the group below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	do
	{
		cout << ": ";
		cin >> *input;

		if (*input > 18)
		{
			(*over_eighteen)++;

			if (*input > *oldest)
			{
				*oldest
					= *input;
			}
		}
		else
		{
			if (*youngest == 0)
			{
				*youngest
					= *input;
			}
			else
			{
				if (*youngest > *input && *input != 0)
				{
					*youngest
						= *input;
				}
			}
		}

	} while (*input != 0);

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;
	
	cout << "- over eighteen : \'" << *over_eighteen << "\';" << endl;
	cout << "- youngest      : \'" << *youngest << "\';" << endl;
	cout << "- oldest        : \'" << *oldest << "\';" << endl;

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete input;
	delete oldest;
	delete youngest;
	delete over_eighteen;

	system("pause");
}