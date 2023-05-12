/*
	[ description of the fourth fixation exercise ] :
		- Two friends play the lottery together every week. Write a program
		  that asks for the amount of money each of them played with and the total amount
		  of the prize. The program should show how much each one should receive, considering that
		  the share of the prize is proportional to the amount bet.

	[ output ] :
		```
			<|> -.-.-.-.-.-.-.-.-.-.-.-.-----.-.-.-.-.-.-.-.-.-.-.-.- <|>
			<                        Friends' bet                       >
			<|> -.-.-.-.-.-.-.-.-.-.-.-.-----.-.-.-.-.-.-.-.-.-.-.-.- <|>

			Enter the amount bet by the first player  ( ex: 2.50        )
			> 2.50

			Enter the amount bet by the second player ( ex: 1.00        )
			> 1.00

			Enter the award amount                    ( ex: 126'000'000 )
			> 126000000

			<|> -.-.-.-.-.-.-.-.-.-.-.-.-----.-.-.-.-.-.-.-.-.-.-.-.- <|>

			-] The first player is entitled to US$'90000000.00'

			-] The second player is entitled to US$'36000000.00'

			<|> -.-.-.-.-.-.-.-.-.-.-.-.-----.-.-.-.-.-.-.-.-.-.-.-.- <|>
		```
*/

#include <iostream>

using std::cin;
using std::cout;

int main()
{
	auto nextline
		= '\n';

	auto award_amount
		= (float)0;

	auto amount_of_the_first_bet
		= (float)0;

	auto amount_of_the_second_bet
		= (float)0;

	cout << "<|> -.-.-.-.-.-.-.-.-.-.-.-.-----.-.-.-.-.-.-.-.-.-.-.-.- <|>" << nextline;
	cout << "<                        Friends' bet                       >" << nextline;
	cout << "<|> -.-.-.-.-.-.-.-.-.-.-.-.-----.-.-.-.-.-.-.-.-.-.-.-.- <|>" << nextline;

	cout << nextline;

	cout << "Enter the amount bet by the first player  ( ex: 2.50        )" << nextline;
	cout << "> ";
	cin >> amount_of_the_first_bet;

	cout << nextline;

	cout << "Enter the amount bet by the second player ( ex: 1.00        )" << nextline;
	cout << "> ";
	cin >> amount_of_the_second_bet;

	cout << nextline;

	cout << "Enter the award amount                    ( ex: 126'000'000 )" << nextline;
	cout << "> ";
	cin >> award_amount;

	cout << nextline;

	cout << "<|> -.-.-.-.-.-.-.-.-.-.-.-.-----.-.-.-.-.-.-.-.-.-.-.-.- <|>" << nextline;
	
	cout << nextline;

	cout
		.setf(std::iostream::fixed);

	cout
		.precision(2);

	auto amount_of_the_first_player
		= ( award_amount / ( amount_of_the_first_bet + amount_of_the_second_bet ) ) * amount_of_the_first_bet;

	cout << "-] The first player is entitled to US$\'" << amount_of_the_first_player << "\'" << nextline;

	cout << nextline;

	auto amount_of_the_second_player
		= ( award_amount / ( amount_of_the_first_bet + amount_of_the_second_bet ) ) * amount_of_the_second_bet;

	cout << "-] The second player is entitled to US$\'" << amount_of_the_second_player << "\'" << nextline;
	
	cout << nextline;
	
	cout
		.unsetf(std::iostream::fixed);
	
	cout << nextline;

	cout << "<|> -.-.-.-.-.-.-.-.-.-.-.-.-----.-.-.-.-.-.-.-.-.-.-.-.- <|>" << nextline;

	cout << nextline;

	system("pause");
}