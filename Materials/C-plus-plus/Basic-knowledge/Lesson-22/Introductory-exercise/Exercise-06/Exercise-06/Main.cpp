/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter a line of text below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: let's have a snack. you pay!

			-

			] full text:
											let's have a snack. you pay!


			] line until the first dot:
											let's have a snack.

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- ] '3' spaces;

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
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
	auto lines
		= new char[80]{};

	auto spaces
		= new int{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter a line of text below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin
		.getline(lines, 80);

	cout << endl;
	cout << "-" << endl;
	cout << endl;

	cout << "] full text:" << endl;
	cout << "\t\t\t\t";
	cout << lines << endl;

	cout << endl;
	cout << endl;

	cout << "] line until the first dot:" << endl;;
	cout << "\t\t\t\t";

	/*
	for (auto i = 0; *(lines + i) != '\0'; ++i)
	{
		cout << *(lines + i);

		if (*(lines + i) == '.')
		{
			break;
		}

		if (*(lines + i) != ' ')
		{
			continue;
		}

		(*spaces)++;
	}
	*/

	for (auto i = 0; (*(lines + i) != '\0') && (*(lines + i) != '.'); ++i)
	{
		cout << *(lines + i);

		if (*(lines + i) == ' ')
		{
			(*spaces)++;
		}
	}

	cout << endl;
	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	cout << "- ] \'" << *spaces << "\' spaces;" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
	
	delete spaces;
	delete[] lines;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');
}