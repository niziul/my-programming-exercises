/*
	[ description of the first review exercise ] :
		- Use only one 'cin' statement to read the following three pieces of information
		for different variables. Multiply the values of the variables height, width
		and length to find the volume of the cube.
		
		]
			Enter the height, width and length:
			2.1 3.5 5.0
			
			The volume is 36.75 cubic cm.
		]

		Does the program work if you press 'Enter' instead of 'Space' after typing
		each number?

		Answer: yes!

		]
			Enter the height, width and length:
			2.1
			3.5
			5.0
			
			The volume is 36.75 cubic cm.
		]

		What if we use a cin statement for each number? Is it still possible to enter all the
		numbers on the same line?

		Answer: yes!

	[ output ] :
		```
			Enter the height, width and length: 2.1 3.5 5.0

			The volume is 36.75 cubic cm.
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	float length;
	float width;
	float height;

	cout << "Enter the height, width and length: ";
	
	cin >> length;
	cin >> width;
	cin >> height;

	cout << endl;

	float volume = height * width * length;

	cout << "The volume is = " << volume << " cubic cm";

	cout << endl;

	return 0;
}