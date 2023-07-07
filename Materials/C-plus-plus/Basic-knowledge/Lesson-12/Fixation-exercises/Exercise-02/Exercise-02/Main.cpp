/*
	[ description of the second fixation exercise ] :
		- The 'chocolate' struct contains three members, as described in the previous exercise.
		Write a program to create an array capable of holding three chocolates. Initialize them to
		values of your choice, and then show the contents of each struct.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - <@>

			- - - - - - - - - - - - - - - - - - - - - - - -
			Chocolate bar information
			- - - - - - - - - - - - - - - - - - - - - - - -

			[ chokito ]

			--] weight   : '19g';

			--] calories : '85kcal';

			-

			[ baton ]

			--] weight   : '16g';

			--] calories : '86kcal';

			-

			[ alpino ]

			--] weight   : '12.5g';

			--] calories : '68kcal';

			-

			- - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>
#include <array>

using std::cout;
using std::endl;
using std::array;

struct chocolate
{
	char brand[20];
	float weight;
	int calories;
};

int main()
{
	auto snacks
		= array<chocolate, 3>
		{
			chocolate
			{
				"chokito",
				19,
				85
			},
			chocolate
			{
				"baton",
				16,
				86
			},
			chocolate
			{
				"alpino",
				12.5,
				68
			},
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << "Chocolate bar information" << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	for (auto i = 0; i < snacks.size(); i++)
	{
		cout << "[ " << snacks[i].brand << " ]" << endl;

		cout << endl;

		cout << "--] weight   : \'" << snacks[i].weight << "g\';" << endl;

		cout << endl;

		cout << "--] calories : \'" << snacks[i].calories << "kcal\';" << endl;

		cout << endl;

		cout << "-" << endl;
		
		cout << endl;
	}

	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}