/*
	[ output ] :
		```v1

			run: calculator...
		
		```

		```v2

			run: notepad...

		```

		```v3

			run: mspaint...

		```
*/

#include <iostream>

using std::system;

int main(int argc, char** argv)
{
	std::cout << "run: calculator..." << std::endl;

	system(argv[1]);

	/*
	std::cout << "run: notepad..." << std::endl;

	system(argv[2]);
	*/

	/*
	std::cout << "run: mspaint..." << std::endl;

	system(argv[3]);
	*/
	return 0;
}