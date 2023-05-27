/*
	[ output ] :
		```
			<< - >> - - - - - - = - - - - - - << - >>

			array_i - 0: 6
			array_i - 1: 3
			array_i - 2: 8
			array_i - 3: 5
			array_i - 4: 1

			- - - - - - - - - - - - - - - - - - - - -

			array_f - 0: 2.5
			array_f - 1: 7.5
			array_f - 2: 3.4
			array_f - 3: 7.8
			array_f - 4: 7.6

			<< - >> - - - - - - = - - - - - - << - >>
		```
*/

#include <iostream>
#include <array>

using std::cin;
using std::cout;
using std::array;

int main()
{
	auto nextline
		= '\n';

	auto array_i
		= array<int, 5>{};

	auto array_f
		= array<float, 5>{};

	cout << "<< - >> - - - - - - = - - - - - - << - >>" << nextline;

	cout << nextline;

	for (auto i = 0; i < array_i.size(); i++)
	{
		cout << "array_i - " << i << ": ";
		cin >> array_i[i];
	}

	cout << nextline;

	cout << "- - - - - - - - - - - - - - - - - - - - -" << nextline;

	cout << nextline;

	for (auto i = 0; i < array_f.size(); i++)
	{
		cout << "array_f - " << i << ": ";
		cin >> array_f[i];
	}

	cout << nextline;

	cout << "<< - >> - - - - - - = - - - - - - << - >>" << nextline;

	system("pause");
}