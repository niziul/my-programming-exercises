/*
	[ description of the second fixation exercise ] :
		- Write a program that uses a 'while' or 'do-while' loop to read
		integers until the number zero is read. Once the input is complete,
		the program should display the number of numbers read (excluding zero),
		the sum and the average of the numbers.

		]
			Enter a number below ( 0 = to exit )
			10 4 5 2 0

			4 numbers were read out.
			
			The sum of the numbers is 21!
			The average is 5.25!
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter a number below ( 0 = to exit )
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 10
			: 4
			: 5
			: 2
			: 0

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			[ amount of numbers read ]: '4';

			[ sum                    ]: '21';
			[ average                ]: '5.25';

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
	auto sum
		= new int
		{
			0
		};
	
	auto number
		= new int
		{
			0
		};

	auto average
		= new float
		{
			0
		};

	auto amount_of_numbers_read
		= new int
		{
			0
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter a number below ( 0 = to exit )" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	do
	{
		cout << ": ";
		cin >> *number;

		*sum
			+= *number;

		(*amount_of_numbers_read)++;

	} while (*number != 0);

	(*amount_of_numbers_read)--;

	*average
		= (float)(*sum) / *amount_of_numbers_read;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;
	
	cout << "[ amount of numbers read ]: \'" << *amount_of_numbers_read << "\';" << endl;
	
	cout << endl;
	
	cout << "[ sum                    ]: \'" << *sum << "\';" << endl;
	cout << "[ average                ]: \'" << *average << "\';" << endl;

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete sum;
	delete number;
	delete average;
	delete amount_of_numbers_read;

	system("pause");
}