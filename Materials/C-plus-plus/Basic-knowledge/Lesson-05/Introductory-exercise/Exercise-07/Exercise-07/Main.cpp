#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int convert(int);

int main()
{
	int distance_in_meters;
	int distance_in_centimeters;

	cout << "What is the distance in meters that you want to convert to centimeters?" << endl;
	cout << ": ";
	cin >> distance_in_meters;

	cout << endl;
	cout << endl;

	distance_in_centimeters = convert(distance_in_meters);

	cout << "[ " << distance_in_meters << " meters = " << distance_in_centimeters << " centimeters ]" << endl;
	
	cout << endl;
	cout << endl;

	system("pause");
}

int convert(int number)
{
	return 100 * number;
}
