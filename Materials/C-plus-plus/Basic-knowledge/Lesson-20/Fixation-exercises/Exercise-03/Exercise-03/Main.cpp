/*
	[ description of the third fixation exercise ] :
		- Write a program that reads up to 10 donation values and
		stores them in a vector of doubles. The program must close
		the entry when the donated amount is equal to '0'. At the end,
		show the average of the donated amounts and say how many amounts
		are greater than the average.

		]
			Enter up to 10 donation values (enter '0' to close)
			20
			30
			40
			50
			0

			The average amount donated was R$35.00
			2 values were higher than the average.
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter up to 10 donation values below ( '0' = to close )
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			:20
			:30
			:40
			:50
			:0

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			] The average amount donated                   : 'US$35';
			] The amount of values higher than the average : '2';

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>
#include <limits>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
	auto index
		= new int;

	auto input
		= new double;

	auto average
		= new double;

	auto donations
		= new double[10];

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter up to 10 donation values below ( \'0\' = to close )" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	for (*index = 0; *index < 10; (*index)++)
	{
		cout << ":";

		if (cin >> *input; *input != 0)
		{
			*(donations + *index)
				= *input;
		}
		else
		{
			break;
		}
	}

	cout << endl;
	cout << "-" << endl;
	cout << endl;

	auto total_donations
		= new double{};

	for (auto i = 0; i < *index; i++)
	{
		*total_donations
			+= *(donations + i);
	}

	*average
		= *total_donations / *index;

	delete total_donations;

	auto amount_of_values_higher_than_the_average
		= new int{};

	for (auto i = 0; i < *index; i++)
	{
		if (*(donations + i) > *average)
		{
			(*amount_of_values_higher_than_the_average)++;
		}
	}

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	cout << "] The average amount donated                   : \'US$" << *average << "\';" << endl;
	cout << "] The amount of values higher than the average : \'" << *amount_of_values_higher_than_the_average << "\';" << endl;

	delete amount_of_values_higher_than_the_average;

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;
	
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete index;
	delete input;
	delete average;
	delete[] donations;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');

	cin
		.get();
}