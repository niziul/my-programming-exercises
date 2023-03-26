/*
	[ output ] :
		```
			------------------------ ------------ ------ --- -- -
			--] float_value = 3.333333 * one million = 3333333.253860
			------------------------ ------------ ------ --- -- -


			------------------------ ------------ ------ --- -- -
			--] double_value = 3.333333 * one million = 3333333.333333
			------------------------ ------------ ------ --- -- -
		```
*/

#define next_line '\n';

#include <iostream>

using std::cout;

using std::ios_base;

int main()
{
	cout.setf(ios_base::fixed, ios_base::floatfield);

	auto one_million = 1.0e6;

	auto dbl_value = 10.0 / 3.0;
	auto flt_value = 10.0f / 3.0f;

	cout << "------------------------ ------------ ------ --- -- -" << next_line;
	cout << "--] float_value = " << flt_value << " * one million = " << one_million * flt_value << next_line;
	cout << "------------------------ ------------ ------ --- -- -" << next_line;

	cout << next_line;
	cout << next_line;

	cout << "------------------------ ------------ ------ --- -- -" << next_line;
	cout << "--] double_value = " << dbl_value << " * one million = " << one_million * dbl_value << next_line;
	cout << "------------------------ ------------ ------ --- -- -" << next_line;

	cout << next_line;
	cout << next_line;

	system("pause");
}