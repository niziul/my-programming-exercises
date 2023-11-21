/*
	[ description of the fifth learning exercise ] :
		- Listing the first 6 prime numbers, we have 2, 3, 5, 7, 11 and 13.
		we can see that the sixth prime number is 13. what is the 10001st prime
		number?

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - ] '104743' - 10001st

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

bool is_prime(int);

int main()
{
	auto rank
		= 0;

	auto prime
		= 0;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	do
	{
		prime++;

		if (is_prime(prime))
		{
			rank++;
		}

	} while (rank < 10001);

	cout << "- - ] \'" << prime << "\' - " << rank << "st" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
	
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