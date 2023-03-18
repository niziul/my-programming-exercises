/*
	[ description of the second fixation exercise ] :
		- Write a program that gives an audible warning signal and asks for a numeric password.
		  password. The program should use one function to emit the warning signal and another
		  function to read and return the password. The main function should take care of all the other
		  tasks. Use the underscore character to indicate the location (and number of digits) of the password.
		  of the password.

	[ output ] :
		```
			===---======---======---======---======---======---===
			-] Starting with a sound ();
			===---======---======---======---======---======---===


			Enter your passworld: strongp2


			===---======---======---======---======---======---===
			Thanks! Your passworld "strongp2" is safe! _(-_-)_/
			===---======---======---======---======---======---===
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::string;

void sound_an_audible_alert();

string ask_the_user_for_a_password_and_return_the_value();

int main()
{
	string user_passworld;

	cout << "===---======---======---======---======---======---===" << endl;
	sound_an_audible_alert();
	cout << "-] Starting with a sound ();" << endl;
	sound_an_audible_alert();
	cout << "===---======---======---======---======---======---===" << endl;

	cout << endl;
	cout << endl;
	
	user_passworld = ask_the_user_for_a_password_and_return_the_value();
	
	cout << endl;
	cout << endl;

	cout << "===---======---======---======---======---======---===" << endl;
	cout << "Thanks! Your passworld \"" << user_passworld << "\" is safe! \_(-_-)_/" << endl;
	cout << "===---======---======---======---======---======---===" << endl;

	cout << endl;
	cout << endl;


	system("pause");
}

void sound_an_audible_alert()
{
	cout << "\a";
}

string ask_the_user_for_a_password_and_return_the_value()
{
	string value;

	cout << "Enter your passworld: ******** \b\b\b\b\b\b\b\b\b";
	cin >> value;

	return value;
}
