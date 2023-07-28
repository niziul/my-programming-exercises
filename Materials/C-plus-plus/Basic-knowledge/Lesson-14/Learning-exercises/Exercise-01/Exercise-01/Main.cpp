/*
	[ description of the first learning exercise ] :
		- Declare a 'bowl' struct with the fields state (full or empty) and food type
		(soup or chicken soup). Create a "hunger" function that receives a pointer to a
		'bowl' and changes its state to "empty". In the main function create a full 'bowl', create
		a pointer that points to that 'bowl' and then show the 'bowl' was before dinner. Then call the
		'hunger' function with the pointer that points to the 'bowl' and at the end show the 'bowl' after
		dinner.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - ] bowl before dinner: 'full';

			-

			- - ] bowl after dinner: 'empty';

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using std::cout;
using std::endl;

struct st_bowl
{
	char state[20];
	char food[20];
};

void hunger(st_bowl*);

int main()
{
	auto bowl
		= st_bowl
		{
			"full",
			"soup"
		};

	auto bowl_ptr
		= &bowl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "- - ] bowl before dinner: \'" << bowl.state << "\';" << endl;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	hunger(bowl_ptr);

	cout << "- - ] bowl after dinner: \'" << bowl.state << "\';" << endl;
	
	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}

void hunger(st_bowl* bowl_ptr)
{
	strcpy(bowl_ptr->state, "empty");
}