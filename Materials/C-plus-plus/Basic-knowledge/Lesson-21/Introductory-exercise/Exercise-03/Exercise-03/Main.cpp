/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter your age in years below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 18

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			] 'Young';

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

const char * qualify[4]
	=
	{
		"Young",
		"Adult",
		"Old",
		"Baby"
	};

int main()
{
	auto age
		= new int;

	auto index
		= new int;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter your age in years below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> *age;

	cout << endl;
	cout << "-" << endl;
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;
	
	if (*age > 17
		&&
		*age < 35)
	{
		*index
			= 0;
	}
	else if (*age >= 35
			 &&
			 *age < 50)
	{
		*index
			= 1;
	}
	else if (*age >= 50
			 &&
			 *age < 65)
	{
		*index
			= 2;
	}
	else
	{
		*index
			= 3;
	}

	cout << "] \'" << *(qualify + *index) << "\';" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete age;
	delete index;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');

	cin
		.get();
}