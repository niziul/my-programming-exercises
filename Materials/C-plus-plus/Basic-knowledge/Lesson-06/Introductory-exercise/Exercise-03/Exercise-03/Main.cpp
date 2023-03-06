#include <iostream>
#include <climits>

using std::cout;
using std::endl;

int main()
{
	short amount_of_money_pedro_has 
		= SHRT_MAX;
	unsigned short amount_of_money_maria_has
		= SHRT_MAX;

	cout << "------------------------------- --------------- -------- ---- --- -- -" << endl;
	cout << "[ Pedro have " << amount_of_money_pedro_has << " dollars. ]" << endl;
	cout << "------------------------------- --------------- -------- ---- --- -- -" << endl;
	cout << "[ Maria have " << amount_of_money_maria_has << " dollars. ]" << endl;
	cout << "------------------------------- --------------- -------- ---- --- -- -" << endl;

	cout << endl;
	cout << endl;

	cout << "] ------------------------------ Adding 1 dollar each..." << endl;

	amount_of_money_pedro_has += 1;
	amount_of_money_maria_has += 1;

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