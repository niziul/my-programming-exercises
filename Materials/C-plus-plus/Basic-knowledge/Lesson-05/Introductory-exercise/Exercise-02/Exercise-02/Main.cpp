#include <iostream>

using std::cout;
using std::endl;

double average_function(double first_value, double second_value);

int main()
{
	double amount = average_function(12, 8);

	cout << "[ result: " << amount << " ]";

	cout << endl;
	cout << endl;

	system("pause");
}

double average_function(double first_value, double second_value)
{
	return (first_value + second_value) / 2.0;
}
