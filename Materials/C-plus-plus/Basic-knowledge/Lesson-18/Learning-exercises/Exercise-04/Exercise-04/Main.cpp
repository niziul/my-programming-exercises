/*
	[ description of the fourth learning exercise ] :
		- Write a program that reads a sentence of up to 69 characters and tells
		whether it forms a palindrome, disregarding spaces. Below are some examples
		of sentences that form palindromes:

		]
			Don t nod
			I did did I
			Step on no pets
			Eva can I see bees in a cave
			Was it a cat I saw
		]
		
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter an text below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: Eva can I see bees in a cave

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			[ text          ]: 'evacaniseebeesinacave';
			[ inverted text ]: 'evacaniseebeesinacave';

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - ] The text is a 'palindrome'.

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void invert_text(char*, char*);
bool is_a_palindrome(char*, char*);

int main()
{
	auto text
		= new char[60];

	auto inverted_text
		= new char[60];

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter an text below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin.getline(text, 60);

	cout << endl;

	cout << "-" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	invert_text(text, inverted_text);

	cout << "[ text          ]: \'" << text << "\';" << endl;
	cout << "[ inverted text ]: \'" << inverted_text << "\';" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;


	if (is_a_palindrome(text, inverted_text))
	{
		cout << "- - ] The text is a \'palindrome\'." << endl;
	}
	else
	{
		cout << "- - ] The text is not a \'palindrome\'." << endl;
	}

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete[] text;
	delete[] inverted_text;

	system("pause");
}

void invert_text(char* text, char* inverted_text)
{
	auto i
		= new int;

	auto j
		= new int;

	for (auto i = 0; *(text + i); i++)
	{
		if (isspace(*(text + i)))
		{
			for (auto j = i; *(text + j); j++)
			{
				*(text + j)
					= *(text + (j + 1));
			}
		}
	}

	for (auto i = 0; *(text + i); i++)
	{
		*(text + i)
			= tolower(*(text + i));
	}

	for (*j = 0, *i = strlen(text); *i > 0; --(*i), ++(*j))
	{
		*(inverted_text + *j)
			= *(text + (*i - 1));

		if (*i > 0)
		{
			*(inverted_text + (*j + 1))
				= '\x00';
		}
	}

	delete i;
	delete j;
}

bool is_a_palindrome(char* text, char* inverted_text)
{
	for (auto i = 0; *(text + i) || *(inverted_text + i); i++)
	{
		if (*(text + i)
			!=
			*(inverted_text + i))
		{
			return false;
		}
	}

	return true;
}