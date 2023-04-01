/*
	[ description of the fifth fixation exercise ] :
		- Find out what the system does when we try to store values larger than the capacity
		  of floating point variables. Build a program to do the test.

	[ output ] :
		```

		```
*/

#include <iostream>

int main()
{
	// extrapolates the number of significant digits of the mantissa.
	auto float_1 = (float)24980154.845f;
	// extrapolates the greatest possible exponent.
	auto float_2 = (float)2E+40;

	// extrapolates the number of significant digits of the mantissa.
	auto double_1 = (double)2938493849584733847.394;
	// extrapolates the greatest possible exponent.
	auto double_2 = (double)2E+315;

	system("pause");
}