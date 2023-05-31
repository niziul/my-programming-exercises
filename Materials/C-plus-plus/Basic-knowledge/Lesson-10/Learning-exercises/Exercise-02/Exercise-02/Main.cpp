/*
	[ description of the second learning exercise ] :
		- UFERSA has adopted a new formula to calculate the partial average of the grades.
		In the new system, the partial average is the arithmetic average of the three grades.
		The old system used pesos, and the partial average was given by the formula below:

		]
			average = ( grade_1 * 2 + grade_2 * 3 + grade_3 * 4 ) / 9
		]

		Initialize a vector of three floats with the pesos of the grades from the old system.
		Create another array to hold the student's grades, ask what their grades were and fill the array
		with them. Use the vectors to calculate the average grade of the student in the old and new system and
		show them on the screen.

	[ output ] :
		```
			</> - - - - - - - - - - - - - - - - </>

			- - - - - - - - - - - - - - - - - - - -
			] Grades for the formula
			- - - - - - - - - - - - - - - - - - - -

			grade[0]: 8.5
			grade[1]: 4.5
			grade[2]: 6.7

			- - - - - - - - - - - - - - - - - - - -
			] Average grades
			- - - - - - - - - - - - - - - - - - - -

			old_formula: 6.36667
			new_formula: 6.56667

			- - - - - - - - - - - - - - - - - - - -

			</> - - - - - - - - - - - - - - - - </>
		```
*/

#include <iostream>
#include <array>

using std::cin;
using std::cout;
using std::array;

float returns_the_average_of_the_grades_using_the_old_formula(array<float, 3>);
float returns_the_average_of_the_grades_using_the_new_formula(array<float, 3>);

int main()
{
	auto nextline
		= '\n';

	auto grades_for_the_old_formula
		= array<float, 3>{};

	auto grades_for_the_new_formula
		= array<float, 3>{};

	cout << "</> - - - - - - - - - - - - - - - - </>" << nextline;

	cout << nextline;

	cout << "- - - - - - - - - - - - - - - - - - - -" << nextline;

	cout << "] Grades for the old formula" << nextline;

	cout << "- - - - - - - - - - - - - - - - - - - -" << nextline;

	cout << nextline;

	for (auto i = 0; i < grades_for_the_old_formula.size(); i++)
	{
		cout << "grade[" << i << "]: ";
		
		cin >> grades_for_the_old_formula[i];

		grades_for_the_new_formula[i] = grades_for_the_old_formula[i];
	}

	cout << nextline;

	cout << "- - - - - - - - - - - - - - - - - - - -" << nextline;

	cout << "] Average grades" << nextline;

	cout << "- - - - - - - - - - - - - - - - - - - -" << nextline;

	cout << nextline;

	auto old_formula
		= returns_the_average_of_the_grades_using_the_old_formula(grades_for_the_old_formula);

	cout << "old_formula: " << old_formula << nextline;

	auto new_formula
		= returns_the_average_of_the_grades_using_the_new_formula(grades_for_the_new_formula);

	cout << "new_formula: " << new_formula << nextline;

	cout << nextline;

	cout << "- - - - - - - - - - - - - - - - - - - -" << nextline;

	cout << nextline;
	
	cout << "</> - - - - - - - - - - - - - - - - </>" << nextline;
	
	cout << nextline;

	system("pause");
}

float returns_the_average_of_the_grades_using_the_old_formula(array<float, 3> grades)
{
	return ( grades[0] * 2 + grades[1] * 3 + grades[2] * 4 ) / 9;
}
float returns_the_average_of_the_grades_using_the_new_formula(array<float, 3> grades)
{
	return ( grades[0] + grades[1] + grades[2] ) / 3;
}