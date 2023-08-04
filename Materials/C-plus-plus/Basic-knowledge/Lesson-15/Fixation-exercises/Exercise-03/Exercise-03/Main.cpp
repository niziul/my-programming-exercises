/*
	[ description of the third fixation exercise ] :
		- Build a struct to store information about a car. A 'car' should have a
		model, year of manufacture and price. Then build a static vector of 10 cars
		initializing the first two cars respectively to 'vectra', '2009', 'US$58.000.00',
		and 'polo', '2008', 'US$45.000.00'. Use a pointer to point to the second car and display
		its data.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - - - - - - - - - - ] car[2]

			[ model               ] : 'polo';
			[ year of manufacture ] : '2009';
			[ price               ] : '450000';

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;
using std::endl;

struct st_car
{
	char model[20];
	int year_of_manufacture;
	float price;
};

int main()
{
	st_car cars[10]
		=
		{
			st_car
			{
				"vectra",
				2009,
				58000.00
			},
			st_car
			{
				"polo",
				2009,
				450000.0
			}
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - ] car[2]" << endl;

	cout << endl;

	cout << "[ model               ] : \'" << (cars + 1)->model << "\';" << endl;
	cout << "[ year of manufacture ] : \'" << (cars + 1)->year_of_manufacture << "\';" << endl;
	cout << "[ price               ] : \'" << (cars + 1)->price << "\';" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}