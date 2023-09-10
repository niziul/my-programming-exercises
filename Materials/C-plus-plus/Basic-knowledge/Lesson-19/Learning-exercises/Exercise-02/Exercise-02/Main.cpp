/*
	[ description of the second learning exercise ] :
		- You're selling the book "nice c++". Write a program that uses a two-dimensional
		array to store the number of books sold each month for three years.

		The program should use a loop to ask about the the number of sales for each month,
		displaying the name of the month (use a vector of 'const char *' initialized to the
		names of the months). Show the total sales for each year and the grand total for the
		three years.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter the number of books sold in the '1st' year below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			[ january       ] : 47
			[ february      ] : 47
			...

			Enter the number of books sold in the '2st' year below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			[ january       ] : 37
			[ february      ] : 37
			...

			Enter the number of books sold in the '3st' year below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			[ january       ] : 26
			[ february      ] : 26
			...


			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			] total sales
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			'1st' year:      '564';
			'2st' year:      '444';
			'3st' year:      '312';


			] A total of '1320' books have been sold in the last three years.

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int years = 3;
const int months = 12;

int main()
{
	auto const month_names
		= new char[12][10]
		{
			"january",
			"february",
			"march",
			"april",
			"may",
			"june",
			"july",
			"august",
			"september",
			"october",
			"november",
			"december"
		};

	auto number_of_books_sold_in_three_years
		= new int[years][months];

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	for (auto i = 0; i < years; ++i)
	{
		cout << "Enter the number of books sold in the \'" << i + 1 << "st\' year below" << endl;
		cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

		cout << endl;

		for (auto j = 0; j < months; ++j)
		{
			cout << "[ " << *(month_names + j) << "    \t] : ";
			cin >> *(*(number_of_books_sold_in_three_years + i) + j);
		}

		cout << endl;
	}

	cout << endl;

	cout << "-" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "] total sales" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	auto total_sales_this_year
		= new int[3]{};

	for (auto i = 0; i < years; ++i)
	{
		for (auto j = 0; j < months; ++j)
		{
			total_sales_this_year[i]
				+= *(*(number_of_books_sold_in_three_years + i) + j);
		}

		cout << "\'" << i + 1 << "st\' year: \t \'" << *(total_sales_this_year + i) << "\';" << endl;
	}

	cout << endl;
	cout << endl;

	auto total_sales_in_the_last_three_years
		= 0;

	for (auto i = 0; i < 3; i++)
	{
		total_sales_in_the_last_three_years
			+= *(total_sales_this_year + i);
	}

	cout << "] A total of \'" << total_sales_in_the_last_three_years << "\' books have been sold in the last three years." << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete[] month_names;
	delete[] total_sales_this_year;
	delete[] number_of_books_sold_in_three_years;

	cin
		.get();
}