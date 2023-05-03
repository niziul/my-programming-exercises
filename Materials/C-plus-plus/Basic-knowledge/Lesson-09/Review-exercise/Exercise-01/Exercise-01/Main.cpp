/*
	[ output ] :
		```
			--
			value ('long'): 2009032809
			--

			--
			iostream::scientific

			value ('float'): 2.009033e+09
			value ('double'): 2.009033e+09
			--

			--
			iostream::fixed

			value ('float'): 2009032832
			value ('double'): 2009032809
			--
		```
*/

#include <iostream>

using std::cout;

int main()
{
	auto nextline
		= '\n';

	auto value_a
		= (long)2'009'032'809;

	auto value_b
		= (float)value_a;

	auto value_c
		= (double)value_a;

	cout << nextline;

	cout << "--" << nextline;

	cout << "value (\'long\'): " << value_a << nextline;
	
	cout << "--" << nextline;

	cout << nextline;

	cout
		.setf(std::iostream::scientific);
	
	cout << "--" << nextline;

	cout << "iostream::scientific" << nextline;

	cout << nextline;

	cout << "value (\'float\'): " << value_b << nextline;
	cout << "value (\'double\'): " << value_c << nextline;

	cout << "--" << nextline;
	
	cout
		.unsetf(std::iostream::scientific);

	cout << nextline;
	
	cout
		.setf(std::iostream::fixed);

	cout << "--" << nextline;

	cout << "iostream::fixed" << nextline;

	cout << nextline;

	cout
		.precision(0);

	cout << "value (\'float\'): " << value_b << nextline;
	cout << "value (\'double\'): " << value_c << nextline;

	cout << "--" << nextline;

	cout
		.unsetf(std::iostream::fixed);

	cout << nextline;

	cout << nextline;
	
	system("pause");
}