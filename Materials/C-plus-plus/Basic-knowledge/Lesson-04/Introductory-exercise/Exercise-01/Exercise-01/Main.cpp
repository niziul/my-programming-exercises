/*
	[ output ] :
		```
			What is the area of your house in square meters?
			- area ( ex: 6.25 ) : 6.25


			[ This is equivalent to a square with 2.5 meters on a side. ]
		```
*/

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	double area;
	double side;

	cout << "What is the area of your house in square meters?" << endl;
	cout << "- area ( ex: 6.25 ) : ";
	cin >> area;

	cout << endl;
	cout << endl;

	side = sqrt(area);

	cout << "[ This is equivalent to a square with " << side << " meters on a side. ]" << endl;

	cout << endl;
	cout << endl;

	system("pause");
}