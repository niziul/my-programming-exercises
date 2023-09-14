/*
	[ output ] :
		```
		<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

		Type, and I'll repeat it.
		- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

		I'm very happy
		J(n!wfsz!ibqqz
		in using this wonderful computer.
		jo!vtjoh!uijt!xpoefsgvm!dpnqvufs
		-

		] Please, forgive the confusion.

		<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	auto temp
		= new char;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Type, and I'll repeat it." << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	while ((*temp = cin.get()) != '.')
	{
		if (*temp == '\n')
		{
			cout << *temp;
		}
		else
		{
			cout << ++(*temp);
		}
	}

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "] Please, forgive the confusion." << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete temp;

	cout << endl;

	cin
		.get();
}