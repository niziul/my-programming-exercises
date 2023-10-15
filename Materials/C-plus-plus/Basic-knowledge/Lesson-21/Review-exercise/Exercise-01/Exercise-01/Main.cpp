/*
	[ description of the first review exercise ] :
		- Create logical expressions to represent the following constraints:

			a: weight greater than or equal to 115 but less than 125;
			b: 'ch' is 'q' or 'Q';
			c: 'x' is even but not 26;
			d: 'x' is even but not a multiple of 26;
			e: donation is in the range [10-20] or [90-100];
			f: 'ch' is an uppercase or lowercase letter;

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			1

			] 'q' is q;

			1

			1

			1

			] 'a' lowercase.

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

bool function_a();
bool function_b();
bool function_c();
bool function_d();
bool function_e();
bool function_f();

int main()
{
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
	
	cout << endl;
	
	cout << function_a();

	cout << endl;
	cout << endl;
	
	function_b();

	cout << endl;
	
	cout << function_c();

	cout << endl;
	cout << endl;
	
	cout << function_d();
	
	cout << endl;
	cout << endl;

	cout << function_e();

	cout << endl;
	cout << endl;

	function_f();

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
	
	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');

	cin
		.get();
}

bool function_a()
{
	auto weight
		= 120;

	if (weight >= 115
		&&
		weight < 125)
	{
		return true;
	}

	return false;
}

bool function_b()
{
	auto ch
		= 'q';

	if (ch == 'q')
	{
		cout << "] \'" << ch << "\' is q;" << endl;

		return true;
	}

	if (ch == 'Q')
	{
		cout << "] \'" << ch << "\' Q;" << endl;

		return true;
	}

	return false;
}

bool function_c()
{
	auto x
		= 6;

	if ((x % 2) == 0
		&&
		x != 26)
	{
		return true;
	}

	return false;
}

bool function_d()
{
	auto x
		= 4;

	if ((x % 2) == 0
		&&
		(26 % x) != 0)
	{
		return true;
	}

	return false;
}

bool function_e()
{
	auto donation
		= 15;

	if ((
		donation > 10
		&&
		donation < 20
		)
		||
		(
		donation > 90
		&&
		donation < 100
		))
	{
		return true;
	}

	return false;
}

bool function_f()
{
	auto ch
		= 'a';

	if (isupper(ch))
	{
		cout << "] \'" << ch << "\' uppercase." << endl;

		return true;
	}
	
	if (islower(ch))
	{
		cout << "] \'" << ch << "\' lowercase." << endl;

		return true;
	}

	return false;
}
