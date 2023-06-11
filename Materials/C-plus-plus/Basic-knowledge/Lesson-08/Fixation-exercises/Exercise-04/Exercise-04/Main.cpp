/*
	[ description of the fourth fixation exercise ] :
		- The mass of one molecule of water is approximately '3.0 x 10-²³' grams. One
		  quarter gallon of water is approximately '950' grams. Write a program that asks
		  for the amount of water in gallons and shows the amount of water molecules of gallons
		  of water contained.

	[ output ] :
		```
			I--------------------------------------------------------------I
					Enter the number of gallons of water ( ex: 2.5 )
			I--------------------------------------------------------------I
			: 2.5


			I--------------------------------------------------------------I
			--] In '2.5' gallons there are '3.16667e+26' molecules of water.
			I--------------------------------------------------------------I
		```
*/

#define mass_of_one_molecule_of_water 3E-23

#define weight_of_a_gallon_of_water 38E+2

#define nextline '\n'

#include <iostream>

using std::cin;
using std::cout;

double amount_equivalent_in_water_molecules(double);

int main()
{
	auto amount_of_gallons = 0.0;

	cout << "I--------------------------------------------------------------I" << nextline;
	cout << "	Enter the number of gallons of water ( ex: 2.5 )" << nextline;
	cout << "I--------------------------------------------------------------I" << nextline;
	cout << ": ";
	cin >> amount_of_gallons;

	cout << nextline;
	cout << nextline;

	cout << "I--------------------------------------------------------------I" << nextline;
	cout << "--] In \'" << amount_of_gallons << "\' gallons there are \'" << amount_equivalent_in_water_molecules(amount_of_gallons) << "\' molecules of water." << nextline;
	cout << "I--------------------------------------------------------------I" << nextline;

	cout << nextline;
	cout << nextline;

	system("pause");
}

double amount_equivalent_in_water_molecules(double amount_of_gallons)
{
	return (weight_of_a_gallon_of_water * amount_of_gallons) / mass_of_one_molecule_of_water;
}