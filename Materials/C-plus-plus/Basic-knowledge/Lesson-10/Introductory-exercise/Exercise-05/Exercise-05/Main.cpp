/*
	[ output ] :
		```
			<< - >> - - - - - - = - - - - - - << - >>

			vector_i - 0: 6
			vector_i - 1: 3
			vector_i - 2: 8
			vector_i - 3: 5
			vector_i - 4: 1

			- - - - - - - - - - - - - - - - - - - - -

			vector_f - 0: 2.5
			vector_f - 1: 7.5
			vector_f - 2: 3.4
			vector_f - 3: 7.8
			vector_f - 4: 7.6

			<< - >> - - - - - - = - - - - - - << - >>
		```
*/

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int main()
{
	auto nextline
		= '\n';

    auto vector_i
		= vector<int>(5);

    auto vector_f
		= vector<float>(5);

	cout << "<< - >> - - - - - - = - - - - - - << - >>" << nextline;

	cout << nextline;

	for (auto i = 0; i < vector_i.size(); i++)
	{
		cout << "vector_i - " << i << ": ";
		cin >> vector_i[i];
	}

	cout << nextline;

	cout << "- - - - - - - - - - - - - - - - - - - - -"  << nextline;
	
	cout << nextline;

	for (auto i = 0; i < vector_f.size(); i++)
	{
		cout << "vector_f - " << i << ": ";
		cin >> vector_f[i];
	}
	
	cout << nextline;

	cout << "<< - >> - - - - - - = - - - - - - << - >>" << nextline;

	system("pause");
}