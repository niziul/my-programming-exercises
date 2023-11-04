/*
	[ description of the fifth review exercise ] :
		- Find the smallest positive integer 'n' that satisfies the following
		conditions:

		]
			a : n/3 has a remainder of 2.
			b : n/5 has a remainder of 3.
			c : n/7 has a remainder of 4.
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			] The smallest positive integer 'n' is: '53';

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
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
	auto value_n
		= 1;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	while (true)
	{
		if (value_n % 3 == 2
			&&
			value_n % 5 == 3
			&&
			value_n % 7 == 4)
		{
			break;
		}

		value_n++;
	}

	cout << "] The smallest positive integer 'n' is: \'" << value_n << "\';" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');

	cin
		.get();
}