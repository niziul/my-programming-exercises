/*
	[ output ] :
		```
			[ short
			- 2 bytes

			[ int
			- 4 bytes

			[ long
			- 4 bytes

			[ long long
			- 8 bytes


			[ int
			- 4 bytes

			[ short
			- 32767 bytes

			[ long
			- 2147483647

			[ long long
			- 9223372036854775807
		```
*/

#include <iostream>
#include <climits>

using std::cout;
using std::endl;

int main()
{
	int n_int
		= INT_MAX;
	
	short n_short
		= SHRT_MAX;
	
	long n_long
		= LONG_MAX;
	
	long long n_llong
		= LLONG_MAX;

	cout << "[ short" << endl;
	cout << "- " << sizeof n_short << " bytes" << endl;

	cout << endl;

	cout << "[ int" << endl;
	cout << "- " << sizeof n_int << " bytes"<< endl;

	cout << endl;

	cout << "[ long" << endl;
	cout << "- " << sizeof n_long << " bytes"<< endl;

	cout << endl;

	cout << "[ long long" << endl;
	cout << "- " << sizeof n_llong << " bytes"<< endl;

	cout << endl;
	cout << endl;

	cout << "[ int" << endl;
	cout << "- " << sizeof n_int << " bytes"<< endl;

	cout << endl;

	cout << "[ short" << endl;
	cout << "- " << n_short << " bytes"<< endl;

	cout << endl;

	cout << "[ long" << endl;
	cout << "- " << n_long << endl;

	cout << endl;

	cout << "[ long long" << endl;
	cout << "- " << n_llong << endl;

	cout << endl;
	cout << endl;

	system("pause");
}
