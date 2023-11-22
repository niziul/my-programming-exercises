/*
	[ description of the sixth learning exercise ] :
		- Create a struct called 'swimmer' with the fields: 'name',
		'age' and 'category'. In the main function, declare a swimmer
		and ask the user to enter the swimmer's name and age. However,
		the category must be determined by the program according to the
		table below:

		]
			child
				- 5 a 7;
			youth
				- 8 a 10;
			teenager
				- 11 a 17;
			adult
				- 17 a 30;
			senior
				- over 30;
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter the swimmer's name below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: sofia

			Enter the swimmer's age below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 16

			-

			- -] 'sofia' was in the 'teenager' category.

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

struct st_swimmer
{
	char name[20];
	char category[10];
	short age;
};

int main()
{
	auto swimmer
		= st_swimmer{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter the swimmer's name below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> swimmer.name;

	cout << endl;

	cout << "Enter the swimmer's age below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> swimmer.age;

	cout << endl;
	cout << "-" << endl;
	cout << endl;

	if (swimmer.age >= 5 && swimmer.age <= 7)
	{
		strcat(swimmer.category, "child");
	}
	else if (swimmer.age >= 8 && swimmer.age <= 10)
	{
		strcat(swimmer.category, "youth");
	}
	else if (swimmer.age >= 11 && swimmer.age <= 17)
	{
		strcat(swimmer.category, "teenager");
	}
	else if (swimmer.age > 17 && swimmer.age < 30)
	{
		strcat(swimmer.category, "adult");
	}
	else
	{
		strcat(swimmer.category, "senior");
	}

	cout << "- -] \'" << swimmer.name << "\' was in the \'" << swimmer.category << "\' category." << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
	
	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');
}