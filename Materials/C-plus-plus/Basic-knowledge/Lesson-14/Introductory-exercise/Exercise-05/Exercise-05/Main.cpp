/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - - - ] 'Joaozinho' :

			[ wage  ] : '100';
			[ goals ] : '2';


			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;
using std::endl;

struct soccer_player
{
	char name[20];
	float wage;
	unsigned goals;
};

void display(soccer_player*);

int main()
{
	auto newcomer
		= soccer_player
		{
			"Joaozinho",
			100,
			2
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	display(&newcomer);

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}

void display(soccer_player* soccer_player_ptr)
{
	cout << "- - - - ] \'" << soccer_player_ptr->name << "\' :" << endl;
	
	cout << endl;

	cout << "[ wage  ] : \'" << soccer_player_ptr->wage << "\';" << endl;
	cout << "[ goals ] : \'" << soccer_player_ptr->goals << "\';" << endl;

	cout << endl;
}
