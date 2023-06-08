/*
	[ output ] :
		```
			Enter two numbers ( ex: 6 7 )
			: 6 7


			[ The biggest of them = 7 ]
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int biggest_function(int first_value, int second_value);

int main()
{
	int first_number;
	int second_number;

	cout << "Enter two numbers ( ex: 6 7 )" << endl;
	cout << ": ";
	cin >> first_number >> second_number;

	cout << endl;
	cout << endl;

	cout << "[ The biggest of them = " << biggest_function(first_number, second_number) << " ]" << endl;

	cout << endl;
	cout << endl;

	system("pause");
}

int biggest_function(int first_value, int second_value)
{
	if (first_value > second_value)
	{
		return first_value;
	}
	else
	{
		return second_value;
	}
}
