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