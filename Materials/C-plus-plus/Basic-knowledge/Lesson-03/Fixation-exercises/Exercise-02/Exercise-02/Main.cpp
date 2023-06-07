/*
	[ description of the second fixation exercise ] :
		- Write a program that creates an integer variable called 'measure'. Assign the value '10'
		to this variable. Calculate and display the value of '2' times the measure and the measure squared.
		The program should display all three values as in the example below:

		]
			measure = 10
			2x measure = 20
			squared measure = 100
		]

		Challenge: try to make this program using only one variable.

	[ output ] :
		```
			measure = 10
			2x measure = 20
			squared measure = 100
		```
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int measure = 10;

	cout << "measure = " << measure << endl;
	
	cout << "2x measure = " << measure * 2 << endl;

	cout << "squared measure = " << measure * measure << endl;

	return 0;
}