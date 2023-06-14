/*
	[ output ] :
		```
			<.> - - - - - - - - - - - - - - - - <.>

			--] meow

			--] bark╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠p√∩╜▄

			<.> - - - - - - - - - - - - - - - - <.>
		```
*/

#include <iostream>
#include <array>

using std::cout;
using std::endl;
using std::array;

int main()
{
	auto cat
		= array<char, 5>
		{
			'm',
			'e',
			'o',
			'w',
			'\0'
		};

	auto dog
		= array<char, 4>
		{
			'b',
			'a',
			'r',
			'k'
		};

	cout << "<.> - - - - - - - - - - - - - - - - <.>" << endl;

	cout << endl;

	cout << "--] ";
	cout << cat.data() << endl;

	cout << endl;
	
	cout << "--] ";
	cout << dog.data() << endl;

	cout << endl;
	
	cout << "<.> - - - - - - - - - - - - - - - - <.>" << endl;

	system("pause");
}