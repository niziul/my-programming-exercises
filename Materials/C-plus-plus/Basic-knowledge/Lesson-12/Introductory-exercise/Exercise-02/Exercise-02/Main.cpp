/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			--] Hires for next year: 'Bebeto' and 'Romario'!

			-

			--] Purchase price: U$50000'.

			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;

struct soccer_player
{
	char name[40];
	unsigned wage;
	unsigned goals;
};

int main()
{
	auto const nextline
		= '\n';

	auto player_01
		= soccer_player
		{
			"Bebeto",
			20000,
			600
		};

	auto player_02
		= soccer_player
		{
			"Romario",
			30000,
			800
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << nextline;

	cout << nextline;

	cout << "--] Hires for next year: \'" << player_01.name << "\' and \'" << player_02.name << "\'!" << nextline;
	
	cout << nextline;

	cout << "-" << nextline;
	
	cout << nextline;
	
	cout << "--] Purchase price: U$" << player_01.wage + player_02.wage << "\'." << nextline;

	cout << nextline;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << nextline;

	system("pause");
}