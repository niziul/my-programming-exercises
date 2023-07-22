/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			--] Content of total: '6';
			--] Pointed content: '6';

			-

			--] Address of total: '000000F2E02FFC84';
			--] Content of total_ptr: '000000F2E02FFC84';

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			--] Total value: '7';

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	auto total
		= 6;

	auto total_ptr
		= &total;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "--] Content of total: \'" << total << "\';" << endl;
	cout << "--] Pointed content: \'" << *total_ptr << "\';" << endl;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "--] Address of total: \'" << &total << "\';" << endl;
	cout << "--] Content of total_ptr: \'" << total_ptr << "\';" << endl;

	cout << endl;

	cout << "-" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	*total_ptr
		= *total_ptr + 1;

	cout << "--] Total value: \'" << total << "\';" << endl;

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}