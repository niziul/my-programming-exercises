/*
	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			--] 'impossible';

			-

			--] 'Impossible';

			-

			--] 'Possible';

			- - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	char word[11]
		= "impossible";

	auto word_ptr
		= word;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	cout << "--] \'" << word << "\';" << endl;

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	*word_ptr
		= 'I';

	cout << "--] \'" << word_ptr << "\';" << endl;

	cout << endl;

	cout << "-" << endl;

	cout << endl;

	word_ptr
		= &word[2];

	*word_ptr
		= 'P';

	cout << "--] \'" << word_ptr << "\';" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}