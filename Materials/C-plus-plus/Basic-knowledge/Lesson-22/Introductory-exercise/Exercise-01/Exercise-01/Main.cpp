/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter the text for analysis ('@' to exit)
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			João "ex-aluno" zinho, renomado programador,
			escreveu seu primeiro programa em 2012.@

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - [ words        :
									 '64';

			- - [ digits       :
									 '4';

			- - [ spaces       :
									 '10';

			- - [ punctuations :
									 '6';

			- - [ others       :
									 '0';

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;

using std::isalpha;
using std::isspace;
using std::isdigit;
using std::ispunct;

using std::streamsize;
using std::numeric_limits;

int main()
{
	auto spaces
		= int{};

	auto digits
		= int{};

	auto chars
		= int{};

	auto punctuations
		= int{};

	auto others
		= int{};

	auto input
		= char{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter the text for analysis (\'@\' to exit)" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cin
		.get(input);

	while (input != '@')
	{
		if (isalpha(input))
		{
			chars++;
		}
		else if (isspace(input))
		{
			spaces++;
		}
		else if (isdigit(input))
		{
			digits++;
		}
		else if (ispunct(input))
		{
			punctuations++;
		}
		else
		{
			others++;
		}

		cin
			.get(input);
	}

	cout << endl;
	cout << "-" << endl;
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "- - [ words        :" << endl;
	cout << "\t\t\t \'" << chars << "\';" << endl;

	cout << endl;

	cout << "- - [ digits       :" << endl;
	cout << "\t\t\t \'" << digits << "\';" << endl;

	cout << endl;

	cout << "- - [ spaces       :" << endl;
	cout << "\t\t\t \'" << spaces << "\';" << endl;

	cout << endl;

	cout << "- - [ punctuations :" << endl;
	cout << "\t\t\t \'" << punctuations << "\';" << endl;

	cout << endl;

	cout << "- - [ others       :" << endl;
	cout << "\t\t\t \'" << others << "\';" << endl;
	
	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');
}