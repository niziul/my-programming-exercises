/*
	[ description of the second review exercise ] :
		- One way to get a more unpredictable pseudo-random number is to use a seed value
		that changes over time. The '<ctime>' library has a 'time()' function that returns an amount
		seconds elapsed (usually since January 1, 1970) when we pass 'NULL' as argument to the function.

		Test the result of this modification by creating a pseudo-random number with 'rand()' and running the program
		several times.

		Finally, display the message 'BIG' if the number obtained is greater than 3198 and 'LITTLE' otherwise.

	[ output ] :
		```
			[ pseudo-random (big) ] - 13776
			[ pseudo-random (big) ] - 25697
			[ pseudo-random (big) ] - 6238
			[ pseudo-random (little) ] - 1992
		```
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;

int main()
{
	srand(time(NULL));
	
	for (int i = 0; i < 4; i++)
	{
		int pseudo_random_number = rand();

		if (pseudo_random_number >= 3198)
		{
			cout << "[ pseudo-random (big) ] - " << pseudo_random_number << endl;
		}
		else
		{
			cout << "[ pseudo-random (little) ] - " << pseudo_random_number << endl;
		}
	}

	system("pause");
}