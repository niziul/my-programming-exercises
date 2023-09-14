/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			The artist
			was a visionary.

			-

			] '3' spaces and '26' characters in the sentence.

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	auto temp
		= new char;

	auto total
		= new int{};
	
	auto spaces
		= new int{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cin
		.get(*temp);

	while (*temp != '.')
	{
		if (*temp == ' ')
		{
			(*spaces)++;
		}

		(*total)++;

		cin
			.get(*temp);
	}

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;
	
	cout << "] \'" << *spaces << "\' spaces and \'" << *total << "\' characters in the sentence." << endl;
	
	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete temp;
	delete total;
	delete spaces;

	cin
		.get();
}