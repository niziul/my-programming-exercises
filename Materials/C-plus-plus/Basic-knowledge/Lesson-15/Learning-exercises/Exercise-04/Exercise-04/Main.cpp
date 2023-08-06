/*
	[ description of the fourth learning exercise ] :
		- Define an 'ascii' struct that stores a char and an associated integer value.
		Create a function that receives an integer value and a char, and returns the address
		of an element of type 'ascii', dynamically allocated in memory. The main program should
		call the function passing values read from the user, receive the return in a pointer, display
		the return values and delete the memory that was allocated inside the function.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter a char below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: X

			-

			Enter a int below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 88

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - ] ascii: 'X' = '88';

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct st_ascii
{
	char c_value;
	int i_value;
};

st_ascii* return_a_st_ascii(char, int);

int main()
{
	auto ascii
		= new st_ascii;

	auto c_value
		= new char;

	auto i_value
		= new int;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter a char below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> *c_value;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "Enter a int below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> *i_value;

	cout << endl;

	cout << "-" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	ascii
		= return_a_st_ascii(*c_value, *i_value);
	
	cout << endl;
	
	cout << "- - ] ascii: \'" << ascii->c_value << "\' = \'" << ascii->i_value << "\';" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete ascii;
	delete c_value;
	delete i_value;

	system("pause");
}

st_ascii* return_a_st_ascii(char c_value, int i_value)
{
	auto ascii_ptr
		= new st_ascii;

	*ascii_ptr
		= st_ascii
		{
			c_value,
			i_value
		};

	return ascii_ptr;
}