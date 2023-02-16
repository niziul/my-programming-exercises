/*
	[ description of the first fixation exercise ] :
		- Write a program that produces the output below. To achieve this goal
		  create a function that displays "Smile!" only once and calls it in the 
		  main function as many times as necessary to generate the output.
	
	[ output ] :
		```
			Smile! Smile! Smile! Smile!
			Smile! Smile!
			Smile!
		```
*/ 

#include <iostream>

using std::cout;
using std::endl;

void smile_function();

int main()
{
	smile_function();
	smile_function();
	smile_function();
	smile_function();

	cout << endl;

	smile_function();
	smile_function();

	cout << endl;

	smile_function();

	cout << endl;

	system("pause");
}

void smile_function()
{
	cout << "Smile! ";
}
