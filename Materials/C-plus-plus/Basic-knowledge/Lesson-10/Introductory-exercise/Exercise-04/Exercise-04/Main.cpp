/*
	[ output ] :
		```
			<//> - - - - - - --- - - - - - - <//>

			-] total of potatoes = 21

			<//> - - - - - - --- - - - - - - <//>
		```
*/

#include <iostream>

using std::cout;

int returns_the_sum_of_the_first_three_values_of_a_vector(int []);

int main()
{
	auto nextline
		= '\n';

	auto potatoes
		= new int[3]{ 7, 8, 6 };

	cout << "<//> - - - - - - --- - - - - - - <//>" << nextline;

	cout << nextline;

	cout << "-] total of potatoes = " << returns_the_sum_of_the_first_three_values_of_a_vector(potatoes) << nextline;

	cout << nextline;

	cout << "<//> - - - - - - --- - - - - - - <//>" << nextline;

	cout << nextline;
	
	system("pause");
}

int returns_the_sum_of_the_first_three_values_of_a_vector(int vector[])
{
	return vector[0] + vector[1] + vector[2];
}
