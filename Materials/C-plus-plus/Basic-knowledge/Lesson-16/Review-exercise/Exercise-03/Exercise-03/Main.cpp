/*
	[ description of the third review exercise ] :
		- Write a function that displays the contents of a dynamic vector
		of 'soccer_player' of any size.

		]
			struct soccer_player
			{
				char name[20];
				float salary;
				unsigned goals;
			};
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - - - -] player - 0:

			[ name   ] : 'Erling Haaland';
			[ salary ] : '35000000.0';
			[ goals  ] : '211';

			- - - - -] player - 1:

			[ name   ] : 'Neymar da Silva';
			[ salary ] : '40800000.0';
			[ goals  ] : '436';


			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;
using std::endl;

struct soccer_player
{
	char name[20];
	float salary;
	unsigned goals;
};

void function(soccer_player*, int);

int main()
{
	auto players
		= new soccer_player[2]
		{
			{
				"Erling Haaland",
				35'000'000,
				211
			},
			{
				"Neymar da Silva",
				40'800'000,
				436
			}
		};


	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	function(players, 2);

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete[] players;

	system("pause");
}

void function(soccer_player* players, int size)
{
	cout
		.setf(std::iostream::fixed);

	cout
		.precision(1);

	for (auto i = 0; i < size; i++)
	{
		cout << "- - - - -] player - " << i << ":" << endl;

		cout << endl;
		
		cout << "[ name   ] : \'" << (players + i)->name << "\';" << endl;
		cout << "[ salary ] : \'" << (players + i)->salary << "\';" << endl;
		cout << "[ goals  ] : \'" << (players + i)->goals << "\';" << endl;
		
		cout << endl;
	}

	cout
		.unsetf(std::iostream::fixed);
}