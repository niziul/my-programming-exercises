/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - ] integer value: '1001';
			- - ] memory location: '000001E00158AC50';

			-

			- - ] floating-point value: '500.35';
			- - ] memory location: '000001E00158F750';

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - ] size of pi  = '8'bytes;
			- - ] size of *pi = '4'bytes;
			- - ] size of pd  = '8'bytes;
			- - ] size of *pd = '8'bytes;

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	auto pi
		= new int;

	auto pd
		= new double;

	*pi
		= 1001;

	*pd
		= 500.35;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "- - ] integer value: \'" << *pi << "\';" << endl;
	cout << "- - ] memory location: \'" << pi << "\';" << endl;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "- - ] floating-point value: \'" << *pd << "\';" << endl;
	cout << "- - ] memory location: \'" << pd << "\';" << endl;

	cout << endl;

	cout << "-" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	cout << "- - ] size of pi  = \'" << sizeof(pi) << "\'bytes;" << endl;
	cout << "- - ] size of *pi = \'" << sizeof(*pi) << "\'bytes;" << endl;
	cout << "- - ] size of pd  = \'" << sizeof(pd) << "\'bytes;" << endl;
	cout << "- - ] size of *pd = \'" << sizeof(*pd) << "\'bytes;" << endl;
 
	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}