#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	char unknown;

	int hours_that_the_user_has_entered_h;
	int hours_that_the_user_has_entered_m;

	cout << "What time ( ex: 10 : 54 ) is it?";
	
	cout << endl;

	cout << "- ";
	
	cin >> hours_that_the_user_has_entered_h >> unknown >> hours_that_the_user_has_entered_m;

	cout << endl;

	cout << "[ Your clock is running late! ]";

	cout << " - it's now " << hours_that_the_user_has_entered_h + 1 << "h" << unknown << hours_that_the_user_has_entered_m << "m";

	cout << endl;
	
	return 0;
}