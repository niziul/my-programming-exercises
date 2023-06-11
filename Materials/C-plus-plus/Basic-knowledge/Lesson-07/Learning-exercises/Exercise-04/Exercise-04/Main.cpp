/*
	[ description of the fourth learning exercise ] :
		- Build a function called 'high_bits();' which uses a bitmask to return only the
		  high-order 16 bits of a number of type 'int'. Test the function by passing an integer
		  value entered by the user and show the number returned.

	[ output ] :
		```

		:::::::::::::::::::: :::::::::: ::::: ::: :
		--] High Bits
		:::::::::::::::::::: :::::::::: ::::: ::: :


		Enter an integer value
		: 350000


		The higher 16 bits of this value '350000' correspond to the number: '5'
		```
*/

#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int high_bits(int);

int main()
{
	int user_value;

	cout << endl;
	cout << endl;

	cout << ":::::::::::::::::::: :::::::::: ::::: ::: :" << endl;
	cout << "--] High Bits" << endl;
	cout << ":::::::::::::::::::: :::::::::: ::::: ::: :" << endl;

	cout << endl;
	cout << endl;

	cout << "Enter an integer value" << endl;
	cout << ": ";
	cin >> user_value;

	cout << endl;
	cout << endl;

	cout << "The higher 16 bits of this value \'" << user_value << "\' correspond to the number: \'" << high_bits(user_value) << "\'" << endl;

	cout << endl;
	cout << endl;

	system("pause");
}

int high_bits(int user_value)
{
	auto mask = ~32767i16;

	return (user_value & mask) >> 16;
}