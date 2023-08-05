/*
	[ description of the first learning exercise ] :
		- Declare a pointer to integer, allocate memory dynamically and store the number
		100 in that memory. Show the contents pointed to. Ask the user to type a new number
		and store it in the previously allocated memory. Release the dynamically allocated space
		at the end of the program.

		]
			Stored content: 100

			Enter a new value for this memory block: 80
		]


	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			- - ] Stored content: '100';
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			-

			Enter a new value for this memory block: '0000024FBE82BBF0';
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 80

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - ] The value '80' was successfully saved.

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
	auto i_ptr
		= new int;

	*i_ptr
		= 100;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "- - ] Stored content: \'" << *i_ptr << "\';" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "Enter a new value for this memory block: \'" << i_ptr << "\';" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> *i_ptr;

	cout << endl;

	cout << "-" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "- - ] The value \'" << *i_ptr << "\' was successfully saved." << endl;
	
	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	delete i_ptr;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}