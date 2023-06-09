/*
	[ output ] :
		```
			[ Black on White ]


			[ Intense Yellow with Blue ]


			[ Normal Green ]


			[ Underlined Red ]


			[ 256 Colors ]


			[ 256 Colors ]
		```
*/

#include <iostream>

using std::cout;
using std::endl;

#define default    "\033[m"

#define green      "\033[32m"

#define red        "\033[4;31m"

#define black      "\033[7;37;40m"

#define yellow     "\033[7;33;44m"

#define foreground "\033[38;5;154m"

#define background "\033[38;5;0;48;5;154m"

int main()
{
	cout << black      << "[ Black on White ]"           << default << endl;

	cout << endl;
	cout << endl;

	cout << yellow     << "[ Intense Yellow with Blue ]" << default << endl;
	
	cout << endl;
	cout << endl;

	cout << green	   << "[ Normal Green ]"			 << default << endl;
	
	cout << endl;
	cout << endl;

	cout << red        << "[ Underlined Red ]"			 << default << endl;
	
	cout << endl;
	cout << endl;

	cout << foreground << "[ 256 Colors ]"				 << default << endl;
	
	cout << endl;
	cout << endl;

	cout << background << "[ 256 Colors ]"				 << default << endl;

	cout << endl;
	cout << endl;

	system("pause");
}