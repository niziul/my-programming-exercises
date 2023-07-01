/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter the information about the soccer player below
			- - - - - - - - - - - - - - - - - - - - - - - - - - -
			[name ]: Bebeto
			[wage ]: 200000
			[goals]: 800
			- - - - - - - - - - - - - - - - - - - - - - - - - - -

			--] 'Bebeto';
			--] '200000';
			--] '800';

			- - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct soccer_player
{
	char name[40];
	unsigned wage;
	unsigned goals;
};

soccer_player read_information_about_the_soccer_player();

void display__information_about_the_soccer_player(soccer_player);

int main()
{
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
	
	cout << endl;

	auto soccer_player
		= read_information_about_the_soccer_player();

	display__information_about_the_soccer_player(soccer_player);

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}

soccer_player read_information_about_the_soccer_player()
{
	auto temp_soccer_player
		= soccer_player{};

	cout << "Enter the information about the soccer player below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << "[name ]: ";
	cin >> temp_soccer_player.name;
	cout << "[wage ]: ";
	cin >> temp_soccer_player.wage;
	cout << "[goals]: ";
	cin >> temp_soccer_player.goals;

	return temp_soccer_player;
}

void display__information_about_the_soccer_player(soccer_player sp)
{
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "--] \'" << sp
		.name << "\';" << endl;
	cout << "--] \'" << sp
		.wage << "\';" << endl;
	cout << "--] \'" << sp
		.goals << "\';" << endl;
	
	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
}