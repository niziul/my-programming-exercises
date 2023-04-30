/*
	[ output ] :
		```
			]--- ---- --__-- ---- ---[

			> value_a = '299963289945'
			> value_b = '-963462912'
			> value_c = '200900000000'
			> value_d = '20090000000000'

			]--- ---- __--__ ---- ---[
		```
*/

#include <iostream>

using std::cout;

int main()
{
	auto nextline
		= '\n';

	long long value_a;
	long long value_b;
	long long value_c;
	long long value_d;

	value_a
		= 299963289945;

	value_b
		= 100'000'000 * 2009; // overflow

	value_c
		= 100'000'000LL * 2009;

	value_d
		= 10'000'000'000 * 2009;

	cout << "]--- ---- --__-- ---- ---[" << nextline;

	cout << nextline;

	cout << "> value_a: \'" << value_a << "\'" << nextline;
	cout << "> value_b: \'" << value_b << "\'" << nextline;
	cout << "> value_c: \'" << value_c << "\'" << nextline;
	cout << "> value_d: \'" << value_d << "\'" << nextline;

	cout << nextline;

	cout << "]--- ---- __--__ ---- ---[" << nextline;

	cout << nextline;

	system("pause");
}