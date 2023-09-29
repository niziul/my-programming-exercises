/*
	[ description of the third learning exercise ] :
		- Using loop and statements, write a program that reads a text input
		up to the character '#'. The program should display the characters read,
		replacing each dot with an exclamation mark and each exclamation mark with
		two exclamation marks. At the end, display the number of substitutions made.

		]
			Type a text ('#' to finish):

			Yesterday I walked in heavy rain! It was 12 o'clock sharp.

			I got dirty and wet. How sad!# I even caught the flu.

			Replacements: 4
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Type a text below ( '#' = to finish )
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			Yesterday I walked in heavy rain! It was 12 o'clock.
			Yesterday I walked in heavy rain!! It was 12 o'clock!
			I got dirty and wet. How sad!# I even caught the flu.
			I got dirty and wet! How sad!!#

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			] Replacements: '4';
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

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
	auto input
		= new char;

	auto replacements
		= new int{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Type a text below ( '#' = to finish )" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	do
	{
		*input
			= cin.get();

		switch (*input)
		{
			case '.':
			{
				cout << "!";

				(*replacements)++;
			}
			break;
			case '!':
			{
				cout << "!!";

				(*replacements)++;
			}
			break;
			default:
			{
				cout << *input;
			}
			break;
		}
	} while (*input != '#');

	cout << endl;

	cout << endl;
	cout << "-" << endl;
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "] Replacements: \'" << *replacements << "\';" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete input;
	delete replacements;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');

	cin
		.get();
}