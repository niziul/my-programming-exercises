/*
	[ output ] :
		```
			Today's exercises:


			[ do 10 push-ups ]


			[ do 20 abdominals ]
		```
*/

#include <iostream>
#include "gym.h"

using std::cout;
using std::endl;

int main()
{
	cout << "Today's exercises: " << endl;

	cout << endl;
	cout << endl;

	pushup(10);

	cout << endl;
	cout << endl;

	abdominal(20);

	cout << endl;
	cout << endl;

	system("pause");
}