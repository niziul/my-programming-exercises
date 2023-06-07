/*
	[ output ] :
		```
			A c++ program always starts with the main function.

			Functions can also be invoked from the maain function.
			Functions can also be invoked from other functions.
			Functions can also be invoked more than once.
		```
*/

#include <iostream>

using std::cout;
using std::endl;

void another_function(void);
void auxiliary_function(void);

int main()
{
	cout << "A c++ program "
		 << "always starts with the "
		 << "main function.";

	cout << endl;
	cout << endl;

	another_function();

	auxiliary_function();

	cout << "more than once.";

	cout << endl;
	cout << endl;

	system("pause");
}

void another_function(void)
{
	cout << "Functions can also "
		 << "be invoked from "
		 << "the maain function.";

	cout << endl;

	auxiliary_function();

	cout << "from other "
		 << "functions.";

	cout << endl;
}

void auxiliary_function(void)
{
	cout << "Functions can also "
		 << "be invoked ";
}
