/*
	[ description of the first review exercise ] :
		- Write a program that uses a string and a loop to read one word
		at a time until the word "ready" is found. The program should then
		display the number of words typed ( not counting ready ). An example
		execution is shown below.

		]
			Type a few words below ( type 'ready' to stop )

			Learning c++ is an adventure, are you ready to learn it?

			A total of 7 words were typed in.
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Type a few words below ( type 'ready' to stop )
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: Learning c++ is an adventure, are you ready to learn it?

			-

			- - ] A total of '7' words were typed in.

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::strcmp;

int main()
{
	auto words
		= new char[256]{};

	auto count
		= new int{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
	
	cout << endl;

	cout << "Type a few words below ( type \'ready\' to stop )" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";

	while (true)
	{
		cin >> words;
		
		if (strcmp(words, "ready") == 0)
		{
			break;
		}

		++(*count);
	}

	cout << endl;

	cout << "-" << endl;

	cout << endl;

	cout << "- - ] A total of \'" << *count << "\' words were typed in." << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete[] words;
	delete count;

	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cin.get();
}