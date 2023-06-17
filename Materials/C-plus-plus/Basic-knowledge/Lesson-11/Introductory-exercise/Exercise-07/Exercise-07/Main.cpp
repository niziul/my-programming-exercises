/*
	[ output ] :
		```
			<Y> - - - - - - - - - - - - - - - - <Y>

			--] Cat: 'Jaguar'.

			-

			--] Animal: 'Tiger'.

			<Y> - - - - - - - - - - - - - - - - <Y>
		```
*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using std::cout;
using std::strcpy;

int main()
{
	auto const nextline
		= '\n';

	char cat[20]
		= "Tiger";

	char animal[20];

	cout << "<Y> - - - - - - - - - - - - - - - - <Y>" << nextline;

	cout << nextline;
	
	strcpy(animal, cat);
	strcpy(cat, "Jaguar");

	cout << "--] Cat: \'" << cat << "\'." << nextline;

	cout << nextline;

	cout << "-" << nextline;
	
	cout << nextline;

	cout << "--] Animal: \'" << animal << "\'." << nextline;
	
	cout << nextline;

	cout << "<Y> - - - - - - - - - - - - - - - - <Y>" << nextline;

	system("pause");
}