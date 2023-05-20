/*
	[ output ] :
		```
			-=- - - - - - - - - - - - - - -   - - - - - - - - - - - - - - -=-

			Contents of position - 0: -858993460
			Contents of position - 1: -858993460
			Contents of position - 2: -858993460
			-=- - - - - - - - - - - - - - -   - - - - - - - - - - - - - - -=-

			Contents of position - 0: 0
			Contents of position - 1: 0
			Contents of position - 2: 0

			-=- - - - - - - - - - - - - - -   - - - - - - - - - - - - - - -=-

			The vector has '12' bytes.

			The first element of the vector has '4' bytes.

			-=- - - - - - - - - - - - - - -   - - - - - - - - - - - - - - -=-
		```
*/

#include <iostream>

using std::cout;

int main()
{
	auto nextline
		= '\n';

	int vector[3];

	cout << "-=- - - - - - - - - - - - - - -   - - - - - - - - - - - - - - -=-" << nextline;

	cout << nextline;

	cout << "Contents of position - 0: " << vector[0] << nextline;
	cout << "Contents of position - 1: " << vector[1] << nextline;
	cout << "Contents of position - 2: " << vector[2] << nextline;

	cout << nextline;

	cout << "-=- - - - - - - - - - - - - - -   - - - - - - - - - - - - - - -=-" << nextline;

	cout << nextline;

	vector[0]
		= 0;

	vector[1]
		= 0;

	vector[2]
		= 0;

	cout << "Contents of position - 0: " << vector[0] << nextline;
	cout << "Contents of position - 1: " << vector[1] << nextline;
	cout << "Contents of position - 2: " << vector[2] << nextline;

	cout << nextline;

	cout << "-=- - - - - - - - - - - - - - -   - - - - - - - - - - - - - - -=-" << nextline;

	cout << nextline;
	
	cout << "The vector has \'" << sizeof vector << "\' bytes." << nextline;

	cout << nextline;

	cout << "The first element of the vector has \'" << sizeof vector[0] << "\' bytes." << nextline;

	cout << nextline;

	cout << "-=- - - - - - - - - - - - - - -   - - - - - - - - - - - - - - -=-" << nextline;

	system("pause");
}