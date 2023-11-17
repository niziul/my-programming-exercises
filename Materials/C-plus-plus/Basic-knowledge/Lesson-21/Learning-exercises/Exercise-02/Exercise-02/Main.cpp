/*
	[ description of the second learning exercise ] :
		- Create a program that receives an integer greater than zero
		and determines whether it is a prime number.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Please enter a valid integer below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 11

			-

			- - ] '11' is a prime number.

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

bool is_prime(int number);

int main()
{
	auto input
		= new int;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Please enter a valid integer below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> *input;

	cout << endl;
	cout << "-" << endl;
	cout << endl;

	if (is_prime(*input))
	{
		cout << "- - ] \'" << *input << "\' is a prime number." << endl;
	}
	else
	{
		cout << "- - ] \'" << *input << "\' is not a prime number." << endl;
	}

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
	
	delete input;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');
}

bool is_prime(int number)
{
	if (number <= 1)
	{
		return false;
	}

	auto sqrt_number
		= sqrt(number);

	for (auto i = 2; i <= sqrt_number; ++i)
	{
		if (number % i == 0)
		{
			return false;
		}
	}

	return true;
}
