/*
	[ description of the fifth learning exercise ] :
		- Build a function called 'display_bits()' that, given an unsigned char value, displays on the
		  screen the binary representation of that number. The function 'display_bits()' should use the function
		  'test_bits()' ( from fixation exercise 5 ) to find out which bits of the received value are equal to '0' and which
		  are equal to '1'.

	[ output ] :
		```
			------------------------ ------------ ------ --- -- -
			--] Display Bits
			------------------------ ------------ ------ --- -- -


			Enter a value between 0 and 255
			: 143


			The value '143' corresponds to this sequence in binary:
			[ 10001111 ]
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void display_bits(unsigned char);
unsigned char test_bits(unsigned char, int16_t);

int main()
{
	int16_t user_value;

	cout << endl;
	cout << endl;

	cout << "------------------------ ------------ ------ --- -- -" << endl;
	cout << "--] Display Bits" << endl;
	cout << "------------------------ ------------ ------ --- -- -" << endl;
	
	cout << endl;
	cout << endl;

	cout << "Enter a value between 0 and 255" << endl;
	cout << ": ";
	cin >> user_value;

	cout << endl;
	cout << endl;

	cout << "The value \'" << user_value << "\' corresponds to this sequence in binary:" << endl;
	cout << "[ ";
	display_bits(user_value);
	cout << " ]";
	
	cout << endl;
	cout << endl;

	system("pause");
}

void display_bits(unsigned char char_value)
{
	for (int16_t i = 7; i >= 0; i--)
	{
		cout << (int16_t)test_bits(char_value, i);
	}
}

unsigned char test_bits(unsigned char char_value, int16_t bit_index)
{
	return char_value & 1 << bit_index ? 1 : 0;
}
