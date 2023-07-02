/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - <@>

			--] Hires for next year: 'Bebeto' and 'Romario'!

			-

			--] Purchase price: U$50000'.

			<@> - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;
using std::endl;
using std::system;

struct soccer_player
{
	char name[40];
	unsigned wage;
	unsigned goals;
};

int main()
{
	auto team
		= new soccer_player[22]
		{
			soccer_player
			{
				"Bebeto",
				20'000,
				182
			},
			
			soccer_player
			{
				"Romario",
				30'000,
				178
			}
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "--] Hires for next year: \'" << team[0].name << "\' and \'" << team[1].name << "\'!" << endl;

	cout << endl;

	cout << "-" << endl;

	cout << endl;

	cout << "--] Purchase price: U$" << team[0].wage + team[1].wage << "\'." << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << endl;
	
	system("pause");
}