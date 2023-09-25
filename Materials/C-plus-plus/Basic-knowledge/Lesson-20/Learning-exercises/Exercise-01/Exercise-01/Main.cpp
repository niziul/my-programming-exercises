/*
	[ description of the first learning exercise ] :
		- Build a program that asks for the distance of a journey in kilometers.
		Calculate the price of the ticket, using R$0.50 per km for journeys of up
		to 200km, R$0.40 per km for journeys of up to 400km and R$0.30 per km for longer
		journeys.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter the total distance of the journey in kilometers
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			:1000

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			] total ticket price:    'U$300';

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
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
	auto price_list
		=
		{
			0.30f,
			0.40f,
			0.50f
		};

	auto ticket_price
		= new float;

	auto distance_of_the_journey
		= new float;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter the total distance of the journey in kilometers" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ":";
	cin >> *distance_of_the_journey;

	cout << endl;
	cout << "-" << endl;
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;
	
	if (*distance_of_the_journey > 400.0f)
	{
		*ticket_price
			= *distance_of_the_journey * price_list.begin()[0];
	}
	else
	{
		if (*distance_of_the_journey < 200.0f)
		{
			*ticket_price
				= *distance_of_the_journey * price_list.begin()[1];
		}
		else
		{
			*ticket_price
				= *distance_of_the_journey * price_list.begin()[2];
		}
	}

	cout << "] total ticket price: \t\'U$" << *ticket_price << "\';" << endl;

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete ticket_price;
	delete distance_of_the_journey;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');

	cin
		.get();
}