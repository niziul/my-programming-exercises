/*
	[ output ] :
		```
			I wish everyone a Happy New Year and a Happy Christmas
		```
*/

#include <iostream>

using std::cout;
using std::endl;

void happy_function(void);
void new_year_function(void);
void christmas_function(void);

int main()
{
	cout << "I wish everyone a ";

	happy_function();

	new_year_function();

	cout << "and a ";

	happy_function();

	christmas_function();

	cout << endl;

	return 0;
}

void happy_function(void)
{
	cout << "Happy ";
}

void new_year_function(void)
{
	cout << "New Year ";
}

void christmas_function(void)
{
	cout << "Christmas ";
}