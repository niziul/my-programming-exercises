/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter the player's name, salary and goals below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			[ name   ] :Bebeto
			[ salary ] :20000.0
			[ goals  ] :600

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			Player information contracted for next year.
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			name   :
			- - - -] 'Bebeto';
			salary :
			- - - -] '20000';
			goals  :
			- - - -] '600';

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct soccer_player
{
	char name[20];
	float salary;
	unsigned goals;
};

int main()
{
	auto player
		= new soccer_player;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter the player's name, salary and goals below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "[ name   ] :";
	cin >> player->name;
	cout << "[ salary ] :";
	cin >> player->salary;
	cout << "[ goals  ] :";
	cin >> player->goals;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "Player information contracted for next year." << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "name   :" << endl;
	cout << "- - - -] \'" << player->name << "\';" << endl;
	cout << "salary :" << endl;
	cout << "- - - -] \'" << player->salary << "\';" << endl;
	cout << "goals  :" << endl;
	cout << "- - - -] \'" << player->goals << "\';" << endl;

	cout << endl;

	delete player;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}