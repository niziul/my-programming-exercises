/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter the counter value below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 5

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			[i] = '5'

			[i] = '4'

			[i] = '3'

			[i] = '2'

			[i] = '1'

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - ] Finished now that i = '0';

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	auto limit
		= 0;

	auto i
		= 0;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter the counter value below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> limit;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	for (i = limit; i; i--)
	{
		cout << "[i] = \'" << i << "\'\n" << endl;
	}

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "- - ] Finished now that i = \'" << i << "\';" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}