/*
	[ description of the second learning exercise ] :
		- Define a register called: 'translations' to store three 'strings', one for
		each translation of a word, in portuguese, english and spanish. Then create a vector
		of type 'translations' called dictionary, with space for nine words. Initialize the array
		with two translations of your choice, remembering that each word must be in all three languages.
		Finally, ask the user to enter the information for one more translations, store it in the array and display all
		the words in the dictionary.

	[ output ] :
		```
			<~@~> - - - - - - - - - - - - - - - - - - - - <~@~>

			Enter below the translation of a word of your choice
			- - - - - - - - - - - - - - - - - - - - - - - - - -
			[pt-br] : Barco
			[en_us] : Boat
			[es_es] : Embarcación

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - -
			All Translations
			- - - - - - - - - - - - - - - - - - - - - - - - - -

			-- dictionary[0] :

			[ pt_br ] - 'Livros';
			[ en_us ] - 'Books';
			[ es_es ] - 'Libros';

			-

			-- dictionary[1] :

			[ pt_br ] - 'Arvores';
			[ en_us ] - 'Trees';
			[ es_es ] - 'Arboles';

			-

			-- dictionary[2] :

			[ pt_br ] - 'Barco';
			[ en_us ] - 'Boat';
			[ es_es ] - 'Embarcación';

			-


			- - - - - - - - - - - - - - - - - - - - - - - - - -

			<~@~> - - - - - - - - - - - - - - - - - - - - <~@~>
		```
*/

#include <iostream>
#include <array>

using std::cin;
using std::cout;
using std::endl;
using std::array;
using std::string;

struct translations
{
	string pt_br;
	string en_us;
	string es_es;
};

int main()
{
	auto dictionary
		= array<translations, 3>
		{
			translations
			{
				"Livros",
				"Books",
				"Libros"
			},
			translations
			{
				"Arvores",
				"Trees",
				"Arboles"
			}
		};

	cout << "<~@~> - - - - - - - - - - - - - - - - - - - - <~@~>" << endl;

	cout << endl;

	cout << "Enter below the translation of a word of your choice" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "[pt-br] : ";
	cin >> dictionary[2].pt_br;
	cout << "[en_us] : ";
	cin >> dictionary[2].en_us;
	cout << "[es_es] : ";
	cin >> dictionary[2].es_es;

	cout << endl;

	cout << "-" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "All Translations" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	for (auto i = 0; i < dictionary.size(); i++)
	{
		cout << "-- dictionary[" << i << "] :" << endl;

		cout << endl;

		cout << "[ pt_br ] - \'" << dictionary[i].pt_br << "\';" << endl;
		cout << "[ en_us ] - \'" << dictionary[i].en_us << "\';" << endl;
		cout << "[ es_es ] - \'" << dictionary[i].es_es << "\';" << endl;

		cout << endl;

		cout << "-" << endl;

		cout << endl;
	}

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<~@~> - - - - - - - - - - - - - - - - - - - - <~@~>" << endl;

	system("pause");
}