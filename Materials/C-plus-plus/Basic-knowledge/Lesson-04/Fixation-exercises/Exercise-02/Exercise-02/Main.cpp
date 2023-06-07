/*
	[ description of the second fixation exercise ] :
		- Write a Line() function that, using a single cout and without using repeats or
		  jumps, produces a fixed length line consisting of 10 hyphen characters. Also write
		  a Small(), Medium(), and Large() function that makes use of the Line() function and line
		  skips to produce lines with 10, 20 and 30 hyphens respectively. The program should produce the
		  output below. The Line() function must not be called directly from main(), only Small(), Medium() and Large()
		  must Large() should make use of it.
	
	[ output ] :
		```
			----------
			--------------------
			------------------------------
			Computer Programming
			------------------------------
			--------------------
			----------
		```
*/

#include <iostream>

using std::cout;
using std::endl;

void line_function();
void small_function();
void medium_function();
void large_function();

int main()
{
	small_function();

	medium_function();

	large_function();

	cout << "Computer Programming" << endl;

	large_function();

	medium_function();

	small_function();

	system("pause");
}

void line_function()
{
	cout << "----------";
}

void small_function()
{
	line_function();

	cout << endl;
}

void medium_function()
{
	line_function();
	line_function();

	cout << endl;
}

void large_function()
{
	line_function();
	line_function();
	line_function();

	cout << endl;
}
