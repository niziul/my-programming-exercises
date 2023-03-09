/*
	[ description of the third learning exercise ] :
		- Modify the program below so that it continues to use 16 bits for the
		  variable "x" and 32 bits for variable "y", but without overflowing;

		  ]
				#include <iostream>

				using std::cout;
				using std::endl;

				int main()
				{
					short x = 1;
					x = x + 32767;

					int y = 2'147'483'647;
					y = y + 1;

					cout << "[ x ] = " << x << endl;

					cout << endl;
					cout << endl;

					cout << "[ y ] = " << y << endl;

					cout << endl;
					cout << endl;

					system("pause");
				}
		  ]

	[ output ] :
		```
			[ x ] = 32768
			[ bits ] = 16


			[ y ] = 2147483648
			[ bits ] = 32
		```
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	unsigned short x = 1;
	x = x + 32767;

	unsigned int y = 2'147'483'647;
	y = y + 1;

	cout << "[ x ] = " << x << endl;
	cout << "[ bits ] = " << sizeof x * 8 << endl;

	cout << endl;
	cout << endl;

	cout << "[ y ] = " << y << endl;
	cout << "[ bits ] = " << sizeof y * 8 << endl;

	cout << endl;
	cout << endl;

	system("pause");
}