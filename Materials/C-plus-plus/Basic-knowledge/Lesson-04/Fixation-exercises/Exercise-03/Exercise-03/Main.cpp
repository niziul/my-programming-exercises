/*
	[ description of the third fixation exercise ] :
		- Write a program that calls a function named one_three(). This function should
		  display on the screen the word "One", call the function named two(), and then display the
		  word "Three". The function two() should display the word "Two" on the screen. The function
		  main() function should say "Starting now:", call the function one_three(), and then
		  then display the word "Done!

	[ output ] :
		```
			Starting now:
			One Two Three
			Done!
		```
*/

#include <iostream>

using std::cout;
using std::endl;

void one_three_function();
void one_function();
void two_function();
void three_function();

int main()
{
	cout << "Starting now:";

	cout << endl;

	one_three_function();

	cout << endl;

	cout << "Done!";

	cout << endl;

	system("pause");
}

void one_three_function()
{
	one_function();

	two_function();

	three_function();
}

void one_function()
{
	cout << "One ";
}

void two_function()
{
	cout << "Two ";
}

void three_function()
{
	cout << "Three ";
}
