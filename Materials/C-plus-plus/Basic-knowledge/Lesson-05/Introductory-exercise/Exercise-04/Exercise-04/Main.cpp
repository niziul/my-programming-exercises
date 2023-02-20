#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void pushups_function(int);

int main()
{
	int amount_of_pushups;

	pushups_function(5);

	cout << endl;
	cout << endl;

	cout << "How many push-ups do you want to do?" << endl;
	cout << ": ";
	cin >> amount_of_pushups;

	cout << endl;
	cout << endl;

	pushups_function(amount_of_pushups);

	cout << endl;
	cout << endl;

	system("pause");
}

void pushups_function(int amount_of_pushups)
{
	cout << "[ Do " << amount_of_pushups << " push-ups! ]" << endl;
}
