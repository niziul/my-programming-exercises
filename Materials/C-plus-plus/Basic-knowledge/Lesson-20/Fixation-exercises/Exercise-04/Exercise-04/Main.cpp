/*
	[ description of the fourth fixation exercise ] :
		- Write a program that reads a student's three grades and
		the number of absences he has in the discipline and answers whether
		he has passed, failed or is in the 4th exam. If the student is in
		the 4th exam, read their final grade and answer whether they passed
		or failed. Students must attend 75% of their lessons to avoid failing.
		Consider the number of lessons to be a constant value equal to 66.

		]
			Enter the discipline's grades and attendance
			grade 1: 2.5
			grade 2: 4.0
			grade 3: 3.8

			absences: 10
			
			4th exam
			grade 4: 5.5
			
			Reproved
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter the discipline's grades and attendance below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			[ grade 1 ]     : 2.5
			[ grade 2 ]     : 4.0
			[ grade 3 ]     : 3.8

			[ absences ]    : 10

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			] Reproved;

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>
#include <limits>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

const int NUMBER_OF_LESSONS = 66;

int main()
{
	auto absences
		= new int;

	auto grades
		= new float[4];

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter the discipline's grades and attendance below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	for (auto i = 0; i < 3; i++)
	{
		cout << "[ grade " << i + 1 << " ] \t: ";
		cin >> *(grades + i);
	}

	cout << endl;
	
	cout << "[ absences ] \t: ";
	cin >> *absences;

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	auto grade_sum
		= new float{};

	for (auto i = 0; i < 3; i++)
	{
		*grade_sum
			+= *(grades + i);
	}
	
	auto grade_average
		= *grade_sum / 3;
	
	if (*absences > (NUMBER_OF_LESSONS * 0.25f))
	{
		cout << "] Reproved for absence;" << endl;
	}
	else if (grade_average > 7.0f)
	{
		cout << "] Approved;" << endl;
	}
	else if (grade_average > 3.5f
			 &&
			 grade_average < 7.0f)
	{
		cout << "[ grade 4 ] \t: ";
		cin >> *(grades + 3);

		cout << endl;

		*grade_sum
			+= *(grades + 3);

		grade_average
			= *grade_sum / 4;

		if (grade_average >= 5)
		{
			cout << "] Approved;" << endl;
		}
		else
		{
			cout << "] Reproved;" << endl;
		}
	}
	else
	{
		cout << "] Reproved;" << endl;
	}


	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete absences;
	delete grade_sum;
	delete[] grades;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');

	cin
		.get();
}