/*
	[ output ] :
		```
			<!> - - - - - - - - - - - - - - - - <!>

			--] Length of vector_a: '70'.

			-

			--] Length of string_a: '0'.


			Enter two lines of text
			- - - - - - - - - - - - - - - - - - - -
			:text for the vector_a
			:text for the string_a

			--] Length of vector_a: '21'.

			-

			--] Length of string_a: '21'.

			<!> - - - - - - - - - - - - - - - - <!>
		```
*/

#include <iostream>
#include <string>

using std::cin;
using std::cout;

using std::string;

int main()
{
	auto const nextline
		= '\n';

	char vector_a[30];

	string string_a;

	cout << "<!> - - - - - - - - - - - - - - - - <!>" << nextline;

	cout << nextline;

	cout << "--] Length of vector_a: \'" << strlen(vector_a) << "\'." << nextline;

	cout << nextline;

	cout << "-" << nextline;
	
	cout << nextline;

	cout << "--] Length of string_a: \'" << string_a.size() << "\'." << nextline;

	cout << nextline;
	cout << nextline;

	cout << "Enter two lines of text" << nextline;
	cout << "- - - - - - - - - - - - - - - - - - - -" << nextline;
	cout << ":";
	cin.getline(vector_a, 30);
	cout << ":";
	getline(cin, string_a);

	cout << nextline;

	cout << "--] Length of vector_a: \'" << strlen(vector_a) << "\'." << nextline;

	cout << nextline;

	cout << "-" << nextline;

	cout << nextline;

	cout << "--] Length of string_a: \'" << string_a.size() << "\'." << nextline;

	cout << nextline;

	cout << "<!> - - - - - - - - - - - - - - - - <!>" << nextline;
	
	system("pause");
}