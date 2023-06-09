/*
	[ output ] :
		```
			------------------------------- --------------- -------- ---- --- -- -
			[ Pedro have 0 dollars. ]
			------------------------------- --------------- -------- ---- --- -- -
			[ Maria have 0 dollars. ]
			------------------------------- --------------- -------- ---- --- -- -


			] ------------------------------ Taking 1 dollar each...


			------------------------------- --------------- -------- ---- --- -- -
			[ Now Pedro have -1 dollars. ]
			------------------------------- --------------- -------- ---- --- -- -
			[ Now Maria have 65535 dollars. ]
			------------------------------- --------------- -------- ---- --- -- -
		```
*/

#include <iostream>
#include <climits>

#define ZERO 0;

using std::cout;
using std::endl;

int main()
{
	short amount_of_money_pedro_has
		= ZERO;
	unsigned short amount_of_money_maria_has
		= ZERO;

	cout << "------------------------------- --------------- -------- ---- --- -- -" << endl;
	cout << "[ Pedro have " << amount_of_money_pedro_has << " dollars. ]" << endl;
	cout << "------------------------------- --------------- -------- ---- --- -- -" << endl;
	cout << "[ Maria have " << amount_of_money_maria_has << " dollars. ]" << endl;
	cout << "------------------------------- --------------- -------- ---- --- -- -" << endl;

	cout << endl;
	cout << endl;

	cout << "] ------------------------------ Taking 1 dollar each..." << endl;

	amount_of_money_pedro_has -= 1;
	amount_of_money_maria_has -= 1;

	cout << endl;
	cout << endl;

	cout << "------------------------------- --------------- -------- ---- --- -- -" << endl;
	cout << "[ Now Pedro have " << amount_of_money_pedro_has << " dollars. ]" << endl;
	cout << "------------------------------- --------------- -------- ---- --- -- -" << endl;
	cout << "[ Now Maria have " << amount_of_money_maria_has << " dollars. ]" << endl;
	cout << "------------------------------- --------------- -------- ---- --- -- -" << endl;

	cout << endl;
	cout << endl;

	system("pause");
}