/*
	[ description of the first learning exercise ] :
		- Considering the goal struct defined below, create a program that reads and
		stores in a vector the data of the last three goals you watched.

		]
			union soccer_player
			{
				char     name[25];
				unsigned number;
			};

			struct gol
			{
				soccer_player player;
				unsigned      hour;
				unsigned      minute;
			};
		]


	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - <@>

			Enter the data of the last 3 goals below
			- - - - - - - - - - - - - - - - - - - - - - - -
			Gol: Bebeto 7 14:30

			-

			Gol: Zico 9 45:00

			-

			Gol: Pele 10 05:45

			-


			- - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>
#include <array>

using std::cin;
using std::cout;
using std::endl;
using std::array;

union soccer_player
{
	char     name[25];
	unsigned number;
};

struct gol
{
	soccer_player player;
	unsigned      hour;
	unsigned      minute;
};

int main()
{
	auto recent_goals_scored
		= array<gol, 3>{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter the data of the last 3 goals below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	for (auto i = 0; i < recent_goals_scored.size(); i++)
	{
		cout << "Gol: ";

		cin >> recent_goals_scored[i].player.name;
		cin >> recent_goals_scored[i].player.number;
		cin >> recent_goals_scored[i].hour;
		char temp;
		cin >> temp;
		cin >> recent_goals_scored[i].minute;

		cout << endl;

		cout << "-" << endl;

		cout << endl;
	}
	
	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}