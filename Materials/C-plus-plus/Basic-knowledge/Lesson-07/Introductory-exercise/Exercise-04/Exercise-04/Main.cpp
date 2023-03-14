#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	bool honk = false;											// horn turned off

	cout << "--------------- ---------- ----- -- -" << endl;
	cout << "To honk?" << endl;									// reading a boolean
	cout << "--------------- ---------- ----- -- -" << endl;
	cout << "[ true = 1 | false = 0 ] : ";
	cin >> honk;

	cout << endl;
	cout << endl;

	if (honk == true)
	{
		cout << "--] honk\a \a \a \a \a" << endl;
	}
	else
	{
		cout << "--] silence" << endl;
	}

	cout << endl;
	cout << endl;

	system("pause");
}