/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			correct way
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- ranting '0' is a '10';
			- ranting '1' is a '10';
			- ranting '2' is a '10';


			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			incorrect way
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- ranting '0' is a '10';
			- ranting '1' is a '10';
			- ranting '2' is a '10';
			- ranting '3' is a '10';
			- ranting '4' is a '10';
			- ranting '5' is a '10';
			- ranting '6' is a '10';
			- ranting '7' is a '10';
			- ranting '8' is a '10';
			- ranting '9' is a '10';
			- ranting '10' is a '10';
			- ranting '11' is a '10';
			- ranting '12' is a '10';
			- ranting '13' is a '10';
			- ranting '14' is a '10';
			- ranting '15' is a '10';
			- ranting '16' is a '10';
			- ranting '17' is a '10';
			- ranting '18' is a '10';
			- ranting '19' is a '10';
			- ranting '20' is a '10';
			- ranting '21' is a '10';
			- ranting '22' is a '10';
			- ranting '23' is a '10';
			- ranting '24' is a '10';
			- ranting '25' is a '10';
			- ranting '26

			(-1073740940) - heap corruption error; *STATUS_HEAP_CORRUPTION*;

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	auto rating
		= new int[5]
		{
			10,
			10,
			10,
			9,
			7
		};
	
	auto i
		= new int;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "correct way" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	for (*i = 0; *(rating + *i) == 10; ++*i)
	{
		cout << "- ranting \'" << *i << "\' is a \'10\';" << endl;
	}
	
	cout << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "incorrect way" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	for (*i = 0; *(rating + *i) = 10; ++ * i)
	{
		cout << "- ranting \'" << *i << "\' is a \'10\';" << endl;
	}

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete i;
	delete[] rating;

	system("pause");
}