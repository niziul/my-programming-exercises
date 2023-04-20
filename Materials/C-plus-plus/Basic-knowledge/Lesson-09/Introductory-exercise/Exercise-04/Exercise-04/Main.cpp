/*
	[ output ] :
		```
			------ --- ------ ------ --- ------
			Type an amount in cents
			------ --- ------ ------ --- ------
			> 210

			------ --- ------ ------ --- ------
			'210' cents corresponds to '2' dollars and '10' cents.
		```
*/

#define nextline '\n'

#include <iostream>

using std::cin;
using std::cout;

int main()
{
	auto cents_per_dollar
		 = 100;
	
	auto value
		 = 0;

	cout << "------ --- ------ ------ --- ------" << nextline;
	cout << "Type an amount in cents" << nextline;
	cout << "------ --- ------ ------ --- ------" << nextline;
	cout << "> ";
	cin >> value;

	cout << nextline;
	
	auto dollars
		 = value / cents_per_dollar;
	
	auto cents
		 = value % cents_per_dollar;
	
	cout << "------ --- ------ ------ --- ------" << nextline;
	cout << "\'" << value << "\' cents corresponds to \'" << dollars << "\' dollars and \'" << cents << "\' cents." << nextline;
	cout << "------ --- ------ ------ --- ------" << nextline;
	
	cout << nextline;
	
	system("pause");
}