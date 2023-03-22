/*
	[ description of the second learning exercise ] :
		- Using the functions created in the previous question, ask the user to enter a
		  and then ask him if he wants to decode or encode the letter received,
		  asking him to enter 1 if he wants to encode and 0 if he wants to decode. Use
		  an "if else" structure.

	[ output ] :
		```
			:::::::::::::::::::: :::::::::: ::::: ::: :
			--] Encode and Decode
			:::::::::::::::::::: :::::::::: ::::: ::: :


			Enter a char value
			: u


			Enter "1" if you want encode or "0" to decode
			: 1


			--------------- ---------- ----- --- -
			--] encode('u') : x
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
	bool user_choice;

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

	cout << "Enter \"1\" if you want encode or \"0\" to decode" << endl;
	cout << ": ";
	cin >> user_choice;

	cout << endl;
	cout << endl;

	if (user_choice)
	{
		cout << "--------------- ---------- ----- --- -" << endl;
		cout << "--] encode(\'" << user_char << "\') : " << encode(user_char) << endl;
		cout << "--------------- ---------- ----- --- -" << endl;

		cout << endl;
		cout << endl;
	}
	else
	{
		cout << "--------------- ---------- ----- --- -" << endl;
		cout << "--] decode(\'" << user_char << "\') : " << decode(user_char) << endl;
		cout << "--------------- ---------- ----- --- -" << endl;

		cout << endl;
		cout << endl;
	}

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