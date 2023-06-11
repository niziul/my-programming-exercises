/*
	[ output ] :
		```
			state content : [ 1 ]
		```
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	unsigned char state = 255;

	state = state >> 7;

	cout << "state content : [ " << (int16_t)state << " ]" << endl;

	cout << endl;
	cout << endl;

	system("pause");
}