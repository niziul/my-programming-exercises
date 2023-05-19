/*
	[ output ]:
		```
			<><> - - - - - = - - - - - <><>

			-] Size    : 20
			-] Max size: 41

			<><> - - - - - = - - - - - <><>
		```
*/

#include <iostream>

using std::cout;

int main()
{
	const auto nextline
		= '\n';

	const auto size
		= 5 * sizeof(int);

	const auto max_size
		= rand();

	cout << "<><> - - - - - = - - - - - <><>" << nextline;

	cout << nextline;

	cout << "-] Size    : " << size << nextline;
	cout << "-] Max size: " << max_size << nextline;
	
	cout << nextline;
	
	cout << "<><> - - - - - = - - - - - <><>" << nextline;

	int val[size];

	// int vat[max_size];

	system("pause");
}