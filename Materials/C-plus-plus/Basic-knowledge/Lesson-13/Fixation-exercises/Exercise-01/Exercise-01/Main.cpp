/*
	[ description of the first fixation exercise ] :
		- A car factory defines the color of a car by a number, a code of letters or
		the name of the color, never all three simultaneously. The correspondence of the
		main colors is given in the table below. Construct a struct to store information about
		a car. A car should have model name, year of manufacture, color, (number, code or name) and
		price.

		Then build a vector of 3 cars initializing the first two car with the information:
		{ 
			"Vectra", 2009, "Blue", 58'000'00,
			"Polo", 2008, "Black", 45'000'00,
		}
		respectively. Then ask the user to enter the data of a third car and store in the vector. Finally
		the program should show on the screen the data for the three cars.

	[ output ] :
		```
		<@> - - - - - - - - - - - - - - - - - - - - <@>

		Enter the car details below
		- - - - - - - - - - - - - - - - - - - - - - - -
		[ model name          ] : Uno
		[ year of manufacture ] : 2014
		[ color (code number) ] : 11029
		[ price               ] : 25000.0

		-

		- - - - - - - - - - - - - - - - - - - - - - - -
		Cars in stock
		- - - - - - - - - - - - - - - - - - - - - - - -

		'Vectra':
		--] year of manufacture: '2009';
		--] color (code_letters): 'Blue';
		--] price: '58000';

		-

		'Polo':
		--] year of manufacture: '2008';
		--] color (code_letters): 'Black';
		--] price: '48000';

		-

		'Uno':
		--] year of manufacture: '2014';
		--] color (code_number): '11029';
		--] price: '25000';

		-


		<@> - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>
#include <array>

using std::cin;
using std::cout;
using std::endl;
using std::array;
using std::strcat;


union car_color
{
	char code_letters[10];
	int  code_number;
	char code_letters_and_number[10];
};

struct car
{
	char      model_name[40];
	short     year_of_manufacture;
	car_color color;
	float     price;
};

int main()
{
	auto cars
		= array<car, 3>
		{
			car
			{
				"Vectra",
				2009,
				"Blue",
				58000.00
			},
			car
			{
				"Polo",
				2008,
				"Black",
				48000.00
			}
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter the car details below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "[ model name          ] : ";
	cin >> cars[2].model_name;
	cout << "[ year of manufacture ] : ";
	cin >> cars[2].year_of_manufacture;
	cout << "[ color (code number) ] : ";
	cin >> cars[2].color.code_number;
	cout << "[ price               ] : ";
	cin >> cars[2].price;
	
	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "Cars in stock" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	cout.basefield;
	for (auto i = 0; i < cars.size(); i++)
	{
		cout << "\'" << cars[i].model_name << "\':" << endl;
		cout << "--] year of manufacture: \'" << cars[i].year_of_manufacture << "\';" << endl;

		if (i < 2)
		{
			cout << "--] color (code_letters): \'" << cars[i].color.code_letters << "\';" << endl;
		}
		else
		{
			cout << "--] color (code_number): \'" << cars[i].color.code_number << "\';" << endl;
		}

		cout << "--] price: \'" << cars[i].price << "\';" << endl;

		cout << endl;

		cout << "-" << endl;
		
		cout << endl;
	}

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}