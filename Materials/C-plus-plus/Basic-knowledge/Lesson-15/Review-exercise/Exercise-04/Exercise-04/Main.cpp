/*
	[ description of the fourth review exercise ] :
		- Given the dynamic vector of fish from the previous question, create a function to
		receive a vector of fish. The function should show the weight of the first fish.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter the amount of fish you want to catch today
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 10

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			Enter the information of the first fish you caught today
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			[ type   ] : Piaba
			[ weight ] : 6.7
			[ length ] : 8

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - ] The weight of the fish, according to the information provided, is '6.7' grams.

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct fish
{
	char type[20];
	float weight;
	int length;
};

void function(fish*);

int main()
{
	auto vector_size
		= 0;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter the amount of fish you want to catch today" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> vector_size;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	auto fishes
		= new fish[vector_size];

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "Enter the information of the first fish you caught today" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "[ type   ] : ";
	cin >> fishes[0].type;
	cout << "[ weight ] : ";
	cin >> fishes[0].weight;
	cout << "[ length ] : ";
	cin >> fishes[0].length;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	function(fishes);
	
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	delete [] fishes;
	
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}

void function(fish* fishes)
{
	cout << "- - ] The weight of the fish, according to the information provided, is \'" << fishes[0].weight << "\' grams." << endl;
}