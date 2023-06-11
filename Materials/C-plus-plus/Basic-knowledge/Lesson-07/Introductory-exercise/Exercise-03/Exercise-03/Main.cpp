/*
	[ output ] :
		```
			Enter your password: grutie382


			Your password has been stolen!


			jj the "hack" was here!
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	char char_clock = '\a';
	int int_password;

	cout << "Enter your password: _________ \b\b\b\b\b\b\b\b\b\b";
	cin >> int_password;

	cout << endl;
	cout << endl;

	cout << char_clock << "Your password has been stolen!\a" << endl;
	
	cout << endl;
	cout << endl;

	cout << "jj the \"hack\" was here!" << endl;

	cout << endl;
	cout << endl;

	system("pause");
}