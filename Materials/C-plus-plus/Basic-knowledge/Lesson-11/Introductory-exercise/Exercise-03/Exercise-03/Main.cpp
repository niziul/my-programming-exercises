/*
	[ output ] :
		```
			<*> - - - - - - - - - - - - - - - - - - - - <*>

			Enter with your name
			- - - - - - - - - - - - - - - - - - - - - - - -
			: João Machado

			Enter your favorite dessert
			- - - - - - - - - - - - - - - - - - - - - - - -
			:
			--] I have a 'Machado' for you, 'Joao'.

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
	cin >> name; // read only one word

	cout << nextline;
	
	cout << "Enter your favorite dessert" << nextline;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << nextline;
	cout << ": ";
	cin >> dessert;

	cout << nextline;
	
	cout << "--] I have a \'" << dessert << "\' for you, \'" << name << "\'." << nextline;

	cout << nextline;

	cout << "<*> - - - - - - - - - - - - - - - - - - - - <*>" << nextline;
	
	system("pause");
}