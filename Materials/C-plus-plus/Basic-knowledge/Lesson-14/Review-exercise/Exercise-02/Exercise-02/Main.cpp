/*
	[ description of the second review exercise ] :
		- Suppose 'torque' is a vector of 10 floats. Declare a pointer that points to
		the first element of 'torque' and use the pointer to show the first and last element
		of the vector.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- ] First element: '2.5';
			- ] Last element: '4.9';

			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;
using std::endl;

struct toque
{
	float elements[10];
};

int main()
{
	auto torques
		= toque
		{
			{
				2.5F,
				8.1F,
				3.4F,
				9.2F,
				5.7F,
				9.6F,
				6.3F,
				8.0F,
				5.4F,
				4.9F
			}
		};

	auto torques_element_ptr
		= torques.elements;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "- ] First element: \'" << torques_element_ptr[0] << "\';" << endl;
	cout << "- ] Last element: \'" << torques_element_ptr[9] << "\';" << endl;

	/*
	cout << "- ] First element: \'" << *torques_element_ptr << "\';" << endl;
	cout << "- ] Last element: \'" << *(torques_element_ptr + 9) << "\';" << endl;
	*/

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}