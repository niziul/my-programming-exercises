/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - ] values[1] = '0.5';

			-

			- - ] values[0] = '0.5';
			- - ] values[1] = '0.8';

			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	auto values
		= new double[3];

	values[0]
		= 0.2;

	values[1]
		= 0.5;

	values[2]
		= 0.8;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "- - ] values[1] = \'" << values[1] << "\';" << endl;

	values
		= values + 1;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "- - ] values[0] = \'" << values[0] << "\';" << endl;
	cout << "- - ] values[1] = \'" << values[1] << "\';" << endl;

	values
		= values - 1;

	delete [] values;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}