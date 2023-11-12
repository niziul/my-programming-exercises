/*
	[ description of the second fixation exercise ]:
		- Suppose income tax is levied according to the following amounts:

			] US$5000  - 0% tax;
			] US$10000 - 10% tax;
			] US$20000 - 15% tax;
			] US$30000 - 20% tax;
		
		For example, someone receiving US$38000 would pay:
			]
				5000 x 0.00 + 10000 x 0.10 + 20000 x 0.15 + 30000 * 0.20 = US$46000.
			]

		Build a program that uses a loop to request income and show the tax due. The
		loop should terminate when the user enters a negative value.

	[ output ]:
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter your income below ( '0' to exit )
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 38000

			-

			] Tax due: US$'4600';



			Enter your income below ( '0' to exit )
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 0

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

const double TAX1 = 0.10;
const double TAX2 = 0.15;
const double TAX3 = 0.20;

const double VALUE1 = 5000;
const double VALUE2 = 15000;
const double VALUE3 = 35000;

int main()
{
	auto tax
		= new double;
	
	auto income
		= new double;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	do
	{
		cout << "Enter your income below ( \'0\' to exit )" << endl;
		cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
		cout << ": ";
		cin >> *income;

		if (*income == 0)
		{
			break;
		}

		cout << endl;
		cout << "-" << endl;
		cout << endl;

		if (*income <= VALUE1)
		{
			*tax = 0;
		}
		else if (*income <= VALUE2)
		{
			*tax = (*income - VALUE1) * TAX1;
		}
		else if (*income <= VALUE3)
		{
			*tax = (VALUE2 - VALUE1) * TAX1 + (*income - VALUE2) * TAX2;
		}
		else
		{
			*tax = (VALUE2 - VALUE1) * TAX1 + (VALUE3 - VALUE2) * TAX2 + (*income - VALUE3) * TAX3;
		}

		cout << "] Tax due: US$\'" << *tax << "\';" << endl;

		cout << endl;
		cout << endl;
		cout << endl;

	} while (*income != 0);

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete tax;
	delete income;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');

	cin
		.get();
}