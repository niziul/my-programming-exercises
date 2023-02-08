#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int age_in_years;

	cout << "Enter your age in years: ";

	cin >> age_in_years;

	cout << endl;

	cout << age_in_years << " year are equivalent to " << age_in_years * 365 << " days.";

	cout << endl;
	
	return 0;
}