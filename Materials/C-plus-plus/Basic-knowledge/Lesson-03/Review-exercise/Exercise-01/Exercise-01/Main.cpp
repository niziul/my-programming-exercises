#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	float length;
	float width;
	float height;

	cout << "Enter the height, width and length: ";
	
	cin >> length;
	cin >> width;
	cin >> height;

	cout << endl;

	float volume = height * width * length;

	cout << "volume = " << volume;

	cout << endl;

	return 0;
}