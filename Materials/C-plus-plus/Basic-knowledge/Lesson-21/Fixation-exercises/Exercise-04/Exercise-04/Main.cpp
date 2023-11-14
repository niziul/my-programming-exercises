/*
	[ description of the fourth fixation exercise ] :
		- Create a program that simulates the operation of a ATM. Ask
		the user for the amount to be withdrawn (integer value) and the
		program should tell you how many banknote of each value will be
		delivered. Consider that the ATM has US$50, US$20, US$10 and US$5
		bills.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			ATM
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 235

			-

			--] '4' bill(s) of 'US$50';
			--] '1' bill(s) of 'US$20';
			--] '1' bill(s) of 'US$10';
			--] '1' bill(s) of 'US$5';

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
	auto amount
		= new int{};

	auto bills
		= new int[4]{};
	
	auto banknote
		= new int[4]
		{
			50,
			20,
			10,
			5,
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "ATM" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> *amount;

	cout << endl;
	cout << "-" << endl;
	cout << endl;
	
	auto index
		= 0;

	do
	{
		if (*amount % *(banknote + 3) != 0)
		{
			break;
		}

		if (*amount >= *(banknote + index))
		{
			(*(bills + index))++;

			*amount
				-= *(banknote + index);
		}
		else
		{
			index++;
		}

	} while (*amount != 0);

	if (*amount % *(banknote + 3) == 0)
	{
		cout << "--] \'" << *(bills + 0) << "\' bill(s) of \'US$" << *(banknote + 0) << "\';" << endl;
		cout << "--] \'" << *(bills + 1) << "\' bill(s) of \'US$" << *(banknote + 1) << "\';" << endl;
		cout << "--] \'" << *(bills + 2) << "\' bill(s) of \'US$" << *(banknote + 2) << "\';" << endl;
		cout << "--] \'" << *(bills + 3) << "\' bill(s) of \'US$" << *(banknote + 3) << "\';" << endl;
	}
	else
	{
		cout << "invalid amount." << endl;
	}

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
	
	delete amount;
	delete[] bills;
	delete[] banknote;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');

	cin
		.get();
}