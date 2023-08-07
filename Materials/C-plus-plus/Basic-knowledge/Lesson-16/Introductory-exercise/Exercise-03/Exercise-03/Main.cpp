/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			The expression x = 100 has the value = '100';

			The expression x < 3 has the value = '0';

			The expression x > 3 has the value = '1';

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			The expression x < 3 has the value = 'false';

			The expression x > 3 has the value = 'true';

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios_base;
using std::boolalpha;

int main()
{
	auto x
		= new int;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "The expression x = 100 has the value = \'" << (*x = 100) << "\';" << endl;
	
	cout << endl;

	cout << "The expression x < 3 has the value = \'" << (*x < 3) << "\';" << endl;
	
	cout << endl;

	cout << "The expression x > 3 has the value = \'" << (*x > 3) << "\';" << endl;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	cout
		.setf(ios_base::boolalpha);

	cout << "The expression x < 3 has the value = \'" << (*x < 3) << "\';" << endl;

	cout << endl;

	cout << "The expression x > 3 has the value = \'" << (*x > 3) << "\';" << endl;

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	cout
		.unsetf(ios_base::boolalpha);

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete x;

	system("pause");
}