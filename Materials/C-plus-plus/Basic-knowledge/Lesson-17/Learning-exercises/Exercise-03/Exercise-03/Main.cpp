/*
	[ description of the third learning exercise ] :
		- Write a function that receives two integers, with the first value
		being the start of the interval and the second being the end of the interval.
		The function should return the sum of the numbers in this range (including the first
		and last). Use the function in the main function, asking the user which numbers will be
		the start and end of the interval.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter two numbers below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			[ start ]: 1
			[ end   ]: 10

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- '1' + '2' = '3';
			- '2' + '3' = '5';
			- '3' + '4' = '7';
			- '4' + '5' = '9';
			- '5' + '6' = '11';
			- '6' + '7' = '13';
			- '7' + '8' = '15';
			- '8' + '9' = '17';
			- '9' + '10' = '19';

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	auto start
		= new int;

	auto end
		= new int;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter two numbers below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "[ start ]: ";
	cin >> *start;

	cout << "[ end   ]: ";
	cin >> *end;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;
	
	for (auto i = *start; i < *end; i++)
	{
		cout << "- \'" << i << "\' + \'" << i + 1 << "\' = \'" << i + (i + 1) << "\';" << endl;
	}

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete start;
	delete end;

	system("pause");
}