/*
	[ description of the first fixation exercise ] :
		- Write a program that allows you to store the number of books sold
		each month for a year. The program should use a loop for to ask about
		the number of sales of each month, displaying the name of the month (use
		a vector of 'const char*' initialized to the names of the months). Use an
		array of integers to store the number of books sold in each month. The program
		should calculate and display the total number of books sold in the year.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter the number of books sold in the month
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - - - - - - - - - - -] 'January:

			[ amount of books sold ] : 47

			-

			- - - - - - - - - - - -] 'February:

			[ amount of books sold ] : 47

			-

			- - - - - - - - - - - -] 'March:

			[ amount of books sold ] : 47

			-

			- - - - - - - - - - - -] 'April:

			[ amount of books sold ] : 47

			-

			- - - - - - - - - - - -] 'May:

			[ amount of books sold ] : 47

			-

			- - - - - - - - - - - -] 'June:

			[ amount of books sold ] : 47

			-

			- - - - - - - - - - - -] 'July:

			[ amount of books sold ] : 47

			-

			- - - - - - - - - - - -] 'August:

			[ amount of books sold ] : 47

			-

			- - - - - - - - - - - -] 'September:

			[ amount of books sold ] : 47

			-

			- - - - - - - - - - - -] 'October:

			[ amount of books sold ] : 47

			-

			- - - - - - - - - - - -] 'November:

			[ amount of books sold ] : 47

			-

			- - - - - - - - - - - -] 'December:

			[ amount of books sold ] : 47

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			In that year a total of '564' books were sold.
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	auto const months
		= new char[12][10]
		{
			"January",
			"February",
			"March",
			"April",
			"May",
			"June",
			"July",
			"August",
			"September",
			"October",
			"November",
			"December"
		};

	auto const number_of_sales
		= new int[12];

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter the number of books sold in the month" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	for (auto i = 0; i < 12; i++)
	{
		cout << "- - - - - - - - - - - -] \'" << *(months + i) << ": " << endl;
		
		cout << endl;

		cout << "[ amount of books sold ] : ";
		cin >> *(number_of_sales + i);

		cout << endl;

		cout << "-" << endl;
		
		cout << endl;
	}

	auto total_books_sold_this_year
		= 0;

	for (auto i = 0; i < 12; i++)
	{
		total_books_sold_this_year
			+= *(number_of_sales + 1);
	}

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "In that year a total of \'" << total_books_sold_this_year << "\' books were sold." << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;
	
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete[] months;
	delete[] number_of_sales;

	system("pause");
}