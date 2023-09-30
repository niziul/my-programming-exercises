/*
	[ description of the fourth learning exercise ] :
		- Write a program that asks the user to enter two values. The program
		should calculate and display the sum of all integers between, but excluding,
		the two values. There is no restriction on the numbers entered, which means that
		the program must handle all cases: the first value greater than the second, the first
		value less than the second and the case where the values are equal.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter two integers below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 2
			: 5

			-


			] sum   : '7';

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
	auto value_a
		= new int;

	auto value_b
		= new int;

	auto sum
		= new int{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter two integers below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> *value_a;
	cout << ": ";
	cin >> *value_b;

	cout << endl;
	cout << "-" << endl;
	cout << endl;

	cout << endl;

	if (*value_a != *value_b)
	{
		if (*value_a < *value_b)
		{
			for (auto i = *value_a + 1; i < *value_b; i++)
			{
				*sum
					+= i;
			}

			cout << "] sum \t: \'" << *sum << "\';" << endl;
		}
		else
		{
			cout << "] incorrect parameters;" << endl;
		}
	}
	else
	{
		cout << "] incorrect parameters;" << endl;
	}

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
	
	delete value_a;
	delete value_b;
	delete sum;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');

	cin
		.get();
}