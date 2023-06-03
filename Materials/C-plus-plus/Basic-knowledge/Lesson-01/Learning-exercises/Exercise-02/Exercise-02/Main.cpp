/*
	[ output ] :
		```v1
			------------------------------
			Grade Point Average Calculator
			------------------------------
			First Grade: 8.7

			Second Grade: 9.8

			Third Grade: 6.7

			-------------------
			Grade Point Average
			-------------------
			Average: 8.4
		```

		```v2
			------------------------------
			Grade Point Average Calculator
			------------------------------
			First Grade: 4.5

			Second Grade: 3.5

			Third Grade: 6.7

			Fourth Grade: 5.4

			-------------------
			Grade Point Average
			-------------------
			Average: 5.025
		```
*/

#include <iostream>

int main()
{
	float first_grade, second_grade, third_grade, average_points;

	std::cout << "------------------------------" << std::endl;
	std::cout << "Grade Point Average Calculator" << std::endl;
	std::cout << "------------------------------" << std::endl;

	std::cout << "First Grade: ";
	std::cin >> first_grade;

	std::cout << std::endl;

	std::cout << "Second Grade: ";
	std::cin >> second_grade;

	std::cout << std::endl;

	std::cout << "Third Grade: ";
	std::cin >> third_grade;

	std::cout << std::endl;

	average_points = (first_grade + second_grade + third_grade) / 3;

	if (average_points < 7.0)
	{
		float fourth_grade;

		std::cout << "Fourth Grade: ";
		std::cin >> fourth_grade;

		std::cout << std::endl;

		average_points = (first_grade + second_grade + third_grade + fourth_grade) / 4;
	}

	std::cout << "-------------------" << std::endl;
	std::cout << "Grade Point Average" << std::endl;
	std::cout << "-------------------" << std::endl;


	std::cout << "Average: " << average_points << std::endl;

	return 0;
}