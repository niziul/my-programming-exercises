/*
	[ description of the third review exercise ] :
		- Define a struct that describes a fish. The struct must include the type (string),
		the weight (floating point) and the length (integer) of the fish. Then create a function
		called "display" that gets a pointer to the fish variable.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			[ name   ] : 'Piaba';
			[ weight ] : '6.2g';
			[ length ] : '5cm';

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;
using std::endl;

struct st_fish
{
	char name[20];
	float weight;
	unsigned length;
};

void display(st_fish*);

int main()
{
	auto fish
		= st_fish
		{
			"Piaba",
			6.2,
			5
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	display(&fish);

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}

void display(st_fish* fish_ptr)
{
	cout << "[ name   ] : \'" << fish_ptr->name << "\';" << endl;
	cout << "[ weight ] : \'" << fish_ptr->weight << "g\';" << endl;
	cout << "[ length ] : \'" << fish_ptr->length << "cm\';" << endl;
}
