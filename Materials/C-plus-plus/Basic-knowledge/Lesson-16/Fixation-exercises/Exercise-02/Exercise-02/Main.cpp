/*
	[ description of the second fixation exercise ] :
		- Design a struct called 'car' that stores the following information
		about an automobile: the manufacturer (string) and the year built (integer).

		Write a program that asks the user how many cars should be cataloged.
		The program should then use 'new' to create a dynamic vector of that number
		of cars

		Next, the program should use a loop to have the user enter information
		for each of the cars. Finally, the program should display the contents of each
		struct, as shown bellow.

		]
			How many cars do you want to catalog? 2

			car #1
			manufacturer: Chevrolet
			year: 2005

			car #2
			manufacturer: Volkswagen
			year: 2008

			Here is your collection:

			2005 Chevrolet
			2008 Volkswagen

		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter how many cars do you want to catalog below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 2

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - - ] car #1:

			[ manufacturer ]: Chevrolet
			[ year_built   ]: 2005

			-

			- - - ] car #2:

			[ manufacturer ]: Volkswagen
			[ year_built   ]: 2008

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			Information about all stored cars
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - - ] car #1:
			2005 Chevrolet;

			- - - ] car #2:
			2008 Volkswagen;


			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct car
{
	char manufacturer[40];
	int year_built;
};

int main()
{
	auto vector_size
		= new int;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter how many cars do you want to catalog below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> *vector_size;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	auto cars
		= new car[*vector_size];

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	for (auto i = 0; i < *vector_size; i++)
	{
		auto x
			= i + 1;

		cout << "- - - ] car #" << x << ":" << endl;

		cout << endl;

		cout << "[ manufacturer ]: ";
		cin >> (cars + i)->manufacturer;

		cout << "[ year_built   ]: ";
		cin >> (cars + i)->year_built;

		cout << endl;

		cout << "-" << endl;
		
		cout << endl;
	}

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "Information about all stored cars" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	for (auto i = 0; i < *vector_size; i++)
	{
		auto x
			= i + 1;

		cout << "- - - ] car #" << x << ":" << endl;

		cout << (cars + i)->year_built << " " << (cars + i)->manufacturer << ";" << endl;

		cout << endl;
	}

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete[] cars;
	delete vector_size;

	system("pause");
}