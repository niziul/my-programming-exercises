/*
	[ description of the third learning exercise ] :
		- Ask the user to write his or her full name and the current
		date, storing both information in different character arrays. Create
		and array of characters to store the concatenation of the name with "was
		here in" plus the date provided. Show the result by displaying the contents
		of this array.

	[ output ] :
		```
			<> - - - - - - - - - - - - - - - - - - - - - - - - <>

			Enter your full name bellow ( ex: Joao Filho)
			- - - - - - - - - - - - - - - - - - - - - - - - - - -
			: João Filho

			Enter the current date bellow ( ex: 07/08/2017 )
			- - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 07/08/2017

			- - - - - - - - - - - - - - - - - - - - - - - - - - -

			--] 'Joao Filho' was here in '07/08/2017'.

			- - - - - - - - - - - - - - - - - - - - - - - - - - -

			<> - - - - - - - - - - - - - - - - - - - - - - - - <>
		```
*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using std::cin;
using std::cout;

using std::strcat;

int main()
{
	auto const nextline
		= '\n';

	char full_user_name[11]{};

	char current_date[11]{};

	char message[40]{};

	cout << "<> - - - - - - - - - - - - - - - - - - - - - - - - <>" << nextline;

	cout << nextline;

	cout << "Enter your full name bellow ( ex: Joao Filho)" << nextline;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - -" << nextline;
	cout << ": ";
	cin
		.getline(full_user_name, 11);
	
	cout << nextline;

	cout << "Enter the current date bellow ( ex: 07/08/2017 )" << nextline;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - -" << nextline;
	cout << ": ";
	cin
		.getline(current_date, 11);

	cout << nextline;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - -" << nextline;
	
	cout << nextline;
	
	strcat(message, "\'");
	strcat(message, full_user_name);
	strcat(message, "\'");
	strcat(message, " was here in ");
	strcat(message, "\'");
	strcat(message, current_date);
	strcat(message, "\'");
	strcat(message, ".");

	cout << "--] " << message << nextline;

	cout << nextline;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - -" << nextline;

	cout << nextline;
	
	cout << "<> - - - - - - - - - - - - - - - - - - - - - - - - <>" << nextline;

	system("pause");
}