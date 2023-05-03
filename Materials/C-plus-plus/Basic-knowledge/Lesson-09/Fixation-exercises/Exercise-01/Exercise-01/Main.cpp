/*
	[ description of the first fixation exercise ] :
		- Suppose that 'value_x1' and 'value_x2' are two variables of type 'double' that
		  you want to add as integers and assign to a variable of type 'int'. Construct
		  a c++ statement that does this using 'type cast'.

	[ output ] :
		```
			- -- -- --- - --- -- -- -
			Enter the value x1
			> 25.5

			Enter the value x2
			> 3.7

			- -- -- -- -- -- -- -- -- --- - --- -- -- -- -- -- -- -- -- -
			The integer sum of the values '25.5' and '3.7' is : '28'
			- -- -- -- -- -- -- -- -- --- - --- -- -- -- -- -- -- -- -- -
		```
*/

#include <iostream>

using std::cout;
using std::cin;

int main()
{
	auto nextline
		= '\n';

	auto sum
		= (int)0;

	auto value_x1
		= (double)0;

	auto value_x2
		= (double)0;

	cout << "- -- -- --- - --- -- -- -" << nextline;

	cout << "Enter the value x1" << nextline;
	cout << "> ";
	cin >> value_x1;

	cout << nextline;
	
	cout << "Enter the value x2" << nextline;
	cout << "> ";
	cin >> value_x2;

	cout << nextline;
	
	cout << "- -- -- -- -- -- -- -- -- --- - --- -- -- -- -- -- -- -- -- -" << nextline;
	
	sum
		= (int)value_x1 + (int)value_x2;

	cout << "The integer sum of the values " << "\'" << value_x1 << "\'" << " and " << "\'" << value_x2 << "\'" << " is : " << "\'" << sum << "\'" << nextline;

	cout << "- -- -- -- -- -- -- -- -- --- - --- -- -- -- -- -- -- -- -- -" << nextline;

	system("pause");
}