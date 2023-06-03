#include <iostream>

using namespace std;

int main()
{
	int days;

	cout << "Amount of days: ";

	cin  >> days;
	
	cout << "\x1B[2J\x1B[H";

	int hours = days * 24;

	if (days == 1)
	{
		cout << days << " day have " << hours << " hours";
	}
	else
	{
		cout << days << " days have " << hours << " hours";
	}

	cout << endl;

	return 0;
}