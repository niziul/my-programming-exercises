/*
	[ description of the third learning exercise ] :
		- Declare an array of three double's and ask the user to enter the values of the array. 
		Create a function that takes the three-position array and returns the result of multiplying
		the first element by the last element minus the middle one. Call the function and show its return
		in the main function.

	[ output ] :
		```
			</> - - - - - - - - - - - - - - - - </>

			- - - - - - - - - - - - - - - - - - - -
			] Enter the values for the vector
			- - - - - - - - - - - - - - - - - - - -

			vector_a[0]: 3.5
			vector_a[1]: 6.7
			vector_a[2]: 4.3

			- - - - - - - - - - - - - - - - - - - -

			result: 8.4

			- - - - - - - - - - - - - - - - - - - -

			</> - - - - - - - - - - - - - - - - </>
		```
*/

#include <iostream>
#include <array>

using std::cin;
using std::cout;
using std::array;

double function_a(array<double, 3>);

int main()
{
	auto nextline
		= '\n';

	auto vector_a
		= array<double, 3>{};

	cout << "</> - - - - - - - - - - - - - - - - </>" << nextline;

	cout << nextline;

	cout << "- - - - - - - - - - - - - - - - - - - -" << nextline;

	cout << "] Enter the values for the vector" << nextline;

	cout << "- - - - - - - - - - - - - - - - - - - -" << nextline;

	cout << nextline;

	for (auto i = 0; i < vector_a.size(); i++)
	{
		cout << "vector_a[" << i << "]: ";
		
		cin >> vector_a[i];
	}

	cout << nextline;
	
	cout << "- - - - - - - - - - - - - - - - - - - -" << nextline;

	cout << nextline;

	cout << "result: " << function_a(vector_a) << nextline;

	cout << nextline;

	cout << "- - - - - - - - - - - - - - - - - - - -" << nextline;

	cout << nextline;
	
	cout << "</> - - - - - - - - - - - - - - - - </>" << nextline;
	
	cout << nextline;
	
	system("pause");
}

double function_a(array<double, 3> vector)
{
	return vector[0] * (vector[1] - vector[2]);
}
