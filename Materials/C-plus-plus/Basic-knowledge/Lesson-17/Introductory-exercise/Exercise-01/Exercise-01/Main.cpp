/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter an integer value below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			:30

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			Counting from '30' in '30'
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- 0;
			- 30;
			- 60;
			- 90;

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	auto step
		= new int;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter an integer value below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ":";
	cin >> *step;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "Counting from \'" << *step << "\' in \'" << *step << "\'" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;
	
	for (auto i = 0; i < 100; i = i + *step)
	{
		cout << "- " << i << ";" << endl;
	}

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete step;

	system("pause");
}