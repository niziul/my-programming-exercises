/*
	[ output ] :
		```
			Number of Significant Digits
			------------------------ ------------ ------ --- -- -
			--] float       :6
			--] double      :15
			--] long double :15
			------------------------ ------------ ------ --- -- -


			Maximum Exponent Values
			------------------------ ------------ ------ --- -- -
			--] float       :38
			--] double      :308
			--] long double :308
			------------------------ ------------ ------ --- -- -


			Number of Bits in the Mantissa
			------------------------ ------------ ------ --- -- -
			--] float       :24
			--] double      :53
			--] long double :53
			------------------------ ------------ ------ --- -- -
		```
*/

#define next_line "\n";

#include <iostream>
#include <cfloat>

using std::cout;

int main()
{
	cout << "Number of Significant Digits" << next_line;
	cout << "------------------------ ------------ ------ --- -- -" << next_line;
	cout << "--] float       :" << FLT_DIG << next_line;
	cout << "--] double      :" << DBL_DIG << next_line;
	cout << "--] long double :" << LDBL_DIG << next_line;
	cout << "------------------------ ------------ ------ --- -- -" << next_line;

	cout << next_line;
	cout << next_line;

	cout << "Maximum Exponent Values" << next_line;
	cout << "------------------------ ------------ ------ --- -- -" << next_line;
	cout << "--] float       :" << FLT_MAX_10_EXP << next_line;
	cout << "--] double      :" << DBL_MAX_10_EXP << next_line;
	cout << "--] long double :" << LDBL_MAX_10_EXP << next_line;
	cout << "------------------------ ------------ ------ --- -- -" << next_line;

	cout << next_line;
	cout << next_line;

	cout << "Number of Bits in the Mantissa" << next_line;
	cout << "------------------------ ------------ ------ --- -- -" << next_line;
	cout << "--] float       :" << FLT_MANT_DIG << next_line;
	cout << "--] double      :" << DBL_MANT_DIG << next_line;
	cout << "--] long double :" << LDBL_MANT_DIG << next_line;
	cout << "------------------------ ------------ ------ --- -- -" << next_line;

	cout << next_line;
	cout << next_line;

	system("pause");
}