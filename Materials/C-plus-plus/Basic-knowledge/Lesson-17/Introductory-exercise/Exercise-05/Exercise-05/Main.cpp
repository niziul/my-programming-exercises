/*
	[ output ] :
		```
		<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

		Enter a word below
		- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
		: aluno

		-

		- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

		- - ] 'onula';

		- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

		<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	auto temp
		= new char;
	
	auto word
		= new char[20];

	auto i
		= new int;

	auto j
		= new int;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter a word below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> word;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	for (*j = 0, *i = strlen(word) - 1; *j < *i; --*i, ++*j)
	{
		*temp
			= *(word + *i);

		*(word + *i)
			= *(word + *j);

		*(word + *j)
			= *temp;
	}

	
	cout << "- - ] \'" << word << "\';" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete temp;
	delete[] word;
	delete i;
	delete j;

	system("pause");
}