/*
	[ description of first learning exercise ] :
		- Build a program that reads the name of a soccer player and his respective
		team into a character vector, as in the example bellow. The player's name and
		the team's name will be separated by a slash and no spaces. Use a for loop to locate
		the position of the character '/' within the array and place a pointer pointing to the
		next character. Show the number of letters in the player's name and, using the pointer,
		show the team name.

		]
			Enter the player/team name: Pele/Santos

			The player's name has 4 letters.

			His team is Santos.
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter the player/team name below ( ex: Pele/Santos )
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: Pele/Santos

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - -] The player's name has '4' letters;

			- - -] His team is 'Santos'.

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
	auto values
		= new char[40];

	auto team_name_ptr
		= new char;
	
	auto player_name_length_ptr
		= new int;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter the player/team name below ( ex: Pele/Santos )" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin.getline(values, 40);

	cout << endl;
	cout << "-" << endl;
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	for (auto i = 0; *(values + i) != '\x00'; i++)
	{
		if (*(values + i) == '\x2f')
		{
			team_name_ptr
				= values + (i + 1);

			*player_name_length_ptr
				= i;

			break;
		}
	}

	cout << "- - -] The player's name has \'" << *player_name_length_ptr << "\' letters;" << endl;

	cout << endl;

	cout << "- - -] His team is \'";

	for (auto i = 0; *(team_name_ptr + i) != '\x00'; i++)
	{
		cout << *(team_name_ptr + i);
	}

	cout << "\'." << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete[] values;
	delete player_name_length_ptr;

	system("pause");
}