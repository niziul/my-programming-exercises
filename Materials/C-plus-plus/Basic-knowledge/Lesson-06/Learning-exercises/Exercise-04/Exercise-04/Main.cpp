/*
	[ description of the fourth learning exercise ] :
		- Change the program so that the result is displayed correctly both in the direct
		  calculation and in the calculation using the function.

		  ]
				#include <iostream>

				using std::cout;
				using std::endl;

				long long calculation_function(long long, long long);

				int main()
				{
					long long result = 200530 * 420800;
	
					cout << "Direct calculation result: " << result << endl;
					cout << "Function calculation result: " << calculation_function(200530, 420800) << endl;

					system("pause");
				}

				long long calculation_function(long long a, long long b)
				{
					return a * b;
				}
		  ]
	[ output ] :
		```
			[ Direct calculation result: 84383024000 ]


			[ Function calculation result: 84383024000 ]
		```
*/

#include <iostream>

using std::cout;
using std::endl;

long long calculation_function(long long, long long);

int main()
{
	long long result = 200530LL * 420800LL;
	
	cout << "[ Direct calculation result: " << result << " ]" << endl;

	cout << endl;
	cout << endl;

	cout << "[ Function calculation result: " << calculation_function(200530LL, 420800LL) << " ]" << endl;

	cout << endl;
	cout << endl;

	system("pause");
}

long long calculation_function(long long a, long long b)
{
	return a * b;
}
