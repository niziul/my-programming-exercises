/*
	[ output ] :
		```
			<][> - - - - - - - - - - - - - - - - - - - - - - - - - <][>

			-] Amount of potatoes = 21

			<][> - - - - - - - - - - - - - - - - - - - - - - - - - <][>

			-] 1 package with 8 potatoes costs 30 cents per potato;

			-] 2 package costs 240 cents;

			<][> - - - - - - - - - - - - - - - - - - - - - - - - - <][>
*/

#include <iostream>

using std::cout;

int main()
{
	auto nextline
		= '\n';

	int potatoes[3];

	potatoes[0]
		= 7;

	potatoes[1]
		= 8;

	potatoes[2]
		= 6;

	int cost[3]
		= { 20, 30, 5 };

	cout << "<][> - - - - - - - - - - - - - - - - - - - - - - - - - <][>" << nextline;

	cout << nextline;

	cout << "-] Amount of potatoes = " << potatoes[0] + potatoes[1] + potatoes[2] << nextline;

	cout << nextline;

	cout << "<][> - - - - - - - - - - - - - - - - - - - - - - - - - <][>" << nextline;

	cout << nextline;
	
	cout << "-] 1 package with " << potatoes[1] << " potatoes costs " << cost[1] << " cents per potato;" << nextline;

	cout << nextline;

	int total
		= potatoes[1] * cost[1];

	cout << "-] 2 package costs " << total << " cents;" << nextline;

	cout << nextline;

	cout << "<][> - - - - - - - - - - - - - - - - - - - - - - - - - <][>" << nextline;

	system("pause");
}	