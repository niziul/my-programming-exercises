/*
	[ description of the second fixation exercise ] :
		- Define the 'balloon' struct as show below. Build a program to dynamically
		allocate a variable of type 'balloon', ask the user to enter values for each
		of the members, and then display the contents of the struct.
		
		]
			struct balloon
			{
				int model;			// diameter in meters
				char brand[20];		// brand name
				float diameter;		// model number
			};
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter the information from the balloon below.
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			model    : 100
			brand    : kolavia
			diameter : 30.48

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - ] All balloon information has been successfully saved!

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct st_balloon
{
	int model;
	char brand[20];
	float diameter;
};

int main()
{
	auto balloon
		= new st_balloon;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter the information from the balloon below." << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "model    : ";
	cin >> balloon->model;
	cout << "brand    : ";
	cin >> balloon->brand;
	cout << "diameter : ";
	cin >> balloon->diameter;
	
	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	cout << "- - ] All balloon information has been successfully saved!" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	delete balloon;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}