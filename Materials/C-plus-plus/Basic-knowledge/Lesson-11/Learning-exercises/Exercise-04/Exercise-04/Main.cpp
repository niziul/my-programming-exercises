/*
	[ description of the fourth learning exercise ] :
		- Ask the user to enter the name of 3 commemorative dates. Concatenate the
		3 strings into a single character array forming a sentence, as shown in the example.
		Define one more string with the word "Christmas" and compare it with what the user typed
		in. If any of the strings entered is "Christmas" display the message "Christmas is also one
		of my most favorite dates!".

		]
			What are your favorite commemorative dates?
			Carnaval; Christmas; New Year;

			Carnaval, Christmas, and New Year are beautiful celebrations. Christmas is
			is also one of my favorite dates!
		]

	[ output ] :
		```
			<> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <>

			Enter your favorite commemorative dates bellow
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: Carnaval
			: Christmas
			: New Year

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			--] 'Carnaval', 'Christmas' and 'New Year' are beautiful celebrations.

			-

			--] 'Christmas' is also one of my favorite dates!

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <>
		```
*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using std::cin;
using std::cout;
using std::strcat;
using std::strcmp;

int main()
{
	auto const nextline
		= '\n';

	char first_commemorative_date[10];
	
	char second_commemorative_date[10];
	
	char third_commemorative_date[10];

	char full_message[60]{};

	cout << "<> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <>" << nextline;

	cout << nextline;

	cout << "Enter your favorite commemorative dates bellow" << nextline;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << nextline;
	cout << ": ";
	cin.getline(first_commemorative_date, 10);
	cout << ": ";
	cin.getline(second_commemorative_date, 10);
	cout << ": ";
	cin.getline(third_commemorative_date, 10);

	cout << nextline;

	cout << "-" << nextline;
	
	cout << nextline;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << nextline;
	
	cout << nextline;
	
	strcat(full_message, "\'");
	strcat(full_message, first_commemorative_date);
	strcat(full_message, "\'");
	strcat(full_message, ", ");
	strcat(full_message, "\'");
	strcat(full_message, second_commemorative_date);
	strcat(full_message, "\'");
	strcat(full_message, " and ");
	strcat(full_message, "\'");
	strcat(full_message, third_commemorative_date);
	strcat(full_message, "\'");
	strcat(full_message, " are beautiful celebrations.");

	cout << "--] " << full_message << nextline;

	if (strcmp(first_commemorative_date , "Christmas")  == 0
		||
		strcmp(second_commemorative_date, "Christmas")  == 0
		||
		strcmp(third_commemorative_date , "Christmas")  == 0)
	{
		cout << nextline;

		cout << "-" << nextline;

		cout << nextline;

		cout << "--] \'Christmas\' is also one of my favorite dates!" << nextline;
	}

	cout << nextline;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << nextline;

	cout << nextline;

	cout << "<> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <>" << nextline;

	system("pause");
}	