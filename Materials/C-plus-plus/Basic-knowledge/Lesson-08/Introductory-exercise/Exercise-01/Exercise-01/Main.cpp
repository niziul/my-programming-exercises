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

#include <iostream>
#include <cfloat>

using std::cout;
using std::endl;

int main()
{
	cout << "Number of Significant Digits" << endl;
	cout << "------------------------ ------------ ------ --- -- -" << endl;
	cout << "--] float	:"		<< FLT_DIG << endl;
	cout << "--] double	:"		<< DBL_DIG << endl;
	cout << "--] long double :" << LDBL_DIG << endl;
	cout << "------------------------ ------------ ------ --- -- -" << endl;

	cout << endl;
	cout << endl;

	cout << "Maximum Exponent Values" << endl;
	cout << "------------------------ ------------ ------ --- -- -" << endl;
	cout << "--] float	:"		<< FLT_MAX_10_EXP << endl;
	cout << "--] double	:"		<< DBL_MAX_10_EXP << endl;
	cout << "--] long double :" << LDBL_MAX_10_EXP << endl;
	cout << "------------------------ ------------ ------ --- -- -" << endl;

	cout << endl;
	cout << endl;

	cout << "Number of Bits in the Mantissa" << endl;
	cout << "------------------------ ------------ ------ --- -- -" << endl;
	cout << "--] float	:"		<< FLT_MANT_DIG << endl;
	cout << "--] double	:"		<< DBL_MANT_DIG << endl;
	cout << "--] long double :" << LDBL_MANT_DIG << endl;
	cout << "------------------------ ------------ ------ --- -- -" << endl;

	cout << endl;
	cout << endl;

	system("pause");
}