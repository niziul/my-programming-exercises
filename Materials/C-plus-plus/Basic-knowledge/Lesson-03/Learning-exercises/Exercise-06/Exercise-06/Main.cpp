#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int value_of_the_prism_base;
	int value_of_the_prism_volume;
	int value_of_the_prism_height;
	int value_of_the_first_side_of_the_prism_base;
	int value_of_the_second_side_of_the_prism_base;

	cout << "What is the first value of the side of the base of the prism?" << endl;
	cout << ": ";
	cin >> value_of_the_first_side_of_the_prism_base;

	cout << "What is the second value of the side of the base of the prism?" << endl;
	cout << ": ";
	cin >> value_of_the_second_side_of_the_prism_base;

	cout << endl;

	value_of_the_prism_base = value_of_the_first_side_of_the_prism_base * value_of_the_second_side_of_the_prism_base;

	cout << "[ The area of the base of the prism is = " << value_of_the_prism_base << " ]";

	cout << endl;
	cout << endl;

	cout << "What is the height of the prism?" << endl;
	cout << ": ";
	cin >> value_of_the_prism_height;

	cout << endl;

	value_of_the_prism_volume = value_of_the_prism_base * value_of_the_prism_height;

	cout << "[ The volume of the prism is = " << value_of_the_prism_volume << " ]";

	cout << endl;
	cout << endl;

	return 0;
}