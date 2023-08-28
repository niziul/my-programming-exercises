/*
	[ description of the third learning exercise ] :
		- Build a program that asks the user to type a text, ending the input only
		when the '@' character is read. After '@' is read, display the text received.

		]
			Enter a text:

			I sent a message to @joaozinho about this problem.

			I sent a message to
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter a text below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: I sent a message to @joaozinho about this problem.

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - ] 'I sent a message to';

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	auto text
		= new char[80];

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter a text below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin.getline(text, 80);

	cout << endl;
	cout << "-" << endl;
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;
	
	cout << "- - ] \'";

	for (auto i = 0; *(text + (i + 1)) != '@'; i++)
	{
		cout << *(text + i);
	}

	cout << "\';";
	cout << endl;
	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;
	
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete[] text;

	system("pause");
}