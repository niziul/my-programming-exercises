/*
	[ output ] :
		```
			Which bit do you want to test ( ex: 7 )
			: 7


			------------------------ ------------ ------ --- -- -
			--] is turned on!
			------------------------ ------------ ------ --- -- -
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	unsigned bit_mask; 
	unsigned bit_state; 
	unsigned bit_that_the_user_wants_to_tested; // refers to the state of whether a lamp is_on
	
	cout << endl;
	cout << endl;

	cout << "Which bit do you want to test ( ex: 7 )" << endl;
	cout << ": ";
	cin >> bit_that_the_user_wants_to_tested;

	cout << endl;
	cout << endl;

	bit_mask = 1 << bit_that_the_user_wants_to_tested;

	bit_state = 240;

	if (bit_state & bit_mask)
	{
		cout << "------------------------ ------------ ------ --- -- -" << endl;
		cout << "--] is turned on!" << endl;
		cout << "------------------------ ------------ ------ --- -- -" << endl;
	}
	else
	{
		cout << "------------------------ ------------ ------ --- -- -" << endl;
		cout << "--] is not turned on!!" << endl;
		cout << "------------------------ ------------ ------ --- -- -" << endl;
	}
	
	cout << endl;
	cout << endl;
	
	system("pause");
}