/*
	[ output ] :
		```
			state content : [ 128 ]
		```
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	unsigned char state = 1;

	state = state << 7;

	cout << "state content : [ " << (int16_t)state << " ]" << endl;

	cout << endl;
	cout << endl;

	system("pause");
}