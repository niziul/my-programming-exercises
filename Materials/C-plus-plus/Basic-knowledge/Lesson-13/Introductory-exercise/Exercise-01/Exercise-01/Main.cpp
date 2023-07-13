/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - <@>

			--] value_a: 'A';

			- - - - - - - - - - - - - - - - - - - - - - - -

			--] value_b: '45435';

			--] value_a: '{';

			- - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;
using std::endl;

union identifier
{
	char   value_a;
	int	   value_b;
	double value_c;
};

int main()
{
	auto id
		= identifier{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	id
		.value_a = 'A';

	cout << "--] value_a: \'" << id.value_a << "\';" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	id
		.value_b = 45435;

	cout << "--] value_b: \'" << id.value_b << "\';" << endl;

	cout << endl;

	cout << "--] value_a: \'" << id.value_a << "\';" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}