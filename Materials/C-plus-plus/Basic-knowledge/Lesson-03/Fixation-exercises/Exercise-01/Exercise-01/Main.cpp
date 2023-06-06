/*
	[ description of the first fixation exercise ] :
		- Correct and run the program below:

		]
			#include <iostream>

			using std::cin;
			using std::cout;
			using std::endl;

			int main()
			{
				int seconds, int minutes;

				cout << "Enter a number of minutes:
				cin >> minutes

				cout << endl;

				seconds = minutes * 100;

				cout << There is a total of  << seconds << " seconds in " 
					<< minutes <<  minute!;

				Cout << endl;

				system("pausa");
				return null;
			}
		]

		If the user enters 2, the program should display:

		]
			There is a total of 120 seconds in 2 minute!
		]

	[ output ] :
		```
			Enter a number of minutes: 2

			There is a total of 120 seconds in 2 minute!
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int seconds;
	int minutes;

	cout << "Enter a number of minutes: ";
	cin >> minutes;

	cout << endl;

	seconds = minutes * 60;

	cout << "There is a total of " << seconds << " seconds in " << minutes << " minute!";

	cout << endl;

	return 0;
}