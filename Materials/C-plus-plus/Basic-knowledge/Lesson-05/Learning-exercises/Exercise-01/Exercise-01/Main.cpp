/*
	[ description of the first learning exercise ] :
		- Define a role that increases an employee's salary by 15%. In the
		  function asks for the employee's current salary, pass this salary to a function
		  that returns the increased salary. In the main function show the new salary of the employee.

	[ output ] :
		```
			Enter current salary ( ex: 10000 )
			: 10000


			[ The salary of US$10000 has been adjusted by 15% and now the current salary is US$11500 ]
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

float salary_increase(float);

int main()
{
	float current_salary;
	float salary_with_the_increase;

	cout << "Enter current salary ( ex: 10000 )" << endl;
	cout << ": ";
	cin >> current_salary;

	cout << endl;
	cout << endl;

	salary_with_the_increase = salary_increase(current_salary);

	cout << "[ The salary of US$" << current_salary << " has been adjusted by 15% and now the current salary is US$" << salary_with_the_increase << " ]" << endl;
	
	cout << endl;
	cout << endl;

	system("pause");
}

float salary_increase(float current_salary)
{
	return current_salary + current_salary / 100 * 15;
}
