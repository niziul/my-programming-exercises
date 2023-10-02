/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter the ages of your neighbors. The program ends when you have 6
			entries or enter a negative value.
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			: 23
			: 43
			: 54
			: 2
			: 34
			: 56

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			Enter your age below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 43

			-

			] '2' of your neighbors are older than you.

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
	auto ages
		= new int[6];

	auto input
		= new int;

	auto index
		= new int
		{
			0
		};
	
	auto availability
		= new bool
		{
			true
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter the ages of your neighbors. The program ends when you have 6\n"
			"entries or enter a negative value." << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << ": ";

	while (*availability
		   &&
		   cin >> *input
		   &&
		   *input >= 0)
	{
		*(ages + (*index)++)
			= *input;

		if (*index < 6)
		{
			cout << ": ";
		}
		else
		{
			*availability
				= false;
		}
	}

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;
	
	if (*index == 0)
	{
		cout << "] Without  data, bye!" << endl;
	}
	else
	{
		auto user_age
			= new int;

		cout << "Enter your age below" << endl;
		cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
		cout << ": ";
		cin >> *user_age;

		cout << endl;
		cout << "-" << endl;
		cout << endl;

		auto amount
			= new int{};

		for (auto i = 0; i < *index; ++i)
		{
			if (*(ages + i) > *user_age)
			{
				(*amount)++;
			}
		}

		cout << "] \'" << *amount << "\' of your neighbors are older than you." << endl;
		
		delete user_age;
		delete amount;
	}

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
	
	delete[] ages;
	delete input;
	delete index;
	delete availability;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');

	cin
		.get();
}