#include <iostream>

using std::cout;
using std::endl;

#define ZERO 0;

int main()
{
	int total = ZERO;

	cout << "Initially total = " << total << " (ZERO)" << endl;

	cout << endl;
	cout << endl;

	total = 50;

	cout << "After total \u0022assignment\u0022 = " << total << endl;

	cout << endl;
	cout << endl;

	return ZERO;

	system("pause");
}