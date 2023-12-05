/*
	[ description of the first fixation exercise ] :
		- Rewrite the program below so that it doesn't use the
		'break' and 'continue' statements, but still performs the
		same function.

		]
			#include <iostream>
			#include <cctype>

			using namespace std;

			int main()
			{
				int letters = 0;
				char input;
				cin >> input;
				while (input != '!')
				{
					if (input == '?')
						break;
					if (!isalpha(input))
					{
						cin >> input;
						continue;
					}

					letters++;

					cin >> input;
				}
				return 0;
			}
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter a line of text below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: The sky is beautiful! but at night it's spectacular.

			-

			- ] amount of letters up to the mark: '17';

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::isalpha;

using std::streamsize;
using std::numeric_limits;

int main()
{
	auto letters
		= int{};

	auto input
		= char{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter a line of text below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> input;

	while (input != '!'
		   &&
		   input != '?')
	{
		if (isalpha(input))
		{
			letters++;
		}

		cin >> input;
	}

	cout << endl;
	cout << "-" << endl;
	cout << endl;
	
	cout << "- ] amount of letters up to the mark: \'" << letters << "\';" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
	
	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');
}