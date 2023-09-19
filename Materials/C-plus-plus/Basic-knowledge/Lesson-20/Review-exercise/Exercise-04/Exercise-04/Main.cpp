/*
	[ description of the fourth review exercise ] :
		- Consider the code below. Suppose the input provided
		is: 'Hi! Send $10 or $20 now!@'.

		]
			#include <iostream>

			using namespace std;

			int main()
			{
				char ch;
				int ct1, ct2;
				ct1 = ct2 = 0;

				while ((ch = cin.get()) != '@')
				{
					cout << ch;
					ct1++;
					if (ch = '$')
						ct2++;
				}

				cout << "\nct1 = " << ct1 << ", ct2 = " << ct2 << "\n";

				return 0;
			}
		]

		a - What's the output?
		b - Is there something wrong with this program?
			{
				R: yes, the comparison in the condition has the assignment sing
				instead of the '==' comparison sing.
			}

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Hi!
			Hi!
			Send $10 or $20 now!@
			Send $10 or $20 now!

			-

			] amount of '$'       :         '2';
			] amount of character :         '24';

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
	auto temp
		= new char;

	auto value_a
		= new int;
	
	auto value_b
		= new int;

	*value_a
		= *value_b = 0;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	while ((*temp = cin.get()) != '@')
	{
		cout << *temp;
		
		(*value_a)++;
		
		if (*temp == '$')
		{
			(*value_b)++;
		}
	}

	cout << endl;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "] amount of '$'       : \t\'" << *value_b << "\';" << endl;
	cout << "] amount of character : \t\'" << *value_a << "\';" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete temp;
	delete value_a;
	delete value_b;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');
}