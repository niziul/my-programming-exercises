/*
    [ description of the first learning exercise ] :
        - A complex number is a number z that can be written
        in the form z = x + yi, where x and y are real numbers
        and i denotes the imaginary part. build a class to represent
        complex numbers with methods to perform the following operations:

        ]
            sum                   : ( a + bi ) + ( c + di ) = ( a + c ) + ( b + d )i
            subtraction           : ( a + bi ) - ( c + di ) = ( a - c ) + ( b - d )i
            multiplication        : ( a + bi )( c + di ) = ( ac - bd ) + ( bc + ad )i
            multiplication by real: n( c + di ) = ( nc ) + ( nd )i
            conjugate             : ~( a + bi ) = ( a - bi )

        ]

        build a program to test the class and operation on
        complexes. the output should look like the example
        below:

        ]
            enter two complex numbers:

            3+4i
            10+12i

            complex b: 10+12i
            its conjugate: 10-12i
            complex a: 3+4i

            a + b: 13+16i
            a - b: -7-8i
            a * b: -18+76i
            2 * b: 20+24i
        ]

        tip: os.setf(ios::showpos) always shows the +/- sign for decimal values.


    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] enter two complex numbers below
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            : 3+4i
            : 10+12i

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] complex b
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            : 10+12i

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] its conjugate
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            : 10-12i

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] complex a
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            : 3+4i

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] its conjugate
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            : 3-4i

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] complex a + complex b
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            : 13+16i

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] complex a - complex b
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            : -7-8i

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] complex a * complex b
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            : -18+76i

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] 2 * complex b
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            : 20+24i

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include "lazy_complex_number/lazy_complex_number.h"

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
    auto lazy_complex_number_a
        = lazy_complex_number{};

    auto lazy_complex_number_b
        = lazy_complex_number{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] enter two complex numbers below" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << ": ";
    cin >> lazy_complex_number_a;
    cout << ": ";
    cin >> lazy_complex_number_b;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] complex b" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    cout << ": " << lazy_complex_number_b;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] its conjugate" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    cout << ": " << ~lazy_complex_number_b;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] complex a" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    cout << ": " << lazy_complex_number_a;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] its conjugate" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    cout << ": " << ~lazy_complex_number_a;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] complex a + complex b" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << ": " << lazy_complex_number_a + lazy_complex_number_b;

    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] complex a - complex b" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << ": " << lazy_complex_number_a - lazy_complex_number_b;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] complex a * complex b" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << ": " << lazy_complex_number_a * lazy_complex_number_b;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] 2 * complex b" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << ": " << 2 * lazy_complex_number_b;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}