/*
	[ description of the second fixation exercise ] :
		- Write a program that asks for and displays user information,
		as shown:

		]
			Enter your first and middle name bellow
			: João Maria

			Which concept (GPA) do you deserve?
			: A

			Good Morning, João Maria. But
			your concept is 'B'.
		]

		Note that the program must be able to accept names consisting
		of more than one word. Also note that the program sets the concept
		downwards.

	[ output ] :
		```
			<> - - - - - - - - - - - - - - - - <>

			Enter your first and middle name below
			- - - - - - - - - - - - - - - - - - -
			: João Maria

			-


			Which concept (GPA) do you deserve?
			- - - - - - - - - - - - - - - - - - -
			: A

			--] Good Morning, 'Joao Maria'. But
			your concept is 'B'.

			<> - - - - - - - - - - - - - - - - <>
		```
*/

#include <iostream>

using std::cin;
using std::cout;

int main()
{
	auto const nextline
		= '\n';

	auto const character_limit_of_the_user_first_name
		= 10;

	auto const character_limit_of_the_user_middle_name
		= 10;

	char concept_gpa;

	char user_first_name[character_limit_of_the_user_first_name];

	char user_middle_name[character_limit_of_the_user_middle_name];

	cout << "<> - - - - - - - - - - - - - - - - <>" << nextline;

	cout << nextline;

	cout << "Enter your first and middle name below" << nextline;
	cout << "- - - - - - - - - - - - - - - - - - -" << nextline;
	cout << ": ";
	cin >> user_first_name;
	cin.get();
	cin >> user_middle_name;
	
	cout << nextline;
	
	cout << "-" << nextline;

	cout << nextline;

	cout << nextline;

	cout << "Which concept (GPA) do you deserve?" << nextline;
	cout << "- - - - - - - - - - - - - - - - - - -" << nextline;
	cout << ": ";
	cin >> concept_gpa;

	concept_gpa
		+= 1;

	cout << nextline;
	
	cout << "--] Good Morning, \'" << user_first_name << " " << user_middle_name << "\'. But\nyour concept is \'" << concept_gpa << "\'." << nextline;

	cout << nextline;

	cout << "<> - - - - - - - - - - - - - - - - <>" << nextline;

	system("pause");
}