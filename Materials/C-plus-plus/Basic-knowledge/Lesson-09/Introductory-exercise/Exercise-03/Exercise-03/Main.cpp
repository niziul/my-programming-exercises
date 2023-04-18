/*
	[ output ] :
		```
			-- -- -- -- ----- -- -- -- --
			Integer Division
			-] 9 / 5 = 1
			-- -- -- -- ----- -- -- -- --

			-- -- -- -- ----- -- -- -- --
			Floating-Point Division
			-] 9.0 / 5.0 = 1.800000
			-- -- -- -- ----- -- -- -- --

			-- -- -- -- ----- -- -- -- --
			Mixed Division
			-] 9.0 / 5 = 1.800000
			-- -- -- -- ----- -- -- -- --


			-- -- -- -- ----- -- -- -- --
			Double constants
			-] 1e7 / 9.0 = 1111111.111111
			-- -- -- -- ----- -- -- -- --

			-- -- -- -- ----- -- -- -- --
			Float constants
			-] 1e7f / 9.0f = 1111111.125000
			-- -- -- -- ----- -- -- -- --
		```
*/

#define nextline '\n'

#include <iostream>

using std::cout;

int main()
{
	cout
		.setf(std::ios_base::fixed);

	cout << nextline;

	cout << "-- -- -- -- ----- -- -- -- --" << nextline;

	cout << "Integer Division" << nextline;
	cout << "-] 9 / 5 = " << 9 / 5 << nextline;

	cout << "-- -- -- -- ----- -- -- -- --" << nextline;
	
	cout << nextline;

	cout << "-- -- -- -- ----- -- -- -- --" << nextline;

	cout << "Floating-Point Division" << nextline;
	cout << "-] 9.0 / 5.0 = " << 9.0 / 5.0 << nextline;

	cout << "-- -- -- -- ----- -- -- -- --" << nextline;

	cout << nextline;

	cout << "-- -- -- -- ----- -- -- -- --" << nextline;

	cout << "Mixed Division" << nextline;
	cout << "-] 9.0 / 5 = " << 9.0 / 5 << nextline;

	cout << "-- -- -- -- ----- -- -- -- --" << nextline;

	cout << nextline;
	cout << nextline;

	cout << "-- -- -- -- ----- -- -- -- --" << nextline;

	cout << "Double constants" << nextline;
	cout << "-] 1e7 / 9.0 = " << 1e7 / 9.0 << nextline;

	cout << "-- -- -- -- ----- -- -- -- --" << nextline;

	cout << nextline;

	cout << "-- -- -- -- ----- -- -- -- --" << nextline;

	cout << "Float constants" << nextline;
	cout << "-] 1e7f / 9.0f = " << 1e7f / 9.0f << nextline;

	cout << "-- -- -- -- ----- -- -- -- --" << nextline;

	cout << nextline;

	cout
		.unsetf(std::ios_base::fixed);

	system("pause");
}