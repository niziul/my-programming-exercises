/*
	[ output ] :
		```
			I have 25 carrots.
			Now i have 24 carrots.
		```
*/

#include <iostream>

using namespace std;

int main()
{
	int total_amount_of_carrots = 25;

	cout << "I have " << total_amount_of_carrots << " carrots.";
	cout << endl;

	total_amount_of_carrots -= 1;

	cout << "Now i have " << total_amount_of_carrots << " carrots.";
	cout << endl;

	return 0;
}