/*
	[ description of the first learning exercise ] :
		- Create a function called encode(); that takes a character, adds 3 to it and
		  and returns the new encoded character. Create another function called decode() that
		  takes a character and subtracts 3 from the character received and returns the new
		  decoded character. Use both functions in a program that receives a character from the user,
		  encodes the character, and displays the character to the user, decodes it, and displays it again.

	[ output ] :
		```
			:::::::::::::::::::: :::::::::: ::::: ::: :
			--] Encode and Decode
			:::::::::::::::::::: :::::::::: ::::: ::: :


			Enter a char value
			: t


			--------------- ---------- ----- --- -
			--] encode('t') : w
			--------------- ---------- ----- --- -


			--------------- ---------- ----- --- -
			--] decode('t') : q
			--------------- ---------- ----- --- -
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

char encode(char);
char decode(char);

int main()
{
	char user_char;

	cout << ":::::::::::::::::::: :::::::::: ::::: ::: :" << endl;
	cout << "--] Encode and Decode" << endl;
	cout << ":::::::::::::::::::: :::::::::: ::::: ::: :" << endl;

	cout << endl;
	cout << endl;

	cout << "Enter a char value" << endl;
	cout << ": ";
	cin >> user_char;

	cout << endl;
	cout << endl;

	cout << "--------------- ---------- ----- --- -" << endl;
	cout << "--] encode(\'" << user_char << "\') : " << encode(user_char) << endl;
	cout << "--------------- ---------- ----- --- -" << endl;

	cout << endl;
	cout << endl;

	cout << "--------------- ---------- ----- --- -" << endl;
	cout << "--] decode(\'" << user_char << "\') : " << decode(user_char) << endl;
	cout << "--------------- ---------- ----- --- -" << endl;

	cout << endl;
	cout << endl;

	system("pause");
}

char encode(char char_to_encode)
{
	return char_to_encode + 3;
}

char decode(char char_to_decode)
{
	return char_to_decode - 3;
}
