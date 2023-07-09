/*
	[ description of the third learning exercise ] :
		- Define a 'book' struct and a 'game' struct, with pertinent information for each
		struct. In the main function, create an array of borrowed games and an array of borrowed
		books. Ask the user if he wants to borrow a book or a game. If he wants a book, ask him to
		type '1', if he wants a game, aks him to type '0'. Use the value entered to decide to which
		borrowing array the new element should be added.

	[ output ] :
		```v1
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Want to borrow a book or a game? [ 0 = game | 1 = book ]
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 0

			-

			Type the name of the game you want to borrow below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: Grand-Theft-Auto-V

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			--] Here is your 'Grand-Theft-Auto-V'.

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```

		```v2
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Want to borrow a book or a game? [ 0 = game | 1 = book ]
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 1

			-

			Type the name of the book you want to borrow below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: Sherlock-Holmes

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			--] Here is your 'Sherlock-Holmes'.

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>
#include <array>

using std::cin;
using std::cout;
using std::endl;
using std::array;

struct books
{
	char name[50];
};

struct games
{
	char name[50];
};

int main()
{
	auto const borrowing_limit
		= 5;

	auto user_choice
		= -1;

	auto all_borrowing_books
		= array<books, borrowing_limit>{};

	auto all_borrowing_games
		= array<games, borrowing_limit>{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Want to borrow a book or a game? [ 0 = game | 1 = book ]" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> user_choice;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	if (user_choice == 0)
	{
		cout << "Type the name of the game you want to borrow below" << endl;
		cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
		cout << ": ";
		cin >> all_borrowing_books[0].name;
	}

	if (user_choice == 1)
	{
		cout << "Type the name of the book you want to borrow below" << endl;
		cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
		cout << ": ";
		cin >> all_borrowing_games[0].name;
	}

	cout << endl;

	cout << "-" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	if (user_choice == 0)
	{
		cout << "--] Here is your \'" << all_borrowing_books[0].name << "\'." << endl;
	}

	if (user_choice == 1)
	{
		cout << "--] Here is your \'" << all_borrowing_games[0].name << "\'." << endl;
	}

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
	
	system("pause");
}