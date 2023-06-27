/*
	[ description of the fifth learning exercise ] :
		- Ask the user to enter his first and last name together and display
		them separately in a sentence, as in the example bellow:

		]
			Enter your first and last name below
			: Joao Silva

			Good morning, Mr. Silva. Or should I call you Joao?
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter your first and last name bellow
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: Joao Silva

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			--] Good morning, Mr.'Silva'. Or should I call you 'Joao'?

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;

int main()
{
	auto const nextline
		= '\n';

	char first_name[10]{};

	char last_name[10]{};
	
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << nextline;

	cout << nextline;

	cout << "Enter your first and last name bellow" << nextline;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << nextline;
	cout << ": ";
	cin >> first_name;
	cin
		.get();
	cin >> last_name;

	cout << nextline;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << nextline;
	
	cout << nextline;

	cout << "--] Good morning, Mr.\'" << last_name << "\'. Or should I call you \'" << first_name << "\'?" << nextline;

	cout << nextline;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << nextline;
	
	cout << nextline;
	
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << nextline;

	system("pause");
}