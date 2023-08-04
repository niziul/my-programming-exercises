/*
	[ description of the fifth fixation exercise ] :
		- Build a dynamic array of 'students'. The student struct must be composed
		of 'name' (or registration), course code (integer without sing), and course
		status. The situation of the course should be an enumeration with the values:
		'approved', 'locked' and 'failed'. Ask the user to enter the number of students
		in the vector and then read the data of the first student. To finish show the data
		of the first student using a function that receives a pointer to student.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter the number of students below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 2

			-

			Enter the information of the first student below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - - - - - - ] students[1]

			name          : Sarah
			course code   : 2394
			course status : Approved

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -
			First student information
			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			name          : 'Sarah';
			course code   : '2394';
			course status : 'Approved';

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::strcmp;
using std::ostream;
using std::istream;

enum class course_status
{
	APPROVED,
	LOCKED,
	FAILED
};

struct student
{
	char name[20];
	int course_code;
	course_status course_status;
};

ostream& operator<<(ostream&, course_status&);
istream& operator>>(istream&, course_status&);

void show_the_data_of_the_first_student(student*);

int main()
{
	auto vector_size
		= 0;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter the number of students below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> vector_size;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	auto students
		= new student[vector_size];

	cout << "Enter the information of the first student below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "- - - - - - - ] students[1]" << endl;
	
	cout << endl;

	cout << "name          : ";
	cin >> (students + 0)->name;
	cout << "course code   : ";
	cin >> (students + 0)->course_code;
	cout << "course status : ";
	cin >> (students + 0)->course_status;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "First student information" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	show_the_data_of_the_first_student(students);

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	delete[] students;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}

ostream& operator<<(ostream& t_ostream, course_status& t_course_status)
{
	switch (t_course_status)
	{
		case course_status::APPROVED:
		{
			t_ostream << "Approved";
		}
		break;
		case course_status::LOCKED:
		{
			t_ostream << "Locked";
		}
		break;
		case course_status::FAILED:
		{
			t_ostream << "Failed";
		}
		break;
	}

	return t_ostream;
}

istream& operator>>(istream& t_istream, course_status& t_course_status)
{
	auto status
		= new char[9];

	t_istream >> status;

	if (strcmp(status, "Approved") == 0)
	{
		t_course_status = course_status::APPROVED;
	}
	else if (strcmp(status, "Locked") == 0)
	{
		t_course_status = course_status::LOCKED;
	}
	else if (strcmp(status, "Failed") == 0)
	{
		t_course_status = course_status::FAILED;
	}

	delete[] status;

	return t_istream;
}

void show_the_data_of_the_first_student(student* i_student)
{
	cout << "name          : \'" << (i_student + 0)->name << "\';" << endl;
	cout << "course code   : \'" << (i_student + 0)->course_code << "\';" << endl;
	cout << "course status : \'" << (i_student + 0)->course_status << "\';" << endl;
}