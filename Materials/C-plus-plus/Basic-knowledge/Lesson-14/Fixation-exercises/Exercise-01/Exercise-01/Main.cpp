/*
	[ description of the first fixation exercise ] :
		- Modify the program below so that it shows the number 10 on the screen using the
		pointer that:

		]
			#include <iostream>

			using namespace std;

			int main()
			{
				int x, * p, ** q;

				p = &x;
				q = &p;
				x = 10;

				cout << q << endl;
			}
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
			- - ] '10';
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int x, *p, **q;

	p = &x;
	q = &p;
	x = 10;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << "- - ] \'" << **q << "\';" << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}