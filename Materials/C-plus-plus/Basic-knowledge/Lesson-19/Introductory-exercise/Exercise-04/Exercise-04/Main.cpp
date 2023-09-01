/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			Maximum temperatures in the cities mentioned in recent years
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - ] 'Mossoró'          :      35      28      25      20      24
			- - ] 'Caraúbas'         :      15      19      23      35      32
			- - ] 'Angicos'          :      34      36      30      31      30
			- - ] 'Pau dos Ferros'   :      31      36      38      32      26

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int cities = 4;
const int years = 5;

int main()
{
	system("chcp 1252 > nul");
	system("cls");

	const char * cities_names[cities]
		=
		{
			"Mossoró",
			"Caraúbas",
			"Angicos",
			"Pau dos Ferros"
		};

	int max_temperature[cities][years]
		=
		{
			{ 35, 28, 25, 20, 24 },
			{ 15, 19, 23, 35, 32 },
			{ 34, 36, 30, 31, 30 },
			{ 31, 36, 38, 32, 26 },
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "Maximum temperatures in the cities mentioned in recent years" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	for (auto i = 0; i < cities; ++i)
	{
		cout << "- - ] \'" << cities_names[i] << "\' \t : \t";

		for (auto j = 0; j < years; ++j)
		{
			cout << max_temperature[i][j] << "\t";
		}

		cout << endl;
	}

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}