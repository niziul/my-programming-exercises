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

	std::cout << "-------------------" << std::endl;
	std::cout << "Grade Point Average" << std::endl;
	std::cout << "-------------------" << std::endl;


	std::cout << "Average: " << average_points << std::endl;

	return 0;
}