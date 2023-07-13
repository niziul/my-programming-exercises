/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter the type of the key you want to register bellow
			- - - - - - - - - - - - - - - - - - - - - - - - - - - -
			-] 1 = 'only numbers';
			-] 2 = 'numbers and letters';
			- - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 1

			-

			Enter you key bellow
			- - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 12508
			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

union registry_key
{
	int  numbers;
	char numbers_and_letters[8];
};

int main()
{
	auto key
		= registry_key{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter the type of the key you want to register bellow" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "-] 1 = 'only numbers';" << endl;
	cout << "-] 2 = 'numbers and letters';" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	
	auto type
		= 0;

	cin >> type;

	cout << endl;

	cout << "-" << endl;

	cout << endl;

	cout << "Enter you key bellow" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";

	switch (type)
	{
		case 1:
		{
			cin >> key.numbers;
		}
		break;
		case 2:
		{
			cin >> key.numbers_and_letters;
		}
		break;
	}

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}