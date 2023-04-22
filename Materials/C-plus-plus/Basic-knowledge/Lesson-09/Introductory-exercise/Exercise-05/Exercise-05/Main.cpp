/*
	[ output ] :
		```
			------=-- --=----=-- --=----=-- --=------
			Enter a min value
			--
			> 10

			Enter a max value
			--
			> 20

			------=-- --=----=-- --=----=-- --=------
			Randomizing a value between '10' and '20'
			--] '18'
			------=-- --=----=-- --=----=-- --=------
		```
*/

#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;

int main()
{
	auto nextline
             = '\n';

	auto random_number
             = 0;

	auto min
             = 0;

	auto max
             = 0;

	cout << "------=-- --=----=-- --=----=-- --=------" << nextline;

	cout << "Enter a min value" << nextline;
	cout << "--" << nextline;
	cout << "> ";
	cin >> min;

	cout << nextline;

	cout << "Enter a max value" << nextline;
	cout << "--" << nextline;
	cout << "> ";
	cin >> max;

	cout << nextline;

	cout << "------=-- --=----=-- --=----=-- --=------" << nextline;
	
	cout << "Randomizing a value between \'" << min << "\' and \'" << max << "\'" << nextline;
	
	random_number
             = min + rand() % (max - min + 1);

	cout << "--] \'" << random_number << "\'" << nextline;

	cout << "------=-- --=----=-- --=----=-- --=------" << nextline;

	cout << nextline;
	
	system("pause");
}
