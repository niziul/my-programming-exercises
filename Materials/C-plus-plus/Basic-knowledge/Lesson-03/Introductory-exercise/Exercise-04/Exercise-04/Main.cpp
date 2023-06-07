/*
	[ output ] :
		```
			amount of carrots = 25
			amount of lettuces = 25
			amount of tomatoes = 25
		```
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int carrots;
	int lettuces;
	int tomatoes;

	carrots = lettuces = tomatoes = 25;

	cout << "amount of carrots = " << carrots << endl;

	cout << "amount of lettuces = " << lettuces << endl;

	cout << "amount of tomatoes = " << tomatoes << endl;

	return 0;
}