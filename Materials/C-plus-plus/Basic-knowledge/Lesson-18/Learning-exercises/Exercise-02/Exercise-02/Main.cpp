/*
	[ description of the second learning exercise ] :
		- Create a program that adds up all the odd numbers from '0' to '100' using
		a 'for loop'. Show how the same problem would be solved using a 'while loop' and
		'do-while loop'.

	[ output ] :
		```v1
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			[ 1 ] = function_for_loop;
			[ 2 ] = function_while_loop;
			[ 3 ] = function_do_while_loop;
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 1

			-

			- '1';
			- '3';
			- '5';
			- '7';
			- '9';
			- '11';
			- '13';
			- '15';
			- '17';
			- '19';
			- '21';
			- '23';
			- '25';
			- '27';
			- '29';
			- '31';
			- '33';
			- '35';
			- '37';
			- '39';
			- '41';
			- '43';
			- '45';
			- '47';
			- '49';
			- '51';
			- '53';
			- '55';
			- '57';
			- '59';
			- '61';
			- '63';
			- '65';
			- '67';
			- '69';
			- '71';
			- '73';
			- '75';
			- '77';
			- '79';
			- '81';
			- '83';
			- '85';
			- '87';
			- '89';
			- '91';
			- '93';
			- '95';
			- '97';
			- '99';


			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void function_for_loop(void);
void function_while_loop(void);
void function_do_while_loop(void);

int main()
{
	auto version
		= new int;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;
	
	cout << "[ 1 ] = function_for_loop;" << endl;
	cout << "[ 2 ] = function_while_loop;" << endl;
	cout << "[ 3 ] = function_do_while_loop;" << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> *version;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	switch (*version)
	{
		case 1:
		{
			function_for_loop();
		}
		break;
		case 2:
		{
			function_while_loop();
		}
		break;
		case 3:
		{
			function_do_while_loop();
		}
		break;
		default:
		{
			cout << "- - ] invalid version!" << endl;
		}
		break;
	}

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
	
	delete version;

	system("pause");
}

void function_for_loop(void)
{
	for (auto i = 1; i < 100; i+=2)
	{
		cout << "- \'" << i << "\';" << "\n";
	}

	cout << endl;
}

void function_while_loop(void)
{
	auto i
		= new int
		{
			1
		};

	while ((*i) < 100)
	{
		cout << "- \'" << *i << "\';" << "\n";

		(*i)
			+= 2;
	}

	cout << endl;

	delete i;
}

void function_do_while_loop(void)
{
	auto i
		= new int
		{
			1
		};

	do
	{
		cout << "- \'" << *i << "\';" << "\n";

		(*i)
			+= 2;
	} while ((*i) < 100);

	cout << endl;

	delete i;
}