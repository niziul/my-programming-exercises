/*
	[ description of second learning exercise ] :
		- The floating point has a binary representation that is divided into
		  a mantissa sign and exponent. The bits can be transformed into value using the
		  formula 'v = s * 2(e-127) * (1 + m)'. Find the corresponding floating point value
		  the following 32-bit binary encoding:

		  ]
			1 1 0 0 1 0 0 0 0 0 1 1 0 0 0 1 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0
		  ]

	[ output ] :
		```
            ------------------------ ------------ ------ --- -
            Floating point value: -181504
            ------------------------ ------------ ------ --- -
		```
*/


#define nextline '\n'

#include <iostream>
#include <bitset>
#include <cmath>

using std::cout;

float decodeFloat32(uint32_t);

int main()
{
    // Example of the 32-bit floating-point binary:
    auto bits
         = 0b11001000001100010100000000000000;

    // Decodes and prints the corresponding value:
    auto value
         = decodeFloat32(bits);

    cout << nextline;

    cout << "------------------------ ------------ ------ --- -" << nextline;
    cout << "Floating point value: " << value << nextline;
    cout << "------------------------ ------------ ------ --- -" << nextline;

    cout << nextline;

    return 0;
}

float decodeFloat32(uint32_t bits)
{
    // It extracts the sign bit, the 8 bits of the exponent, and the 23 bits of the mantissa:
    auto sign
         = (bits >> 31) & 0x1;

    auto exponent
         = (bits >> 23) & 0xFF;

    auto mantissa
         = bits & 0x7FFFFF;

    // Calculates the value of the mantissa as a fraction in binary notation:
    auto m
         = 1.0f;

    for (auto i = 0; i < 23; i++)
    {
        if ((mantissa >> (22 - i)) & 0x1)
        {
            m += powf(2.0f, -(i + 1));
        }
    }

    // Apply the formula to get the floating point value:
    auto value
         = powf(-1.0f, sign) * powf(2.0f, exponent - 127) * m;

    return value;
}