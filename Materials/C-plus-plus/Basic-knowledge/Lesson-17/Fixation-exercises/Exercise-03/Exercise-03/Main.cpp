/*
	[ description of the third fixation exercise ] :
		- Write a program o find out if a word is a palindrome. The program should
		ask the user to type a word which should be stored in a char vector. Use a loop
		to copy the word into another char vector, reversing its order. Finally use the instructions
		below to display whether the word is a palindrome or not.

		]
			if (strcmp(word, inverted_word))
				cout << "The word is not a palindrome." << endl;
			else
				cout << "The word is a palindrome." << endl;
				
		]

		]
			Type a word: animal

			Inverted word: lamina

			The word is not a palindrome.
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter an word below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: animal

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			[ word          ]: 'animal';
			[ inverted word ]: 'lamina';

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - ] The word is not a 'palindrome'.

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
	auto word
		= new char[20];

	auto inverted_word
		= new char[20];

	auto temp
		= new char;
	
	auto i
		= new int;

	auto j
		= new int;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter an word below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> word;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	for (*j = 0, *i = strlen(word); *i > 0; --*i, ++*j)
	{
		*(inverted_word + *j)
			= *(word + (*i - 1));

		if (*i > 0)
		{
			*(inverted_word + (*j + 1))
				= '\x00';
		}
	}


	cout << "[ word          ]: \'" << word << "\';" << endl;
	cout << "[ inverted word ]: \'" << inverted_word << "\';" << endl;

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	if (strcmp(word, inverted_word))
	{
		cout << "- - ] The word is not a \'palindrome\'." << endl;
	}
	else
	{
		cout << "- - ] The word is a \'palindrome\'." << endl;
	}

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete i;
	delete j;
	delete temp;
	delete[] word;
	delete[] inverted_word;

	system("pause");
}