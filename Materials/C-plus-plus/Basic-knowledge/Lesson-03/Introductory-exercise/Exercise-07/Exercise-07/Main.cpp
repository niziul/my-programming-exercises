/*
	[ output ] :
		```
			carrots: 10
			lettuces: 20
			pineapple: 30

			Amount of carrots: 10
			Amount of lettuces: 20
			Amount of pineapple: 30
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int carrots;
	int lettuces;
	int pineapple;

	cout << "carrots: ";
	cin >> carrots;

	cout << "lettuces: ";
	cin >> lettuces;

	cout << "pineapple: ";
	cin >> pineapple;

	cout << endl;

	cout << "Amount of carrots: " << carrots << endl;
	cout << "Amount of lettuces: " << lettuces << endl;
	cout << "Amount of pineapple: " << pineapple << endl;

	cout << endl;

	return 0;
}