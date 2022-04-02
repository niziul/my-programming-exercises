#include <iostream>
using namespace std;

int main()
{
	float g1, g2, g3, average;

	cout << "calculating the grade" << endl;
	cout << "[---------------------]" << endl;

	cout << endl;

	cout << "grade 1: ";
	cin >> g1;

	cout << "grade 2: ";
	cin >> g2;

	cout << "grade 3: ";
	cin >> g3;

	cout << endl;

	cout << "[---------------------]" << endl;

	average = (g1 + g2 + g3) / 3;

	cout << "the grade score: " << average;

	cout << endl;

	return 0;
}