#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void alarm_clock();
int read_password();

int main()
{
	cout << endl;
	cout << endl;

	cout << "[ Starting ]" << endl;
	
	cout << endl;
	cout << endl;

	alarm_clock();

	cout << endl;
	cout << endl;

	cout << "what's the password?" << endl;
	cout << ": ";

	int password = read_password();

	cout << endl;
	cout << endl;
}

void alarm_clock()
{
	cout << '\a';
}

int read_password()
{
	int n;

	cin >> n;

	return n;
}
