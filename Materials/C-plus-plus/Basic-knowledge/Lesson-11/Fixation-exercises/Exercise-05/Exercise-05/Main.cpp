/*
	[ description of the fifth fixation exercise ] :
		- Build a function that takes a 'string' as a parameter and returns
		the last character of the 'string', regardless of its length. Build a program
		to test the function, as shown below:

		]
			Enter a word: progcomp

			In progcomp the last letter is p.
		]

	[ output ] :
		```
			<> - - - - - - - - - - - - - - - - <>

			Enter a word
			- - - - - - - - - - - - - - - - - - -
			: propcomp

			-

			--] In 'propcomp' the last letter is 'p'.

			<> - - - - - - - - - - - - - - - - <>
		```
*/

#include <iostream>
#include <string>

using std::cin;
using std::cout;

using std::string;

char return_the_last_character_of_this(string);

int main()
{
	auto const nextline
		= '\n';

	string user_word;

	cout << "<> - - - - - - - - - - - - - - - - <>" << nextline;

	cout << nextline;

	cout << "Enter a word" << nextline;
	cout << "- - - - - - - - - - - - - - - - - - -" << nextline;
	cout << ": ";
	cin >> user_word;

	cout << nextline;

	cout << "-" << nextline;

	cout << nextline;
	
	cout << "--] In \'" << user_word << "\' the last letter is \'" << return_the_last_character_of_this(user_word) << "\'." << nextline;

	cout << nextline;

	cout << "<> - - - - - - - - - - - - - - - - <>" << nextline;
	
	system("pause");
}

char return_the_last_character_of_this(string value)
{
	auto index_of_the_last_char
		= value.length() - 1;

	return value[index_of_the_last_char];
}
