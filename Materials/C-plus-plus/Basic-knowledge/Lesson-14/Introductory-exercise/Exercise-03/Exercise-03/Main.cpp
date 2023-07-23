/*
	[ output] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter the name, wage and goals of two players below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - - - ] #1 player:
			[ name  ] : Bebeto
			[ wage  ] : 20000.0
			[ goals ] : 600

			-

			- - - - ] #2 player:
			[ name  ] : Romario
			[ wage  ] : 30000.0
			[ goals ] : 800

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			--] : The name of the team's star player is 'Bebeto;

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>
#include <array>

using std::cin;
using std::cout;
using std::endl;
using std::array;

struct soccer_player
{
	char name[20];
	float wage;
	unsigned goals;
};

int main()
{
	auto team
		= array<soccer_player, 22>{};

	auto star_player
		= &team[0];

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;
	
	cout << "Enter the name, wage and goals of two players below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;
	
	for (auto i = 0; i < 2; i++)
	{
		if (i == 0)
		{
			cout << "- - - - ] #1 player:" << endl;
		}
		else
		{
			cout << "- - - - ] #2 player:" << endl;
		}
		cout << "[ name  ] : ";
		cin >> team[i].name;
		cout << "[ wage  ] : ";
		cin >> team[i].wage;
		cout << "[ goals ] : ";
		cin >> team[i].goals;

		cout << endl;

		cout << "-" << endl;

		cout << endl;
	}

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	cout << "--] : The name of the team's star player is \'" << star_player->name << "\;" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}