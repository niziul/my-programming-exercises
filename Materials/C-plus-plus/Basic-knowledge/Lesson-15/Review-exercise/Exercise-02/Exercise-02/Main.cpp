/*
	[ description of the second review exercise ] :
		- Define a struct that describes a 'fish'. The struct must include the 'type' (char),
		'weight' (floating point) and 'length' (integer) of the 'fish'.

		Then show:
			a - how to create a variable of type fish;
			b - how to dynamically allocate a struct of type fish.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			fish_a information
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			type
			- - - ] 'Swordfish';
			weight
			- - - ] '1430lb';
			length
			- - - ] '454cm';

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			fish_b information
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			type
			- - - ] 'Oscar';
			weight
			- - - ] '3.5lb';
			length
			- - - ] '45cm';

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;
using std::endl;

struct fish
{
	char type[20];
	float weight;
	int length;
};

int main()
{
	auto fish_a
		= fish
		{
			"Swordfish",
			1430.0,
			454
		};

	auto fish_b
		= new fish
		{
			"Oscar",
			3.5,
			45
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "fish_a information" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "type" << endl;
	cout << "- - - ] \'" << fish_a.type << "\';" << endl;
	cout << "weight" << endl;
	cout << "- - - ] \'" << fish_a.weight << "lb\';" << endl;
	cout << "length" << endl;
	cout << "- - - ] \'" << fish_a.length << "cm\';" << endl;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "fish_b information" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "type" << endl;
	cout << "- - - ] \'" << fish_b->type << "\';" << endl;
	cout << "weight" << endl;
	cout << "- - - ] \'" << fish_b->weight << "lb\';" << endl;
	cout << "length" << endl;
	cout << "- - - ] \'" << fish_b->length << "cm\';" << endl;

	delete fish_b;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}