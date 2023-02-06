#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int carrots;

	cout << "How many carrots do you have?" << endl;

	cin >> carrots;

	cout << "Here are two more." << endl;

	carrots = carrots + 2;

	cout << "Now you have " << carrots << " carrots." << endl;

	return 0;
}