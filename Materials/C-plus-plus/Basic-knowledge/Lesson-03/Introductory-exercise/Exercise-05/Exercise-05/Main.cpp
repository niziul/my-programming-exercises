#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int a, b;

	a = 5;
	b = 2;

	b = a;
	a = b;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}