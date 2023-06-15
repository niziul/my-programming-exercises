/*
	[ output ] :
		```
			<,> - - - - - - - - - - - - - - - - - - - - <,>

			Hello! I am C++owboy! What is your name?
			- - - - - - - - - - - - - - - - - - - - - - - -
			: Andre

			--] Well, Andre, your name has '5' letters and
			is stored in a '15' bytes.

			-

			Your initial is 'A'

			-

			My nickname is 'C++'.

			-

			<,> - - - - - - - - - - - - - - - - - - - - <,>
		```
*/

#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::strlen;

int main()
{
	auto const nextline
		= '\n';

	auto const size
		= 15;

	char name[size];
	
	char nickname[size]
		= "C++owboy";

	cout << "<,> - - - - - - - - - - - - - - - - - - - - <,>" << nextline;

	cout << nextline;

	cout << "Hello! I am " << nickname << "! What is your name?" << nextline;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << nextline;
	cout << ": ";
	cin >> name;

	cout << nextline;
	
	cout << "--] Well, " << name << ", your name has \'" << strlen(name) << "\' letters and" << nextline;
	cout << "is stored in a \'" << sizeof(name) << "\' bytes." << nextline;

	cout << nextline;

	cout << "-" << nextline;

	cout << nextline;
	
	cout << "Your initial is \'" << name[0] << "\'" << nextline;

	cout << nextline;

	cout << "-" << nextline;

	cout << nextline;

	nickname[3]
		= '\0';

	cout << "My nickname is \'" << nickname << "\'." << nextline;
	
	cout << nextline;

	cout << "-" << nextline;

	cout << nextline;
	
	cout << "<,> - - - - - - - - - - - - - - - - - - - - <,>" << nextline;

	system("pause");
}
