/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			1) alarm                 2) report
			3) sorry                 4) sycophancy
			5) exit

			please, enter an option below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 4

			-

			Your employees think you're the best boss in the industry.
			Your partners think you're the best businessman on the market.


			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			1) alarm                 2) report
			3) sorry                 4) sycophancy
			5) exit

			please, enter an option below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 6

			-

			Invalid option.

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			1) alarm                 2) report
			3) sorry                 4) sycophancy
			5) exit

			please, enter an option below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 5

			-

			Invalid option.

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

void display_menu();
void sycophancy();
void report();

int main()
{
	auto choice
		= int{};

	do
	{
		cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

		cout << endl;

		display_menu();

		cin >> choice;

		cout << endl;
		cout << "-" << endl;
		cout << endl;

		switch (choice)
		{
			case 1 :
				{
					cout << "\a" << endl;
				}
				break;
			case 2 :
				{
					report();
				}
				break;
			case 3 :
				{
					cout << "I was sick." << endl;
				}
				break;
			case 4 :
				{
					sycophancy();
				}
				break;
			default:
				{
					cout << "Invalid option." << endl;
				}
		}

		cout << endl;

		cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	} while (choice != 5);
	
	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');
}

void display_menu()
{
	cout << "1) alarm\t\t 2) report" << endl;
	cout << "3) sorry\t\t 4) sycophancy" << endl;
	cout << "5) exit \t\t" << endl;

	cout << endl;

	cout <<	"please, enter an option below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
}

void sycophancy()
{
	cout << "Your employees think you're the best boss in the industry." << endl;
	cout << "Your partners think you're the best businessman on the market." << endl;

	cout << endl;
}

void report()
{
	cout << "It's been an excellent week for business." << endl;
	cout << "Sales are up 126%. Spending is down 35%." << endl;

	cout << endl;
}
