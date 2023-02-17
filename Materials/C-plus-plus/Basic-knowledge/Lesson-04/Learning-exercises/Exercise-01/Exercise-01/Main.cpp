/*
	[ description of the first learning exercise ] :
		- Given two points P and Q on the computer screen, calculate the distance between them
		  using the formula: Distance = √(Qx - Px)² + (Qy - Py)².


	[ output ] :
		```
			What is the value of P ( ex: 5 8 )?
			: 5 8


			What is the value of Q ( ex: 20 4 )?
			: 20 4


			[ The distance between P and Q is: 15.5242 ]
		```
*/

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	float value_of_p_x;
	float value_of_p_y;

	float value_of_q_x;
	float value_of_q_y;

	cout << "What is the value of P ( ex: 5 8 )?" << endl;
	cout << ": ";
	cin >> value_of_p_x >> value_of_p_y;

	cout << endl;
	cout << endl;

	cout << "What is the value of Q ( ex: 20 4 )?" << endl;
	cout << ": ";
	cin >> value_of_q_x >> value_of_q_y;

	cout << endl;
	cout << endl;

	float distance_between_p_and_q = sqrtf( powf(value_of_q_x - value_of_p_x, 2) + powf(value_of_q_y - value_of_p_y, 2) );

	cout << "[ The distance between P and Q is: " << distance_between_p_and_q << " ]" << endl;

	cout << endl;
	cout << endl;

	system("pause");
}