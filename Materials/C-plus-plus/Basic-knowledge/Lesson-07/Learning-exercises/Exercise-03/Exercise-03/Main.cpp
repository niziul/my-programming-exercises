/*
	[ description of the third learning exercise ] :
		- Build a function called low_bits(); which uses a bitmask to return only the low-order 16 bits of an
		  only the low-order 16 bits of a number of type 'int'. Test the function by passing an integer
		  value entered by the user and show the number returned.

	[ output ] :
		```
			
		:::::::::::::::::::: :::::::::: ::::: ::: :
		--] Low Bits
		:::::::::::::::::::: :::::::::: ::::: ::: :


		Enter an integer value
		: 350000


		The lowest 16 bits of this value '350000' correspond to the number: '22320'
		```
*/

#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int low_bits(int);

int main()
{
	int user_value;

	cout << endl;
	cout << endl;

	cout << ":::::::::::::::::::: :::::::::: ::::: ::: :" << endl;
	cout << "--] Low Bits" << endl;
	cout << ":::::::::::::::::::: :::::::::: ::::: ::: :" << endl;

	cout << endl;
	cout << endl;
	
	cout << "Enter an integer value" << endl;
	cout << ": ";
	cin >> user_value;

	cout << endl;
	cout << endl;

	cout << "The lowest 16 bits of this value \'" << user_value << "\' correspond to the number: \'" << low_bits(user_value) << "\'" << endl;

	cout << endl;
	cout << endl;

	system("pause");
}

int low_bits(int user_value)
{
	auto mask = 65'535;

	return user_value & mask;
}
