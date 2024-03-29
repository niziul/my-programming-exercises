/*
	[ description of the fourth learning exercise ] :
		- Each new term in the fibonacci sequence is generated by an
		addition between the last two terms. Starting with the numbers
		1 and 2, the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34,
		55 and 89. Considering all the terms of the fibonacci sequence are
		less than four million, find the sum of the even numbers.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- -] Sum of even Fibonacci numbers less than four million: 4613732

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
	auto value_1
		= 1;

	auto value_2
		= 2;

	auto next
		= 0;

	auto sum
		= 2;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	while (next < 4E6)
	{
		next
			= value_1 + value_2;

		if (next % 2 == 0)
		{
			sum += next;
		}

		value_1
			= value_2;
		
		value_2
			= next;
	}

	cout << "- -] Sum of even Fibonacci numbers less than four million: " << sum << endl;


	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
	
	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');
}