/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			C++ knows how to repeat.
			C++ knows how to repeat.
			C++ knows how to repeat.
			C++ knows how to repeat.
			C++ knows how to repeat.

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			c++ knows how to stop.

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
	
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	for (auto i = 0; i < 5; i++)
	{
		cout << "C++ knows how to repeat." << endl;
	}
	
	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	cout << "c++ knows how to stop." << endl;;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;
	
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}