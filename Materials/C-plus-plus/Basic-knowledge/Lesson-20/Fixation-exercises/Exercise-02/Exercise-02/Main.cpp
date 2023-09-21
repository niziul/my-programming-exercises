/*
	[ description of the second fixation exercise ] :
		- Write a program that asks for three integers 'a', 'b' and 'c'. Tell
		the user that 'a' must be greater than '1'. Your program should pass the
		values to a function that should return the sum of all integers between 'b'
		and 'c' that are divisible by 'a'.

		]
			Enter three integers 'a', 'b' and 'c' ('a' must be greater than '1')
			2 4 10

			The sum is equal to '28'.
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter three integers below (the first value must be greater than '1')
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			[value_a]: 2
			[value_b]: 4
			[value_c]: 10

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			] The sum is equal to '28';
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>
#include <limits>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

void sum_divisible_by_value_a(int*, int*, int*, int*);

int main()
{
	auto value_a
		= new int;

	auto value_b
		= new int;

	auto value_c
		= new int;

	auto sum
		= new int{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter three integers below (the first value must be greater than \'1\')" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "[value_a]: ";
	cin >> *value_a;
	cout << "[value_b]: ";
	cin >> *value_b;
	cout << "[value_c]: ";
	cin >> *value_c;

	cout << endl;
	cout << "-" << endl;
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	if (*value_a > 1)
	{
		sum_divisible_by_value_a(value_a, value_b, value_c, sum);
		
		cout << "] The sum is equal to \'" << *sum << "\';" << endl;
	}
	else
	{
		cout << "] The first value is not greater than \'1\'" << endl;
	}

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete value_a;
	delete value_b;
	delete value_c;
	delete sum;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');

	cin
		.get();
}

void sum_divisible_by_value_a(int* ptr_a, int* ptr_b, int* ptr_c, int* ptr_sum)
{
	for (auto i = *ptr_b; i <= *ptr_c; i++)
	{
		if (i % *ptr_a == 0)
		{
			*ptr_sum
				+= i;
		}
	}
}