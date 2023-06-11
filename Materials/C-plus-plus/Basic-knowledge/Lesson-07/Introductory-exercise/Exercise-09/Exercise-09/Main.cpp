/*
	[ output ] :
		```
			------------------------ ------------ ------ ---
			lamps on: 170 bit sequence : [ 1 0 1 0 1 0 1 0 ]
			------------------------ ------------ ------ ---
			lamps on: 15  bit sequence : [ 0 0 0 0 1 1 1 1 ]
			------------------------ ------------ ------ ---


			lamps on: 175 bit sequence : [ 1 0 1 0 1 1 1 1 ]
		```
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	unsigned char state = 170;

	state = state | 15;

	cout << "------------------------ ------------ ------ ---" << endl;
	cout << "lamps on: 170 bit sequence : [ 1 0 1 0 1 0 1 0 ]" << endl;
	cout << "------------------------ ------------ ------ ---" << endl;
	cout << "lamps on: 15  bit sequence : [ 0 0 0 0 1 1 1 1 ]" << endl;
	cout << "------------------------ ------------ ------ ---" << endl;

	cout << endl;
	cout << endl;

	cout << "lamps on: " << (int16_t)state << " bit sequence : [ 1 0 1 0 1 1 1 1 ]" << endl;

	cout << endl;
	cout << endl;

	system("pause");
}