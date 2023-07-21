/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - <@>

			- - - - - - - - - - - - - - - - - - - - - - - -

			--] Value of cups: '6'
			--] Address of cups: '00000061860FFC54'

			-

			--] Value of coffee: '4.5'
			--] Address of coffee: '00000061860FFC78'

			- - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	auto cups
		= (int)6;

	auto coffee
		= (double)4.5;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "--] Value of cups: \'" << cups << "\'" << endl;
	cout << "--] Address of cups: \'" << &cups << "\'" << endl;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "--] Value of coffee: \'" << coffee << "\'" << endl;
	cout << "--] Address of coffee: \'" << &coffee << "\'" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}