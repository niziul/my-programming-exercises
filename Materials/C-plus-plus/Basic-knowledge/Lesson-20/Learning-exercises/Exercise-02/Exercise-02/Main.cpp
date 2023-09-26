/*
	[ description of the second learning exercise ] :
		- Write a program that uses a loop to read the speed of 10 cars
		into a vector of integers. Count how many cars exceeded the 80km/h
		limit, calculate the total amount collected in fines and the amount
		of the fine each car must pay. The fine is R$8 per km exceeded.

		]
			Last 10 recorded speeds
			20 55 48 76 81 94 92 48 52 85

			81 km/h exceeds the limit = R$8 fine
			94 km/h exceeds the limit = R$112 fine
			92 km/h exceeds the limit = R$96 fine
			85 km/h exceeds the limit = R$40 fine

			4 cars were fined a total of R$256.
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter with the last ten recorded speeds below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 20
			: 55
			: 48
			: 76
			: 81
			: 94
			: 92
			: 48
			: 52
			: 85

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			] '81' km/h exceeds the limit = 'US$8' fine;
			] '94' km/h exceeds the limit = 'US$112' fine;
			] '92' km/h exceeds the limit = 'US$96' fine;
			] '85' km/h exceeds the limit = 'US$40' fine;

			] '4' cars were fined a total of 'US$256';

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
	auto speeds
		= new int[10];

	auto amount_of_fines
		= new int{};
	
	auto total_fines_amount
		= new int{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter with the last ten recorded speeds below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	for (auto i = 0; i < 10; i++)
	{
		cout << ": ";
		cin >> *(speeds + i);
	}

	cout << endl;
	cout << "-" << endl;
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;
	
	for (auto i = 0; i < 10; i++)
	{
		if (*(speeds + i) > 80)
		{
			auto fine
				= (*(speeds + i) - 80) * 8;

			(*amount_of_fines)++;
			
			*total_fines_amount
				+= fine;
			
			cout << "] \'" << *(speeds + i) << "\' km/h exceeds the limit = \'US$" << fine << "\' fine;" << endl;
		}
	}

	
	cout << endl;

	cout << "] \'" << *amount_of_fines << "\' cars were fined a total of \'US$" << *total_fines_amount << "\';" << endl;

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
	
	delete[] speeds;
	delete amount_of_fines;
	delete total_fines_amount;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');
	
	cin
		.get();
}