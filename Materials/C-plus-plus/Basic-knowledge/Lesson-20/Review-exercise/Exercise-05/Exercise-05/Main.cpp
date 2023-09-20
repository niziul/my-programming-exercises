/*
	[ description of the fifth review exercise ] :
		- The c++17 standard introduced a new type of 'if' that accepts and
		initialization statement before the condition:

		]
			#include <iostream>

			using namespace std;

			int main()
			{
				int x = 0;

				cout << "Enter a number: ";

				if (cin >> x; x > 0)
					cout << "Positive number!" << endl;
				else
					cout << "Negative number!" << endl;

			}
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter a number below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 9

			-

			] positive number!

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
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
	auto value_a
		= new int;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter a number below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";

	if (cin >> *value_a; *value_a > 0)
	{
		cout << endl;
		cout << "-" << endl;
		cout << endl;

		cout << "] positive number!" << endl;
	}
	else
	{
		cout << endl;
		cout << "-" << endl;
		cout << endl;

		cout << "] negative number!" << endl;
	}

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete value_a;

	cin
		.get();

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');
}