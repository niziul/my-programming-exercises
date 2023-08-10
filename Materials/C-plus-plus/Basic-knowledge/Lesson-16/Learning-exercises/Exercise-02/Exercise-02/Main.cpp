/*
	[ description of the second learning exercise ] :
		- Make a program that reads four words from the user and stores them
		in distinct char vectors. Then calculate the size of a char vector that
		can hold all four words together, dynamically allocate memory for this new
		'string' and copy all the words read into this single 'string'. Finally display
		this single 'string' on the screen.

		]
			Enter 4 words:

			Yesterday
			Today
			Tomorrow
			Always

			Concatenating the words gives us:

			Yesterday Today Tomorrow Always
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter 4 words below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			[ word-01 ]: Yesterday
			[ word-02 ]: Today
			[ word-03 ]: Tomorrow
			[ word-04 ]: Always

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - -] Concatenating the words gives us: 'Yesterday Today Tomorrow Always';

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::strlen;

int main()
{
	auto word_a
		= new char[20];

	auto word_b
		= new char[20];

	auto word_c
		= new char[20];

	auto word_d
		= new char[20];

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter 4 words below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "[ word-01 ]: ";
	cin.getline(word_a, 20);

	cout << "[ word-02 ]: ";
	cin.getline(word_b, 20);

	cout << "[ word-03 ]: ";
	cin.getline(word_c, 20);

	cout << "[ word-04 ]: ";
	cin.getline(word_d, 20);

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	auto size
		= strlen(word_a)
          +
          strlen(word_b)
          +
          strlen(word_c)
          +
          strlen(word_d) + 4;

	auto words
		= new char[size];

	auto j
		= 0;

	for (auto i = 0; *(word_a + i) != '\x00'; i++)
	{
		*(words + j)
			= *(word_a + i);

		j++;
	}

	delete[] word_a;

	*(words + j)
		= ' ';

	j++;
	
	for (auto i = 0; *(word_b + i) != '\x00'; i++)
	{
		*(words + j)
			= *(word_b + i);
		
		j++;
	}

	delete[] word_b;

	*(words + j)
		= ' ';
	
	j++;

	for (auto i = 0; *(word_c + i) != '\x00'; i++)
	{
		*(words + j)
			= *(word_c + i);

		j++;
	}
	
	delete[] word_c;

	*(words + j)
		= ' ';
	
	j++;
	
	for (auto i = 0; *(word_d + i) != '\x00'; i++)
	{
		*(words + j)
			= *(word_d + i);

		j++;
	}

	delete[] word_d;

	*(words + j)
		= '\x00';

	cout << "- - -] Concatenating the words gives us: \'" << words << "\';" << endl;

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete[] words;

	system("pause");
}