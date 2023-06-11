/*
	[ output ] :
		```
			Do you want to turn off which bit ( ex: 3 )
			: 3


			Pattern of the bits that represent the lamp status:
			------------------------ ------------ ------ --- -- -
			"252" [ 1 1 1 1 0 1 0 0 ] ( 1 = lamp on | 0 = lamp off )
			------------------------ ------------ ------ --- -- -
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	unsigned char bit_mask;
	unsigned char bit_state;
	unsigned char bit_that_the_user_wants_to_turn_on;

	cout << endl;
	cout << endl;

	cout << "Do you want to turn off which bit ( ex: 3 )" << endl;
	cout << ": ";
	cin >> bit_that_the_user_wants_to_turn_on;

	cout << endl;
	cout << endl;

	bit_mask = ~(1 << bit_that_the_user_wants_to_turn_on);

	bit_state = 252 & bit_mask;

	cout << "Pattern of the bits that represent the lamp status:" << endl;

	cout << "------------------------ ------------ ------ --- -- -" << endl;
	cout << "\"" << (int16_t)bit_state << "\" [ 1 1 1 1 0 1 0 0 ] ( 1 = lamp on | 0 = lamp off )" << endl;
	cout << "------------------------ ------------ ------ --- -- -" << endl;

	cout << endl;
	cout << endl;

	system("pause");
}