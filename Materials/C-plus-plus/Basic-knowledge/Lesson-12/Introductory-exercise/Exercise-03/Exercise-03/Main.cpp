/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - <@>

			--] 'Bebeto';
			--] '20000';
			--] '800';

			<@> - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;

struct soccer_player
{
	char name[40];
	unsigned wage;
	unsigned goals;
};

void display(soccer_player);

int main()
{
	auto const nextline
		= '\n';
	
	auto beb
		= soccer_player
		{
			"Bebeto",
			20'000,
			800
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << nextline;

	cout << nextline;

	display(beb);
	
	cout << nextline;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << nextline;

	system("pause");
}

void display(soccer_player sp)
{
	cout << "--] \'" << sp
						.name << "\';\n";
	cout << "--] \'" << sp
						.wage << "\';\n";
	cout << "--] \'" << sp
						.goals << "\';\n";
}