/*
	[ description of the third fixation exercise ] :
		- Daiane invested 'R$100' with a '10%' return. That is, each year, the return is '10%'
		of the original amount invested.

			- Diaane's return = 0.10 x original invested.

		At the same time, Celia invested 'R$100' with a combined return of '5%'. That is, the return
		is '5%' of the current investment.
			
			- Celia's return = 0.05 x current invested.

		Celia earns '5%' of 'R$100' in the first year, giving her a balance of 'R$105'. The following
		year she earns '5%' of 'R$110.25', and so on.

		Write a program that finds how many years it takes for celia's balance to exceed daiane's
		balance and shows the values of the balances at that moment.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			[ amount of years       ] : '27';

			[ daine current balance ] : '370.00';
			[ celia current balance ] : '373.35';

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct account
{
	float invested;
	float return_rate;
};

int main()
{
	auto daiane_account
		= new account
		{
			100.0f,
			0.10f
		};

	auto celia_account
		= new account
		{
			100.0,
			0.05f
		};

	auto daiane_return
		= new float
		{
			daiane_account->invested
		};

	auto years
		= new int
		{
			0
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	do
	{
		(*years)++;

		daiane_account->invested
			+= daiane_account->return_rate * (*daiane_return);

		celia_account->invested
			+= celia_account->return_rate * celia_account->invested;
		
	} while (daiane_account->invested > celia_account->invested);

	cout << "[ amount of years       ] : \'" << *years << "\';" << endl;

	cout << endl;

	cout
		.precision(2);

	cout
		.setf(std::ios_base::fixed);

	cout << "[ daine current balance ] : \'" << daiane_account->invested << "\';" << endl;
	cout << "[ celia current balance ] : \'" << celia_account->invested << "\';" << endl;
	
	cout
		.unsetf(std::ios_base::fixed);

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete daiane_account;
	delete celia_account;
	delete daiane_return;
	delete years;

	system("pause");
}