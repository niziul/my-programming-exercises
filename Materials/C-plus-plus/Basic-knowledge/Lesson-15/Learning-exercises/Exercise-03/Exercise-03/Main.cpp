/*
	[ description of the third learning exercise ] :
		- Create a 'places' struct with the fields name, country and continent.
		Ask the user how many places he wants to visit on his next vacation and
		create a vector of places dynamically allocation the space according to how
		many places he wants visit. Use a for loop to store the information of the places
		the user wants to visit, and after the storage show the places he chose. Release the
		dynamically allocated space at the end of the program.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			How many places you want to visit on this vacation
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 2

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			Enter the information of the places below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - - - - - ] place[0]:

			[ name      ]: Machu Picchu
			[ country   ]: Peru
			[ continent ]: South America

			-

			- - - - - - ] place[1]:

			[ name      ]: The Grand Canyon
			[ country   ]: Arizona
			[ continent ]: Southwestern United States

			-


			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			All the places entered and the address that were saved
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - - - - - ] '000001E2722DD4F0' - place[0] :
			[ name      ]: 'Machu Picchu';
			[ country   ]: 'Peru';
			[ continent ]: 'South America';

			-

			- - - - - - ] '000001E2722DD5E0' - place[1] :
			[ name      ]: 'The Grand Canyon';
			[ country   ]: 'Arizona';
			[ continent ]: 'Southwestern United States';

			-


			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct place
{
	char name[80];
	char country[80];
	char continent[80];
};

int main()
{
	auto vector_size
		= 0;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "How many places you want to visit on this vacation" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> vector_size;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	auto places
		= new place[vector_size];

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "Enter the information of the places below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cin.ignore();

	for (auto i = 0; i < vector_size; i++)
	{
		cout << "- - - - - - ] place[" << i << "]:" << endl;

		cout << endl;

		cout << "[ name      ]: ";
		cin.getline((places + i)->name, 80);

		cout << "[ country   ]: ";
		cin.getline((places + i)->country, 80);

		cout << "[ continent ]: ";
		cin.getline((places + i)->continent, 80);
		
		cout << endl;

		cout << "-" << endl;
		
		cout << endl;
	}

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "All the places entered and the address that were saved" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	for (auto i = 0; i < vector_size; i++)
	{
		cout << "- - - - - - ] \'" << (places + i) << "\' - place[" << i << "] :" << endl;
		cout << "[ name      ]: \'" << (places + i)->name << "\';" << endl;
		cout << "[ country   ]: \'" << (places + i)->country << "\';" << endl;
		cout << "[ continent ]: \'" << (places + i)->continent << "\';" << endl;

		cout << endl;

		cout << "-" << endl;

		cout << endl;
	}

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	delete[] places;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}