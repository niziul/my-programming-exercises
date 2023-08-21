/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter your first name below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: pneumonoultramicroscopicsilicovolcanoconiosis

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			Your name vertically and in ascii code
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			] 'p' - code: '112'
			] 'n' - code: '110'
			] 'e' - code: '101'
			] 'u' - code: '117'
			] 'm' - code: '109'
			] 'o' - code: '111'
			] 'n' - code: '110'
			] 'o' - code: '111'
			] 'u' - code: '117'
			] 'l' - code: '108'
			] 't' - code: '116'
			] 'r' - code: '114'
			] 'a' - code: '97'
			] 'm' - code: '109'
			] 'i' - code: '105'
			] 'c' - code: '99'
			] 'r' - code: '114'
			] 'o' - code: '111'
			] 's' - code: '115'
			] 'c' - code: '99'
			] 'o' - code: '111'
			] 'p' - code: '112'
			] 'i' - code: '105'
			] 'c' - code: '99'
			] 's' - code: '115'
			] 'i' - code: '105'
			] 'l' - code: '108'
			] 'i' - code: '105'
			] 'c' - code: '99'
			] 'o' - code: '111'
			] 'v' - code: '118'
			] 'o' - code: '111'
			] 'l' - code: '108'
			] 'c' - code: '99'
			] 'a' - code: '97'
			] 'n' - code: '110'
			] 'o' - code: '111'
			] 'c' - code: '99'
			] 'o' - code: '111'
			] 'n' - code: '110'
			] 'i' - code: '105'
			] 'o' - code: '111'
			] 's' - code: '115'
			] 'i' - code: '105'
			] 's' - code: '115'

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
	auto i
		= new int
		{
			0
		};

	auto name
		= new char[46];

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter your first name below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> name;
	
	cout << endl;

	cout << "-" << endl;
	
	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "Your name vertically and in ascii code" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;
	
	while (*(name + *i))
	{
		cout << "] \'" << *(name + *i) << "\' - code: \'" << int(*(name + *i)) << '\'' << '\n';
		++*i;
	}

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete i;
	delete[] name;

	system("pause");
}