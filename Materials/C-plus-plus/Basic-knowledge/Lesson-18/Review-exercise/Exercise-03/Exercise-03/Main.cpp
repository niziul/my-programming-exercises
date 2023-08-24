/*
	[ description of the third review exercise ] :
		- Rewrite the program below using the 'for' and 'while loops'.

		]
			int n;

			cout << "Enter a number between 0 - 10 \n";

			do
			{
				cin >> n;
			}
			while (n != 7);

			cout << "Yes, 7 is my favorite number. \n";
		]

	[ output ] :
		```v1
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			[ 1 ] = version_with_for_loop;
			[ 2 ] = version_with_while_loop
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 1

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			version_with_for_loop
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			-

			Enter a number between ( 0 - 10 ) below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 3
			: 4
			: 5
			: 6
			: 7

			- - ] Yes, '7' is my favorite number!

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```

		```v2
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			[ 1 ] = version_with_for_loop;
			[ 2 ] = version_with_while_loop
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 2

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			version_with_while_loop
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			-

			Enter a number between ( 0 - 10 ) below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 3
			: 4
			: 5
			: 6
			: 7

			- - ] Yes, '7' is my favorite number!

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void version_with_for_loop(int*);
void version_with_while_loop(int*);

int main()
{
	auto number
		= new int;
	
	auto version
		= new int;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "[ 1 ] = version_with_for_loop;\n[ 2 ] = version_with_while_loop" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> *version;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	switch (*version)
	{
		case 1:
		{
			cout << "version_with_for_loop" << endl;
		}
		break;
		case 2:
		{
			cout << "version_with_while_loop" << endl;
		}
		break;
		default:
		{
			cout << "invalid version" << endl;

			return EXIT_FAILURE;
		}
		break;
	}
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "Enter a number between ( 0 - 10 ) below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	switch (*version)
	{
		case 1:
		{
			version_with_for_loop(number);
		}
		break;
		case 2:
		{
			version_with_while_loop(number);
		}
		break;
	}

	cout << endl;

	cout << "- - ] Yes, \'" << *number << "\' is my favorite number!" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete number;
	delete version;

	system("pause");
}

void version_with_for_loop(int* number)
{
	*number
		= 0;

	for ( ; *number != 7; )
	{
		cout << ": ";
		cin >> *number;
	}
}

void version_with_while_loop(int* number)
{
	*number
		= 0;

	while (*number != 7)
	{
		cout << ": ";
		cin >> *number;
	}
}
