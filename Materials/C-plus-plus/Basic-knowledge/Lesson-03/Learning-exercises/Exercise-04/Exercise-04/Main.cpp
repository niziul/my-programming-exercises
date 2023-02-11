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