/*
	[ description of the first fixation exercise ] :
		- Write a function that takes a numeric code, such as '65', and displays
		  the corresponding  character from the ASCII table. In the main program you
		  use this function several times to display the characters corresponding to the
		  numbers '80', '114', '111', '103', '67', '111', '109' e '112'.


	[ output ] :
		```
			--[ Computer Programming ]

			Choose a number from 65 to 90 or from 97 to 122 ( ex: 67 )
			: 67


			------------------------ ------------ ------ --- -- -
			--] "67" represents the character "C" in the ascii table.
			------------------------ ------------ ------ --- -- -
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void print_a_character_from_the_ascii_table(char);

int main()
{
	unsigned short code_ascii;

	cout << endl;
	cout << endl;

	/*
	print_a_character_from_the_ascii_table(80);
	print_a_character_from_the_ascii_table(114);
	print_a_character_from_the_ascii_table(111);
	print_a_character_from_the_ascii_table(103);
	print_a_character_from_the_ascii_table(67);
	print_a_character_from_the_ascii_table(111);
	print_a_character_from_the_ascii_table(109);
	print_a_character_from_the_ascii_table(112);
	*/

	print_a_character_from_the_ascii_table(45);
	print_a_character_from_the_ascii_table(45);
	print_a_character_from_the_ascii_table(91);
	print_a_character_from_the_ascii_table(32);
	print_a_character_from_the_ascii_table(67);
	print_a_character_from_the_ascii_table(111);
	print_a_character_from_the_ascii_table(109);
	print_a_character_from_the_ascii_table(112);
	print_a_character_from_the_ascii_table(117);
	print_a_character_from_the_ascii_table(116);
	print_a_character_from_the_ascii_table(101);
	print_a_character_from_the_ascii_table(114);
	print_a_character_from_the_ascii_table(32);
	print_a_character_from_the_ascii_table(80);
	print_a_character_from_the_ascii_table(114);
	print_a_character_from_the_ascii_table(111);
	print_a_character_from_the_ascii_table(103);
	print_a_character_from_the_ascii_table(114);
	print_a_character_from_the_ascii_table(97);
	print_a_character_from_the_ascii_table(109);
	print_a_character_from_the_ascii_table(109);
	print_a_character_from_the_ascii_table(105);
	print_a_character_from_the_ascii_table(110);
	print_a_character_from_the_ascii_table(103);
	print_a_character_from_the_ascii_table(32);
	print_a_character_from_the_ascii_table(93);

	cout << endl;
	cout << endl;

	cout << "Choose a number from 65 to 90 or from 97 to 122 ( ex: 67 )" << endl;
	cout << ": ";
	cin >> code_ascii;

	cout << endl;
	cout << endl;

	cout << "------------------------ ------------ ------ --- -- -" << endl;
	cout << "--] \"" << code_ascii << "\" represents the character \"" << (char)code_ascii << "\" in the ascii table." << endl;
	cout << "------------------------ ------------ ------ --- -- -" << endl;

	cout << endl;
	cout << endl;

	system("pause");
}

void print_a_character_from_the_ascii_table(char number)
{
	cout << number;
}
