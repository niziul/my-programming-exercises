/*
	[ output ] :
		```
			[ The ASCII code for 'M': '77' ]


			Adding 1 to the character code...


			[ The ASCII code for 'N': '78' ]
		```
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	char character = 'M';
	int character_code = character;

	cout << "[ The ASCII code for '" << character << "': '" << character_code << "' ]" << endl;

	cout << endl;
	cout << endl;

	cout << "Adding 1 to the character code..." << endl;
	
	cout << endl;
	cout << endl;
	
	character = character + 1;
	character_code = character;

	cout << "[ The ASCII code for '" << character << "': '" << character_code << "' ]" << endl;

	cout << endl;
	cout << endl;

	system("pause");
}