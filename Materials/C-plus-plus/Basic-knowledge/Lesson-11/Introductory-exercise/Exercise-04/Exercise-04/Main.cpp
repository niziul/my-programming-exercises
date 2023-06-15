/*
	[ output ] :
		```
			<*> - - - - - - - - - - - - - - - - - - - - <*>

			Enter with your name
			- - - - - - - - - - - - - - - - - - - - - - - -
			: João Machado

			Enter your favorite dessert
			- - - - - - - - - - - - - - - - - - - - - - - -
			: Ice-cream

			- - - - - - - - - - - - - - - - - - - - - - - -
			--] I have a 'Ice-cream' for you, 'Joao Machado'.

			<*> - - - - - - - - - - - - - - - - - - - - <*>
		```
*/

#include <iostream>

using std::cin;
using std::cout;

int main()
{
	auto const nextline
		= '\n';

	auto const vector_size
		= 20;

	char name[vector_size];

	char dessert[vector_size];

	cout << "<*> - - - - - - - - - - - - - - - - - - - - <*>" << nextline;

	cout << nextline;

	cout << "Enter with your name" << nextline;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << nextline;
	cout << ": ";
	cin.getline(name, vector_size);

	cout << nextline;

	cout << "Enter your favorite dessert" << nextline;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << nextline;
	cout << ": ";
	cin.getline(dessert, vector_size);

	cout << nextline;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << nextline;
	cout << "--] I have a \'" << dessert << "\' for you, \'" << name << "\'." << nextline;

	cout << nextline;

	cout << "<*> - - - - - - - - - - - - - - - - - - - - <*>" << nextline;

	system("pause");
}