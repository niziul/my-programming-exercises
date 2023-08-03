/*
	[ description of the first fixation exercise ] :
		- Create a program that asks the user to enter the number of students in a class.
		The program should use this information to create a dynamic vector that stores the
		final grades of two students and then display these grades using 'cout'.

		]
			Enter the number of students (minimum 2): 10
			Enter the grade of two students: 4.5 8.9
			
			The grades entered were 4.5 and 8.9.
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter the number of students (minimum 2)
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 10

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			Enter the grade of two students below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - -] students[1]
			name : lisa
			grade: 4.5

			- - -] students[2]
			name : pedro
			grade: 8.9

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - ] The grades entered were '4.5' and '8.9'.

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct student
{
	char name[20];
	float grade;
};

int main()
{
	auto number_of_students
		= 2;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter the number of students (minimum 2)" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> number_of_students;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	auto students
		= new student[number_of_students];

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "Enter the grade of two students below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	cout << "- - -] students[1]" << endl;
	cout << "name : ";
	cin >> (students + 0)->name;
	cout << "grade: ";
	cin >> (students + 0)->grade;

	cout << endl;

	cout << "- - -] students[2]" << endl;
	cout << "name : ";
	cin >> (students + 1)->name;
	cout << "grade: ";
	cin >> (students + 1)->grade;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	cout << "- - ] The grades entered were \'" << (students + 0)->grade << "\' and \'" << (students + 1)->grade << "\'." << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	delete [] students;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}