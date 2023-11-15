/*
	[ description of the first learning exercise ] :
		- Construct logical expressions to represent the following
		conditions:

		a: 'ch' is neither 'q' or a 'k';
		b: 'age' is not between '15' and '26';
		c: 'x' is odd and greater than '30';
		d: 'num' is a multiple of '5' or '8';
		e: 'weight' is not less than '50' and height is greater than '160';

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>


			- ] 'function_a':
							 true;


			- ] 'function_b':
							 true;


			- ] 'function_c':
							 true;


			- ] 'function_d':
							 true;


			- ] 'function_e':
							 true;


			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
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

int main()
{
	auto results
		= new int[5]
		{
			function_a(),
			function_b(),
			function_c(),
			function_d(),
			function_e()
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	for (auto i = 0; i < 5; i++)
	{
		cout << endl;

		cout << "- ] \'function_" << (char)(97 + i) << "\':" << endl;

		if (*(results + i))
		{
			cout << "\t\t true;" << endl;
		}
		else
		{
			cout << "\t\t false;" << endl;
		}

		cout << endl;
	}

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
	
	delete[] results;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');
}

bool function_a()
{
	auto ch
		= '\0';

	return ch != 'q' && ch != 'k';
}

bool function_b()
{
	auto age
		= 20;

	return age >= 15 && age <= 26;
}

bool function_c()
{
	auto x
		= 51;

	return x % 2 && x > 30;
}

bool function_d()
{
	auto num
		= 15;

	return num % 5 || num % 8;
}

bool function_e()
{
	auto weight
		= 60;

	auto height
		= 280;

	return weight > 50 && height > 160;
}
