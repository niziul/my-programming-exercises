#include <iostream>

using std::cout;
using std::endl;

float average_function(float, float);

int main()
{
	float a = average_function(8, 10);
	float b = 12 + average_function(15, average_function(4, 2)) + a;

	cout << "The lessons are " << b + average_function(20, 40) << " hours long." << endl;

	system("pause");
}

float average_function(float x, float y)
{
	float num = (x + y) / 2;
	return num;
}
