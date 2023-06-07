/*
	[ description of the fourth learning exercise ] :
		- The cost of a new car to the consumer is the sum of the factory cost plus the dealer
		of the distributor and taxes (applied to the factory cost). Assume that the dealer percentage
		is '28%' and the taxes are '45%', make a program to read the factory cost of a car and write the
		cost to the consumer.

	[ output ] :
		```
			Enter the manufacturing cost of the car: 60000

			[ The cost of a new car on the market is 103800 dollars! ]
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	float tax_percentage = 45;
	float distributor_percentage = 28;

	float cost_of_manufacturing_the_car;
	float cost_of_the_car_in_the_market;

	cout << "Enter the manufacturing cost of the car: ";
	cin >> cost_of_manufacturing_the_car;

	cout << endl;

	cost_of_the_car_in_the_market = cost_of_manufacturing_the_car + (cost_of_manufacturing_the_car / 100) * (distributor_percentage + tax_percentage);

	cout << "[ The cost of a new car on the market is " << cost_of_the_car_in_the_market << " dollars! ]";

	cout << endl;

	return 0;
}