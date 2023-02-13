#include <iostream>

using std::cout;
using std::endl;

void simple(); // function prototype.

int main()
{
	cout << "[main();] function will call the [simple();] function!" << endl;
	
	cout << endl;
	cout << endl;

	simple();  // function call.

	return 0;
}

void simple()  // function definition.
{
	cout << "I'm a simple function!" << endl;
}