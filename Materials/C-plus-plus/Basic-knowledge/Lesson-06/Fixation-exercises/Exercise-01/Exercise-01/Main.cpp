/*
	[ description of the first fixation exercise ] :
		- Correct the program below by keeping the symbolic constant 'Zero'.

		]
				include iostream
				using std::cout
				using std::endl
				int main{}
				(
					Int total;

					Cout << "Initially total = " << Total << " (ZERO)\n";

					Total = 50;

					cout << "After total assignment = " << total << endl;

					Return ZERO;
				)
		]

		So that the output will be:

		]
			Initially total = 0 (ZERO)


			After total "assignment" = 50
		]

	[ output ] :
		```
			Initially total = 0 (ZERO)


			After total "assignment" = 50
		```
*/

#include <iostream>

using std::cout;
using std::endl;

#define ZERO 0;

int main()
{
	int total = ZERO;

	cout << "Initially total = " << total << " (ZERO)" << endl;

	cout << endl;
	cout << endl;

	total = 50;

	cout << "After total \u0022assignment\u0022 = " << total << endl;

	cout << endl;
	cout << endl;

	return ZERO;

	system("pause");
}