/*
	[ description of the fourth review exercise ] :
		- write a 'strequal' function that receives two strings and returns a boolean
		value to indicate whether they are equal. The function should work with the code
		snippet below:

		]
			char word[20] = "colega";

			if (str_equal("colega", word))
				cout << "equals" << endl;
			else
				cout << "different" << endl;
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - ] equals

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

bool str_equal(const char*, const char*);

int main()
{
	auto word
		= new char[20]
		{
			"colega\x00"
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	if (str_equal("colega", word))
	{
		cout << "- - ] equals!" << endl;
	}
	else
	{
		cout << "- - ] different!" << endl;
	}

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete[] word;

	system("pause");
}

bool str_equal(const char* word_a, const char* word_b)
{
	for (auto i = 0; *(word_a + i) || *(word_b + i); i++)
	{
		if (*(word_a + i)
			!=
			*(word_b + i))
		{
			return false;
		}
	}

	return true;
}