/*
	[ output ] :
		```v1
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			This program can format your hard drive and destroy all your data. Do you want
			to continue? <y/n>
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: y

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			] You've been warned!

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```

		```v2
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			This program can format your hard drive and destroy all your data. Do you want
			to continue? <y/n>
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: n

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			] A wise choice... Goodbye!

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```

		```v3
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			This program can format your hard drive and destroy all your data. Do you want
			to continue? <y/n>
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: j

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			] You didn't answer correctly, I should delete everything!

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
	auto input
		= new char;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "This program can format your hard drive and destroy all your data. Do you want \n"
			"to continue? <y/n>"<< endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> *input;

	cout << endl;
	cout << "-" << endl;
	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;
	
	if (*input == 'y'
		||
		*input == 'Y')
	{
		cout << "] You've been warned!\a\a" << endl;
	}
	else
	{
		if (*input == 'n'
			||
			*input == 'N')
		{
			cout << "] A wise choice... Goodbye!" << endl;
		}
		else
		{
			cout << "] You didn't answer correctly, I should delete everything!" << endl;
		}
	}

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete input;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');

	cin
		.get();
}