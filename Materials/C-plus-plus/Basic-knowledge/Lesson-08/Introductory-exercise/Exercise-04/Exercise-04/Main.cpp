/*
	[ output ] :
		```
			------------------------ ------------ ------ --- -- -
			--] a_value = 2.34e+08
			------------------------ ------------ ------ --- -- -
			------------------------ ------------ ------ --- -- -
			--] b_value - a_value = 0
			------------------------ ------------ ------ --- -- -
		```
*/

#define next_line '\n';

#include <iostream>

using std::cout;

int main()
{
	auto a_value = 2.34E+8;
	auto b_value = (float)(1.0f + a_value);

	cout << "------------------------ ------------ ------ --- -- -" << next_line;
	cout << "--] a_value = " << a_value << next_line;
	cout << "------------------------ ------------ ------ --- -- -" << next_line;

	cout << "------------------------ ------------ ------ --- -- -" << next_line;
	cout << "--] b_value - a_value = " << b_value - a_value << next_line;
	cout << "------------------------ ------------ ------ --- -- -" << next_line;

	cout << next_line;
	cout << next_line;

	system("pause");
}