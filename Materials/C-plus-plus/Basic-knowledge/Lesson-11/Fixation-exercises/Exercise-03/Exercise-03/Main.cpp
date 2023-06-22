/*
	[ description of the third fixation exercise ] :
		- Find out what happens when we try to display an array of characters
		that is not a string. To do this initialize two arrays, one being a string
		and the other just an array od characters. Display both with 'cout'.

	[ output ] :
		```
			<> - - - - - - - - - - - - - - - - <>

			--] string_a[0]: '00000033C56FF978'.

			-

			--] char_a[0]: '╠╠╠╠╠╠╠╠╠╠╠╠⌐,¢╫ⁿ⌂'.

			<> - - - - - - - - - - - - - - - - <>
		```
*/

#include <iostream>
#include <string>

using std::cout;
using std::string;

int main()
{
	auto const nextline
		= '\n';

	string string_a[1];

	char char_a[1];

	cout << "<> - - - - - - - - - - - - - - - - <>" << nextline;
	
	cout << nextline;

	cout << "--] string_a[0]: \'" << string_a << "\'." << nextline;
	
	cout << nextline;

	cout << "-" << nextline;
	
	cout << nextline;
	
	cout << "--] char_a[0]: \'" << char_a << "\'." << nextline;

	cout << nextline;
	
	cout << "<> - - - - - - - - - - - - - - - - <>" << nextline;
	
	system("pause");
}