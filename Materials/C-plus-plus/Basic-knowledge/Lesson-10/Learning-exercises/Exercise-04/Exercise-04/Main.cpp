/*
	[ description of the fourth learning exercise ] :
		- When trying to store an element in an invalid position in an array, an error will
		not always occur. The code snippet below illustrates this situation. Assigning the value
		60 to position 5, although invalid, almost always works.

	[ output ] :
		```
			<;> - - - - - - - - - - - - - - - - <;>

			- - - - - - - - - - - - - - - - - - - -
			] vector_a
			- - - - - - - - - - - - - - - - - - - -

			index[5]: 60

			- - - - - - - - - - - - - - - - - - - -

			<;> - - - - - - - - - - - - - - - - <;>
		```
*/

#include <iostream>

using std::cout;

int main()
{
	auto nextline
		= '\n';

	auto vector_a
		= new int[5]
		{
			10,
			20,
			30,
			40,
			50
		};

	cout << "<;> - - - - - - - - - - - - - - - - <;>" << nextline;

	cout << nextline;

	cout << "- - - - - - - - - - - - - - - - - - - -" << nextline;

	cout << "] vector_a" << nextline;

	cout << "- - - - - - - - - - - - - - - - - - - -" << nextline;
	
	cout << nextline;

	vector_a[5] = 60;

	cout << "index[5]: " << vector_a[5] << nextline;

	/*
	
	vector_a[5000] = 60;

	cout << "index[5000]: " << vector_a[5] << nextline;
	
	*/
	
	cout << nextline;
	
	cout << "- - - - - - - - - - - - - - - - - - - -" << nextline;

	cout << nextline;
	
	cout << "<;> - - - - - - - - - - - - - - - - <;>" << nextline;
	
	cout << nextline;
	
	system("pause");
}