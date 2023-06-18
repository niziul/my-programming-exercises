/*
	[ output ] :
		```
			<v> - - - - - - - - - - - - - - - - <v>

			--] 'jaguaribe' contain '9' chars.

			-

			--] 'pantera rosa' contain '12' chars.

			<v> - - - - - - - - - - - - - - - - <v>
		```
*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

using std::cin;
using std::cout;

using std::string;

int main()
{
	auto const nextline
		= '\n';

	char v_animal[20];
	
	char v_cat[20]
		= "jaguar";

	string s_animal;

	string s_cat
		= "pantera";

	strcpy(v_animal, v_cat);

	s_animal
		= s_cat;

	strcat(v_animal, "ibe");

	s_animal
		= s_animal + " rosa";

	cout << "<v> - - - - - - - - - - - - - - - - <v>" << nextline;

	cout << nextline;

	cout << "--] \'" << v_animal << "\' contain \'" << strlen(v_animal) << "\' chars." << nextline;

	cout << nextline;

	cout << "-" << nextline;

	cout << nextline;

	cout << "--] \'" << s_animal << "\' contain \'" << s_animal.size() << "\' chars." << nextline;
	
	cout << nextline;
	
	cout << "<v> - - - - - - - - - - - - - - - - <v>" << nextline;


	system("pause");
}