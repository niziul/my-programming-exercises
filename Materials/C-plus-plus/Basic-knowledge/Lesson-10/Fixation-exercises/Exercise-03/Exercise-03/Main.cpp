/*
	[ description of the third fixation exercise ] :
		- Build a function that takes an array of five integer elements and
		  returns the sum of all elements of the vector. Build a program to test the function. 

	[ output ] :
		```
			< + > - - - - - - - - - - - - - - - - < + >

			Enter five values
			- - - - - - - - - - - - - - - - - - - - - -

			value[0] : 2

			value[1] : 3

			value[2] : 5

			value[3] : 4

			value[4] : 6

			The sum of all elements of the vector
			- - - - - - - - - - - - - - - - - - - - - -
			: '20'
			- - - - - - - - - - - - - - - - - - - - - -

			< + > - - - - - - - - - - - - - - - - < + >
		```
*/

#include <iostream>
#include <array>

using std::cin;
using std::cout;
using std::array;

int main()
{
	auto nextline
		= '\n';

	auto vector_a
		= array<int, 5>{};

	cout << "< + > - - - - - - - - - - - - - - - - < + >" << nextline;

	cout << nextline;

	cout << "Enter five values" << nextline;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - -" << nextline;

	cout << nextline;

	for (auto i = 0; i < vector_a.size(); i++)
	{
		cout << "value[" << i << "] : ";
		
		cin >> vector_a[i];

		cout << nextline;
	}
	
	cout << "The sum of all elements of the vector" << nextline;

	cout << "- - - - - - - - - - - - - - - - - - - - - -" << nextline;

	auto sum_of_all_elements_of_the_vector
		= 0;

	for (auto i = 0; i < vector_a.size(); i++)
	{
		sum_of_all_elements_of_the_vector
			+= vector_a[i];
	}

	cout << ": \'" << sum_of_all_elements_of_the_vector << "\'";

	cout << nextline;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - -" << nextline;

	cout << nextline;

	cout << "< + > - - - - - - - - - - - - - - - - < + >" << nextline;

	system("pause");
}