/*
	[ description of the first review exercise ] :
		- Complex numbers are used in various fields of knowledge, such as engineering,
		electromagnetism, quantum physics and mathematics itself. A complex number is a number
		'z' that can be written in the form: 'z = x + yi' where 'x' and 'y' are real numbers and
		'i' denotes the imaginary unit.

		Build a struct to represent complex numbers and functions to read, display, calculate the sum
		and multiplication of complex numbers.

		Sum: ( a + bi ) + ( c + di ) = ( a + c ) + ( b + d )i
		
		Product: ( a + bi )(c + di) = ( ac - bd ) + ( bc + ad )i

		Build a program to test the functions as in the example below:

		]
			first complex: 5+6i
			-
			second complex: 3-4i

			the sum of the numbers: 8+2i

			the multiplication of numbers: 39-2i
		]

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

struct complex_numbers
{
	float part_real;
	float part_imaginary;
};

complex_numbers read();

void display(complex_numbers);

complex_numbers sum(complex_numbers, complex_numbers);

complex_numbers multiplication(complex_numbers, complex_numbers);

int main()
{
	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter the first complex numbers below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";

	auto complex_numbers_1
		= read();

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "Enter the second complex numbers below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";

	auto complex_numbers_2
		= read();

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "--] the sum of the complex numbers: ";

	display(sum(complex_numbers_1, complex_numbers_2));

	cout << endl;

	cout << "--] the multiplication of the complex numbers: ";

	display(multiplication(complex_numbers_1, complex_numbers_2));

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - <@>" << endl;
	
	system("pause");
}

complex_numbers read()
{
	auto i_complex_numbers
		= complex_numbers{};

	cin >> i_complex_numbers
					.part_real;
	cin >> i_complex_numbers
					.part_imaginary;

	cin
		.ignore();

	return i_complex_numbers;
}

void display(complex_numbers product)
{
	cout << product.part_real;

	cout << showpos;

	cout << product.part_imaginary;

	cout << noshowpos;

	cout << "i";

	cout << endl;
}

complex_numbers sum(complex_numbers complex_numbers_1, complex_numbers complex_numbers_2)
{
	auto i_complex_numbers
		= complex_numbers
		{
			complex_numbers_1.part_real + complex_numbers_2.part_real,
			complex_numbers_1.part_imaginary + complex_numbers_2.part_imaginary
		};

	return i_complex_numbers;
}

complex_numbers multiplication(complex_numbers complex_numbers_1, complex_numbers complex_numbers_2)
{
	auto i_complex_numbers
		= complex_numbers
		{
			(complex_numbers_1.part_real * complex_numbers_2.part_real) - (complex_numbers_1.part_imaginary * complex_numbers_2.part_imaginary),
			(complex_numbers_1.part_imaginary * complex_numbers_2.part_real) + (complex_numbers_1.part_real * complex_numbers_2.part_imaginary)
		};

	return i_complex_numbers;
}