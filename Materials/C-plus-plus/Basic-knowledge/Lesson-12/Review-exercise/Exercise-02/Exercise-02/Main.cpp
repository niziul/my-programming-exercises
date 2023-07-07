/*
	[ description of the second review exercise ] :
		- Change the program from the previous exercise so that reading/writing a complex
		number is done with 'cin/cout' and the addition and multiplication with the '+' and '*'
		operators.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - <@>

			Enter the first complex numbers below
			- - - - - - - - - - - - - - - - - - - - - - - -
			: 5+6i

			-

			Enter the second complex numbers below
			- - - - - - - - - - - - - - - - - - - - - - - -
			: 3-4i

			- - - - - - - - - - - - - - - - - - - - - - - -

			--] the sum of the complex numbers: 8+2i

			--] the multiplication of the complex numbers: 39-2i

			- - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::showpos;
using std::noshowpos;
using std::ostream;
using std::istream;

struct complex_numbers
{
	float part_real;
	float part_imaginary;
};

istream& operator>>(istream&, complex_numbers&);

ostream& operator<<(ostream&, complex_numbers&);

complex_numbers operator+(complex_numbers, complex_numbers);

complex_numbers operator*(complex_numbers, complex_numbers);

int main()
{
	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter the first complex numbers below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";

	auto complex_numbers_1
		= complex_numbers{};

	cin >> complex_numbers_1;

	cout << endl;

	cout << "-" << endl;

	cout << endl;

	cout << "Enter the second complex numbers below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";

	auto complex_numbers_2
		= complex_numbers{};

	cin >> complex_numbers_2;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "--] the sum of the complex numbers: ";

	auto sum
		= (complex_numbers_1 + complex_numbers_2);

	cout << sum;

	cout << endl;

	cout << "--] the multiplication of the complex numbers: ";

	auto multiplication
		= (complex_numbers_1 * complex_numbers_2);

	cout << multiplication;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}

istream& operator>>(istream &is, complex_numbers &cn)
{
	cin >> cn
		.part_real;

	cin >> cn
		.part_imaginary;

	cin
		.ignore();

	return is;
}

ostream& operator<<(ostream &os, complex_numbers &cn)
{
	os << cn.part_real;

	os << showpos;

	os << cn.part_imaginary;

	os << noshowpos;

	os << "i";

	os << endl;

	return os;
}

complex_numbers operator+(complex_numbers complex_numbers_1, complex_numbers complex_numbers_2)
{
	auto i_complex_numbers
		= complex_numbers
		{
			complex_numbers_1.part_real + complex_numbers_2.part_real,
			complex_numbers_1.part_imaginary + complex_numbers_2.part_imaginary
		};

	return i_complex_numbers;
}

complex_numbers operator*(complex_numbers complex_numbers_1, complex_numbers complex_numbers_2)
{
	auto i_complex_numbers
		= complex_numbers
		{
			(complex_numbers_1.part_real * complex_numbers_2.part_real) - (complex_numbers_1.part_imaginary * complex_numbers_2.part_imaginary),
			(complex_numbers_1.part_imaginary * complex_numbers_2.part_real) + (complex_numbers_1.part_real * complex_numbers_2.part_imaginary)
		};

	return i_complex_numbers;
}
