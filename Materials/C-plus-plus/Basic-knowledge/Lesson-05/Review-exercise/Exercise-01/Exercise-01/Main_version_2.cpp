#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void alarm_clock();
void read_password();

int main()
{
	cout << endl;
	cout << endl;

	alarm_clock();

	cout << endl;
	cout << endl;

	read_password();

	cout << endl;
	cout << endl;
}

void alarm_clock()
{
	cout << "[ Starting ]" << endl;
	cout << '\a';
}

void read_password()
{
	cout << "what's the password?" << endl;
	cout << ": ";

	int password;

	cin >> password;
}
