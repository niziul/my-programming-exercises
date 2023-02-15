#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

int main()
{
	srand(1);

	cout << "[ pseudo-random ] - " << rand() << endl;
	cout << "[ pseudo-random ] - " << rand() << endl;
	cout << "[ pseudo-random ] - " << rand() << endl;
	cout << "[ pseudo-random ] - " << rand() << endl;

	system("pause");
}