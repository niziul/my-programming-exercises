/*
	[ description of the first learning exercise ] :
		- Build a program to calculate the amount of money spent by a smoker. The program
		should read the number of years that the user smokes, the number of cigarettes smoked per day
		and the price of a 20 cigarette pack.

	[ output ] :
		```
			How many years have you smoked?
			: 10

			How many cigarettes do you smoke a day?
			: 5

			What is the average price of a pack of cigarettes?
			: 6.50

			[ By 10 years, you have spent a total of US$5931.25 on cigarettes! ]
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int time_the_user_smokes;
	int amount_of_cigarettes_the_user_smokes_per_day;

	float average_price_of_a_pack_of_cigarettes;
	float amount_spent_by_the_user_during_the_time_entered;

	cout << "How many years have you smoked?" << endl;
	cout << ": ";
	cin >> time_the_user_smokes;

	cout << endl;

	cout << "How many cigarettes do you smoke a day?" << endl;
	cout << ": ";
	cin >> amount_of_cigarettes_the_user_smokes_per_day;

	cout << endl;

	cout << "What is the average price of a pack of cigarettes?" << endl;
	cout << ": ";
	cin >> average_price_of_a_pack_of_cigarettes;

	cout << endl;

	amount_spent_by_the_user_during_the_time_entered = (amount_of_cigarettes_the_user_smokes_per_day * (average_price_of_a_pack_of_cigarettes / 20.0)) * (time_the_user_smokes * 365);

	cout << "[ By " << time_the_user_smokes << " years, you have spent a total of US$" << amount_spent_by_the_user_during_the_time_entered << " on cigarettes! ]";

	cout << endl;

	return 0;
}