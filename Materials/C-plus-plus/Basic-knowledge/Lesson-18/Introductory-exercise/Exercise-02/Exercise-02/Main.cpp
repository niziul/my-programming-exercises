/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			?oleque
			aoleque
			boleque
			coleque
			doleque
			eoleque
			foleque
			goleque
			holeque
			ioleque
			joleque
			koleque
			loleque

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - ] The word is 'moleque';

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::strcmp;

int main()
{
	auto word
		= new char[8]
		{
			"?oleque"
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	for (auto i_char = 'a'; strcmp(word, "moleque"); i_char++)
	{
		cout << word << endl;

		*(word + 0)
			= i_char;
	}

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;
	
	cout << "- - ] The word is \'" << word << "\';" << endl;

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;
	
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
	
	delete[] word;

	system("pause");
}