/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Value - 1:
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 4

			-

			Value - 2:
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 3

			-

			Value - 3:
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 4

			-

			Value - 4:
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 3

			-

			Value - 5:
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 4

			-


			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - ] sum = '18';

			- - ] average = '3.6';

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	auto number
		= (double)0;

	auto sum
		= (double)0;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	for (auto i = 1; i <= 5; ++i)
	{
		cout << "Value - " << i << ":" << endl;

		cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
		cout << ": ";
		cin >> number;

		sum += number;

		cout << endl;

		cout << "-" << endl;
		
		cout << endl;
	}

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	cout << "- - ] sum = \'" << sum << "\';" << endl;

	cout << endl;

	cout << "- - ] average = \'" << sum / 5 << "\';" << endl;

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}