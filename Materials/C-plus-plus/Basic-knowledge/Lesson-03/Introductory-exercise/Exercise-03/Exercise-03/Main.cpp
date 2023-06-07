/*
	[ output ] :
		```
			The letter M has 3 legs.
			Ten letters M has 30 legs.
		```
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	cout << "The letter" << " " << 'M' << " ";
	cout << "has" << " " << 3 << " " << "legs." << endl;

	char char_letter = 'M';

	int int_number = 0x1E;

	cout << "Ten letters" << " " << char_letter << " ";
	cout << "has" << " " << int_number << " " << "legs." << endl;

	return 0;
}