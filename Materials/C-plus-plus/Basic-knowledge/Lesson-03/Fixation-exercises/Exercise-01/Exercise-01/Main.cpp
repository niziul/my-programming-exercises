#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int seconds;
	int minutes;

	cout << "Enter a number of minutes: ";
	cin >> minutes;

	cout << endl;

	seconds = minutes * 60;

	cout << "There is a total of " << seconds << " seconds in " << minutes << " minute!";

	cout << endl;

	return 0;
}