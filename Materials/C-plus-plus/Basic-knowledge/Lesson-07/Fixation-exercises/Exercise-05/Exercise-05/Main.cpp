/*
	[ description of the fifth fixation exercise ] :
		- Write the functions turn_on_bit, turn_off_bit and test_bit. They should be
		  given an unsigned char and the bit position. The function testBit should return
		  a 'Boolean' indicating the state of the bit and the others should return the modified
		  unsigned char value.

	[ output ] :
		```
			++-++++-++++-++++-++ ++-++++-++++-++ ++-++++-++ ++-++ ++-
			-] Observer
			++-++++-++++-++++-++ ++-++++-++++-++ ++-++++-++ ++-++ ++-


			Enter a value
			: {


			Enter a position between 1 to 8
			: 1


			bit "1" of char "{" is: on!


			bit "1" returns this char "y" after it has been passed through the turn_on_bit() function.


			bit "1" returns this char "☻" after it has been passed through the turn_off_bit() function.
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

bool test_bit(unsigned char, unsigned short);
unsigned char turn_on_bit(unsigned char, unsigned short);
unsigned char turn_off_bit(unsigned char, unsigned short);

int main()
{
	unsigned char i_char;
	unsigned short i_bit_position;

	cout << "++-++++-++++-++++-++ ++-++++-++++-++ ++-++++-++ ++-++ ++-" << endl;
	cout << "-] Observer" << endl;
	cout << "++-++++-++++-++++-++ ++-++++-++++-++ ++-++++-++ ++-++ ++-" << endl;

	cout << endl;
	cout << endl;

	cout << "Enter a value" << endl;
	cout << ": ";
	cin >> i_char;

	cout << endl;
	cout << endl;

	cout << "Enter a position between 1 to 8" << endl;
	cout << ": ";
	cin >> i_bit_position;

	cout << endl;
	cout << endl;

	cout << "bit \"" << i_bit_position << "\" of char \"" << i_char << "\" is: " << (test_bit(i_char, i_bit_position) ? "on!" : "off!") << endl;

	cout << endl;
	cout << endl;

	cout << "bit \"" << i_bit_position << "\" returns this char \"" << turn_on_bit(i_char, i_bit_position) << "\" after it has been passed through the turn_on_bit() function." << endl;

	cout << endl;
	cout << endl;

	cout << "bit \"" << i_bit_position << "\" returns this char \"" << turn_off_bit(i_char, i_bit_position) << "\" after it has been passed through the turn_off_bit() function." << endl;

	cout << endl;
	cout << endl;
	
	system("pause");
}

bool test_bit(unsigned char char_to_be_tested, unsigned short bit_position_to_be_checked)
{
	return char_to_be_tested & 1 << --bit_position_to_be_checked;
}

unsigned char turn_on_bit(unsigned char char_to_be_tested, unsigned short bit_position_to_be_checked)
{
	return char_to_be_tested ^ 1 << bit_position_to_be_checked--;
}

unsigned char turn_off_bit(unsigned char char_to_be_tested, unsigned short bit_position_to_be_checked)
{
	return char_to_be_tested & 1 << bit_position_to_be_checked++;
}