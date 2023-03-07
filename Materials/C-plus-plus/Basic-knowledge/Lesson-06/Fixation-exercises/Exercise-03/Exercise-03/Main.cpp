/*
	[ description of the third introductory exercise ] :
		- Write a program that creates four variables, one for each of the types
		  types shown below. The program should show how many bytes each type
		  type occupies and calculate the total amount of memory used by the variables created.
		  
		  Use spaces in the strings to produce output in the format below:
		  ]
				short	 : 2  bytes
				int		 : 4  bytes
				long	 : 4  bytes
				long long: 8  bytes
				total	 : 18 bytes
		  ]

	[ output ] :
		```
			[ short     : 4 bytes ]


			[ long      : 4 bytes ]


			[ short     : 2 bytes ]


			[ long long : 8 bytes ]


			[ total     : 18 bytes ]
		```
*/

#include <iostream>
#include <climits>

using std::cout;
using std::endl;

int main()
{
	int int_n;
	long long_n;
	short short_n;
	long long llong_n;

	cout << "[ short     : " << sizeof int_n << " bytes ]" << endl;
	
	cout << endl;
	cout << endl;

	cout << "[ long      : " << sizeof long_n << " bytes ]" << endl;

	cout << endl;
	cout << endl;

	cout << "[ short     : " << sizeof short_n << " bytes ]" << endl;

	cout << endl;
	cout << endl;

	cout << "[ long long : " << sizeof llong_n << " bytes ]" << endl;

	cout << endl;
	cout << endl;

	cout << "[ total     : " << sizeof int_n + sizeof long_n + sizeof short_n + sizeof llong_n << " bytes ]" << endl;

	cout << endl;
	cout << endl;

	system("pause");
}