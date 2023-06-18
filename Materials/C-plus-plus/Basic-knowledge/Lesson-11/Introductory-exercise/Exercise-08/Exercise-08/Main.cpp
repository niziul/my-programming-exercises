/*
	[ output ] :
		```
			<u> - - - - - - - - - - - - - - - - <u>

			Enter the name of two felines
			- - - - - - - - - - - - - - - - - - - -
			: Tigre
			: Leopardo

			-

			--] Here are the felines: 'Tigre'
			and 'Leopardo'.

			-

			--] The third letter of the felines
			names are: 'g' and 'o'.

			<u> - - - - - - - - - - - - - - - - <u>
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

	char felines[20]
		= "jaguar";

	string animal
		= "pantera";

	cout << "<u> - - - - - - - - - - - - - - - - <u>" << nextline;

	cout << nextline;

	cout << "Enter the name of two felines" << nextline;
	cout << "- - - - - - - - - - - - - - - - - - - -" << nextline;
	cout << ": ";
	cin >> felines;
	cout << ": ";
	cin >> animal;

	cout << nextline;

	cout << "- " << nextline;;
	
	cout << nextline;

	cout << "--] Here are the felines: \'" << felines << "\'\nand \'" << animal << "\'." << nextline;

	cout << nextline;

	cout << "- " << nextline;

	cout << nextline;

	cout << "--] The third letter of the felines\nnames are: \'" << felines[2] << "\' and \'" << animal[2] << "\'." << nextline;

	cout << nextline;

	cout << "<u> - - - - - - - - - - - - - - - - <u>" << nextline;
	
	system("pause");
}