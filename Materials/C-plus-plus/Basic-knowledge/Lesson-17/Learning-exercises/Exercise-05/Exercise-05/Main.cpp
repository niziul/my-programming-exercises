/*
	[ description of the fifth learning exercise ] :
		- So the difference between the sum of the squares of the first '10'
		natural numbers and the square of the sum is '3025 - 385 - 2640'. Find
		the difference between the sum of the squares of the first '100' natural numbers
		and the square of the sum of the first '100' natural numbers. Use the 'for loop' to
		solve the problem.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - ] '338350.0' - '25502500.0' = '25164150.0';

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::pow;

int main()
{
	auto value_a
		= new double
		{
			0
		};

	auto value_b
		= new double
		{
			0
		};

	auto value_c
		= new double;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;
	
	for (auto i = 1; i <= 100; ++i)
	{
		*value_a
			+= pow(i, 2);
	}

	for (auto i = 1; i <= 100; ++i)
	{
		*value_b
			+= i;
	}

	*value_b
		= pow(*value_b, 2);

	*value_c
		= -(*value_a - *value_b);

	cout
		.setf(std::ios_base::fixed);

	cout
		.precision(1);

	cout << "- - ] \'" << *value_a << "\' - \'" << *value_b << "\' = \'" << *value_c << "\';" << endl;
	
	cout
		.unsetf(std::ios_base::fixed);

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete value_a;
	delete value_b;
	delete value_c;

	system("pause");
}