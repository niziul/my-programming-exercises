/*
	[ description of the third learning exercise ] :
		- If we list all the natural numbers less than 10 that are
		multiples of '3' or '5', we get '3', '5', '6' and '9'. The sum
		of these multiples is '23'. Find the sum of all the multiples of
		'3' or '5' less than '1000'.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- -] The sum of all multiples of '3' or '5' less than '1000' is: '233168';

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int const MAX_VALUE = 1000;
int const FIRST_VALUE = 3;
int const SECOND_VALUE = 5;

int main()
{
	auto sum
		= 0;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	for (auto i = 1; i < MAX_VALUE; i++)
	{
		if (i % FIRST_VALUE == 0
			||
			i % SECOND_VALUE == 0)
		{
			sum
				+= i;
		}
	}

	cout << "- -] The sum of all multiples of '3' or '5' less than '1000' is: \'" << sum << "\';" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');
}