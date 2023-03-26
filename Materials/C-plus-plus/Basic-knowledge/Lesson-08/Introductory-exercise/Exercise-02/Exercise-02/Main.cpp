/*
	[ output ] :
		```
			------------------------ ------------ ------ --- -- -
			float value = 6.1
			------------------------ ------------ ------ --- -- -

			------------------------ ------------ ------ --- -- -
			float value = 6.09999990
			------------------------ ------------ ------ --- -- -
		```
*/

#define next_line '\n';

#include <iostream>

using std::cout;

using std::ios_base;

int main()
{
	float float_value = 6.1f;

	cout << "------------------------ ------------ ------ --- -- -" << next_line;
	cout << "float value = " << float_value << next_line;
	cout << "------------------------ ------------ ------ --- -- -" << next_line;

	cout << next_line;

	cout.setf(ios_base::fixed,
			  ios_base::floatfield);

	cout.precision(8);
	
	cout << "------------------------ ------------ ------ --- -- -" << next_line;
	cout << "float value = " << float_value << next_line;
	cout << "------------------------ ------------ ------ --- -- -" << next_line;

	cout << next_line;
	
	system("pause");
}