/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -
			Sorting out the gender of the baby...
			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			--] Congratulations, it's a girl!

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>
#include <random>

using std::cout;
using std::endl;
using std::random_device;

enum gender
{
	MALE,
	FEMALE
};

int main()
{
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "Sorting out the gender of the baby..." << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	random_device rand;

	auto rand_value
		= rand() % 2;

	if (rand_value == MALE)
	{
		cout << "--] Congratulations, it's a boy!" << endl;
	}

	if (rand_value == FEMALE)
	{
		cout << "--] Congratulations, it's a girl!" << endl;
	}

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
	
	system("pause");
}
