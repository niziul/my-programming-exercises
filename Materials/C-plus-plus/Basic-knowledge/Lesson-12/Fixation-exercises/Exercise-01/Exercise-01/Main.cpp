/*
	[ description of the first fixation exercise ] :
		- The 'chocolate' struct contains three members:
			+ The first holds the brand of the chocolate bar;
			+ The second stores the weight of the bar ( it has a fractional part );
			+ The third contains the number of calories ( an integer value );

		Write a program that declares such struct and creates a variable called 'snack',
		initializing its members to: ('charge', 2.3, 350) respectively. A initialization must
		be part of the variable declaration. Finally, the program must display the contents of the variable
		'snack'.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - <@>

			- - - - - - - - - - - - - - - - - - - - - - - -
			Chocolate bar information
			- - - - - - - - - - - - - - - - - - - - - - - -

			[brand   ] : 'charge';

			[weight  ] : '2.3';

			[calories] : '350';

			- - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;
using std::endl;

struct chocolate
{
	char brand[20];
	float weight;
	int calories;
};

int main()
{
	auto snack
		= chocolate
		{
			"charge",
			2.3,
			350
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << "Chocolate bar information" << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	cout << "[brand   ] : \'" << snack.brand << "\';" << endl;

	cout << endl;
	
	cout << "[weight  ] : \'" << snack.weight << "\';" << endl;

	cout << endl;

	cout << "[calories] : \'" << snack.calories << "\';" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}