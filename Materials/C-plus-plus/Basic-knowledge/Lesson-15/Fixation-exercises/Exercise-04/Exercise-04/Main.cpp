/*
	[ description of the fourth fixation exercise ] :
		- Repeat the previous exercise by creating a dynamic array of cars. Instead
		of initializing the array with predefined values, ask the user to enter the data
		of two cars. Use a function to receive the array of cars and display the total value
		of the cars.

		]
			Enter data for two cars below:
			Agile 2013 27500
			Fusion 2017 112300

			The total value is US$139.800
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter data for two cars below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - - - - - - - - - - ] car[1]

			[ model               ] : Agile
			[ year of manufacture ] : 2013
			[ price               ] : 27500.0

			- - - - - - - - - - - ] car[2]

			[ model               ] : Fusion
			[ year of manufacture ] : 2017
			[ price               ] : 112300.0


			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - ] The total value of the two cars is US$139800

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct st_car
{
	char model[20];
	int year_of_manufacture;
	float price;
};

void total_value_of_the_two_cars(st_car*);

int main()
{
	auto cars
		= new st_car[2];

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter data for two cars below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	for (auto i = 0; i < 2; i++)
	{
		if (i == 0)
		{
			cout << "- - - - - - - - - - - ] car[1]" << endl;
		}
		else
		{
			cout << "- - - - - - - - - - - ] car[2]" << endl;
		}

		cout << endl;

		cout << "[ model               ] : ";
		cin >> (cars + i)->model;
		cout << "[ year of manufacture ] : ";
		cin >> (cars + i)->year_of_manufacture;
		cout << "[ price               ] : ";
		cin >> (cars + i)->price;

		cout << endl;
	}

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;
	
	total_value_of_the_two_cars(cars);

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	delete[] cars;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}

void total_value_of_the_two_cars(st_car* cars)
{
	cout << "- - ] The total value of the two cars is US$" << (cars + 0)->price + (cars + 1)->price << endl;
}