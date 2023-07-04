/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - <@>

			Enter the coordinates of the point below
			- - - - - - - - - - - - - - - - - - - - - - - -
			x: 32
			y: 43

			-

			- - - - - - - - - - - - - - - - - - - - - - - -

			--] the point is at the position: ('32','43').

			- - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	struct
	{
		int x;
		int y;
	}
	point;
	
	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter the coordinates of the point below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "x: ";
	cin >> point.x;
	cout << "y: ";
	cin >> point.y;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	cout << "--] the point is at the position: (\'" << point.x << "\',\'" << point.y << "\')." << endl;

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << endl;
	
	system("pause");
}