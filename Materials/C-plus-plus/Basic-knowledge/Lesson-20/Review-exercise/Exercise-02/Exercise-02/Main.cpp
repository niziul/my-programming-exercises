/*
	[ description of the second review exercise ] :
		- In which situations will the variable "a" take on the values
		'1', '4' and '8'? Is there any chance that "a" will have a value
		other than those mentioned, that is, will the value of "a" always be
		modified in the execution of this code?

		]
			if (z <= 10)
				a = 1;
			else
				if (z <= 20)
					a = 4;
				else
					if (z <= 50)
						a = 8;
		]

		R: in this specific code, "a" will never have a value other than 1, 4, or 8,
		as it is determined by the conditions based on the value of "z".

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			] value_a ~ start  ~ :  '1'
			] value_a ~ middle ~ :  '4'
			] value_a ~ end    ~ :  '8'

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

const int START
	= 10;

const int MIDDLE
	= 20;

const int END
	= 50;

int main()
{
	auto value_a
		= new int;

	auto value_z
		= new int;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	for (*value_z = 0; *value_z < 50; (*value_z)++)
	{
		if (*value_z <= START)
		{
			*value_a = 1;
		}
		else
		{
			if (*value_z <= MIDDLE)
			{
				*value_a = 4;
			}
			else
			{
				if (*value_z <= END)
				{
					*value_a = 8;
				}
			}
		}
	}

	cout << "] value_a ~ start  ~ : \t\'1\'" << endl;
	cout << "] value_a ~ middle ~ : \t\'4\'" << endl;
	cout << "] value_a ~ end    ~ : \t\'8\'" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete value_a;
	delete value_z;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');

	cin
		.get();
}