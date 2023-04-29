/*
	[ output ] :
		```
			+-- -- -- -- ---+--- -- -- -- --+

			-] three: 3.000000
			-] bet  : 3
			-] debit: 1634811904

			+-- -- -- -- ---+--- -- -- -- --+
		```
*/

#include <iostream>

using std::cout;

int main()
{
	auto nextline = '\n';
	
	cout
		.setf(std::iostream::fixed);

	float three
		= 3.0f;

	int bet
		= 3.9832;

	int debit
		= 7.2E12;

	cout << "+-- -- -- -- ---+--- -- -- -- --+" << nextline;

	cout << nextline;

	cout << "-] three: " << three << nextline;
	cout << "-] bet  : " << bet << nextline;
	cout << "-] debit: " << debit << nextline;

	cout << nextline;
	
	cout << "+-- -- -- -- ---+--- -- -- -- --+" << nextline;

	cout
		.unsetf(std::iostream::fixed);

	cout << nextline;

	system("pause");
}