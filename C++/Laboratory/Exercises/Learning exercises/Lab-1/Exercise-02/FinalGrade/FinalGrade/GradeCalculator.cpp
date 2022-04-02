#include <iostream>
using namespace std;

int main()
{
	float g1, g2, g3, g4, grade;

	cout << "calculating the grade" << endl;
	cout << "[---------------------]" << endl;

	cout << endl;

	cout << "grade 1: ";
	cin >> g1;

	cout << "grade 2: ";
	cin >> g2;

	cout << "grade 3: ";
	cin >> g3;

	grade = (g1 + g2 + g3) / 3;

	if (grade < 7.0F)
	{
		cout << "grade 4: ";
		cin >> g4;

		grade = (g1, g2, g3, g4) / 4;
	}

	cout << endl;

	cout << "[---------------------]" << endl;
	cout << "the grade score: " << grade;

	cout << endl;

	return 0;
}