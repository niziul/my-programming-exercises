#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int carrot;
	carrot = 25;

	cout << "I have" << " ";
	cout << carrot;

	cout << " " << "carrot.";
	cout << endl;

	carrot = carrot - 1;
	
	cout << "Now i have" << " " << carrot << " " << "carrots." << endl;

	return 0;
}