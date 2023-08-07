/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - ] 0! = '1';
			- - ] 1! = '1';
			- - ] 2! = '2';
			- - ] 3! = '6';
			- - ] 4! = '24';
			- - ] 5! = '120';
			- - ] 6! = '720';
			- - ] 7! = '5040';
			- - ] 8! = '40320';
			- - ] 9! = '362880';
			- - ] 10! = '3628800';
			- - ] 11! = '39916800';
			- - ] 12! = '479001600';
			- - ] 13! = '6227020800';
			- - ] 14! = '87178291200';
			- - ] 15! = '1307674368000';

			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;
using std::endl;

const int vector_size = 16;

int main()
{
	auto factorial
		= new long long[vector_size];

	*(factorial + 1)
		= *(factorial + 0) = 1LL;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	for (auto i = 2; i < vector_size; i++)
	{
		*(factorial + i)
			= i * *(factorial + (i - 1));
	}

	for (auto i = 0; i < vector_size; i++)
	{
		cout << "- - ] " << i << "! = \'" << *(factorial + i) << "\';" << endl;
	}

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete[] factorial;

	system("pause");
}