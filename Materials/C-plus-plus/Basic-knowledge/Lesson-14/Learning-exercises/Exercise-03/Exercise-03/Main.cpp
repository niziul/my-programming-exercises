/*
	[ description of the third learning exercise ] :
		- Find out what the output of the following code snippet below is, without computer
		assistance. Then run the program step by step with the debugger to check if you have
		arrived at the right answer.
		
		]
			#include <iostream>

			using namespace std;

			int main()
			{
				int value = 10, * temp, sum = 0;

				temp = &value;
				*temp = 20;
				temp = &sum;
				*temp = value;

				cout << "value: " << value << "\nsum: " << sum << endl;
			}
		]

	[ output ] :
		```
			value: 20
			sum: 20
		```
*/

#include <iostream>

using namespace std;

int main()
{
	int value = 10, * temp, sum = 0;

	temp = &value;
	*temp = 20;
	temp = &sum;
	*temp = value;

	cout << "value: " << value << "\nsum: " << sum << endl;
}