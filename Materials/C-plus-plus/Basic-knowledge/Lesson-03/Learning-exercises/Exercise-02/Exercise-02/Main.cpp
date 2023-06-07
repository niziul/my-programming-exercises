/*
	[ description of the second learning exercise ] :
		- Build a program to display the multiplication table of any number 'n', where 'n' is a
		number supplied by the user.

	[ output ] :
		```
			Which multiplication table would you like to see?
			: 8
			8 x 0 = 0
			8 x 1 = 8
			8 x 2 = 16
			8 x 3 = 24
			8 x 4 = 32
			8 x 5 = 40
			8 x 6 = 48
			8 x 7 = 56
			8 x 8 = 64
			8 x 9 = 72
			8 x 10 = 80
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int multiplication_table_number;

	cout << "Which multiplication table would you like to see?" << endl;
	cout << ": ";
	cin >> multiplication_table_number;

	for (int i = 0; i < 11; i++)
	{
		cout << multiplication_table_number << " x " << i << " = " << multiplication_table_number * i << endl;
	}

	return 0;
}