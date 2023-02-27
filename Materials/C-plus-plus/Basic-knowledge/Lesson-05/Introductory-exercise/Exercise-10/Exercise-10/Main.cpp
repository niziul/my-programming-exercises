#include <iostream>

using std::cout;
using std::endl;

void local_function(void);

/*
	global variables:
*/

int x = 1;
int y = 2;

int main()
{
	cout << endl;
	cout << endl;

	cout << "[ x ] - before:   " << x << ", [ y ] - before:   " << y << endl;

	local_function();

	cout << "[ x ] - after:    " << x << ", [ y ] - after:    " << y << endl;

	cout << endl;
	cout << endl;

	system("pause");
}

void local_function(void)
{
	/*
		local variable:
	*/

	int y;

	x = 3;
	y = 3;

	cout << "[ x ] - inside:   " << x << ", [ y ] - inside:   " << y << endl;
}
