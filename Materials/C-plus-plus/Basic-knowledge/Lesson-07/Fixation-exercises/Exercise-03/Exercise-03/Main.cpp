/*
	[ description of the third fixation exercise ] :
		- Write a charada() function that takes a character ch and a
		  number x. The function should return the character that is x places ahead of "ch" in the
		  in the ASCII table. The function should use charada() several times to display the
		  word "Papel". This should be done with five calls to the function, with each of the calls
		  using the respective values for x: 20, 90, 72, 48 and 107.


	[ output ] :
		```
			===---======---======---======---======---======---===
			Papel
			===---======---======---======---======---======---===
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

char charada_function(char, short);

int main()
{
	cout << "===---======---======---======---======---======---===";
	cout << endl;

	cout << charada_function('<', 20);
	cout << charada_function('\7', 90);
	cout << charada_function('(', 72);
	cout << charada_function('5', 48);
	cout << charada_function('\1', 107);

	cout << endl;
	cout << "===---======---======---======---======---======---===";
	
	cout << endl;
	cout << endl;

	system("pause");
}

char charada_function(char initial_character, short index)
{
	return initial_character + index;
}
