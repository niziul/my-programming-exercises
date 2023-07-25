/*
	[ description of the second fixation exercise ] :
		- Create a variable of type 'char' initialized to the character 'A' and a pointer
		that points to this variable. Modify the variable created using the pointer, so that
		its content change to 'B'. Finally, show the contents of the variable and the contents
		pointed to by the pointer.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - ] variable: 'B';
			- - ] pointer: 'B';

			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	auto value
		= 'A';

	auto value_ptr
		= &value;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	*value_ptr
		= 'B';

	cout << "- - ] variable: \'" << value << "\';" << endl;
	cout << "- - ] pointer: \'" << *value_ptr << "\';" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}