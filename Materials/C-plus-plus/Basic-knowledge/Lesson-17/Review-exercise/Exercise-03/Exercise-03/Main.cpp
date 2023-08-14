/*
	[ description of the third review exercise ] :
		- Is the code fragment below valid? If yes, what will it show on the
		screen?

		]
			cout << boolalpha;
			cout << (cin >> x, x > 0) << endl;
		]

	[ output ] :
		```v1
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			1
			- - ] 'true';

			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```

		```v2
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			0
			- - ] 'false';

			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios_base;

int main()
{
	auto value_x
		= new int;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout
		.setf(ios_base::boolalpha);
	
	cout << "- - ] \'" << (cin >> *value_x, *value_x > 0) << "\';" << endl;

	cout
		.unsetf(ios_base::boolalpha);

	cout << endl;

	delete value_x;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}