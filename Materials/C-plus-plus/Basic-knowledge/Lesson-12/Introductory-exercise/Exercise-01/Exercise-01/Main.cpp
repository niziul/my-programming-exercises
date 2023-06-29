/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			--] 'Zico' scored '700' goals, receiving U$40000.

			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using std::cin;
using std::cout;
using std::strcpy;

struct soccer_player
{
	char name[20];
	unsigned wage;
	unsigned goals;
};

int main()
{
	auto const nextline
		= '\n';

	soccer_player zico;
	
	strcpy(zico.name, "Zico");

	zico
		.goals = 700;
	
	zico
		.wage = 40'000;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << nextline;

	cout << nextline;

	cout << "--] \'" << zico.name << "\' scored \'" << zico.goals << "\' goals, receiving U$" << zico.wage << "." << nextline;

	cout << nextline;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << nextline;

	system("pause");
}