/*
	[ output ] :
		```
			8
		```
*/

#include <iostream>

int num;

int f();
int g();

int main()
{
	using std::cout;
	using std::endl;

	num = 1;
	
	cout << f() + g() + num << endl;

	system("pause");
}

int f()
{
	return num = num + 3;
}

int g()
{
	return num = 2;
}