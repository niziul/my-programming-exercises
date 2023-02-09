#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int multiplication_table_number;

	cout << "Which multiplication table would you like to see?" << endl;
	cout << ": ";
	cin >> multiplication_table_number;

	for (int i = 0; i < 11; i++)
	{
		cout << multiplication_table_number << " x " << i << " = " << multiplication_table_number * i << endl;
	}

	return 0;
}