/*
    [ description of the second learning exercise ] :
        - Modify the packet class, seen in the previous exercises,
        so that its data can be modified using direct access, similar
        to vector access. to do this, overwrite the operator[] so that
        the program below works correctly.

        ]
            int main()
            {
                packet packet_a;

                cout << "packing..." << endl;

                packet_a.begin();
                packet_a[0] = 9;
                packet_a[1] = 4;
                packet_a[2] = 3;
                packet_a[3] = 7;
                packet_a.end();

                cout << "sending package..." << endl;
                packet_a.send();
                cout << "receiving package..." << endl;

                cout << "unpacking..." << endl;
                short a = 0, b = 0, c = 0, d = 0;
                a = packet_a[0];
                b = packet_a[1];
                c = packet_a[2];
                d = packet_a[3];

                cout << a << b << c << d << endl;
            }
        ]

        the operator[] function can have the following prototype:

        ]
            short& operator[](int index);
        ]

        by returning a reference, you can use the operator both to
        retrieve a value and to modify it. the index variable will
        receive the value in square brackets.

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] packing...
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ...

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] sending package...
            ] receiving package...
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            1970337722138633

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] unpacking...
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            9437

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include "lazy_packet.h"

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
    lazy_packet packet_a;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] packing..." << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    packet_a.begin();
    packet_a[0] = 9;
    packet_a[1] = 4;
    packet_a[2] = 3;
    packet_a[3] = 7;
    packet_a.end();

    cout << "..." << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] sending package..." << endl;
    cout << "] receiving package..." << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    packet_a.send();

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] unpacking..." << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    auto value_a
        = (short)0;

    auto value_b
        = (short)0;

    auto value_c
        = (short)0;

    auto value_d
        = (short)0;

    value_a = packet_a[0];
    value_b = packet_a[1];
    value_c = packet_a[2];
    value_d = packet_a[3];

    cout << value_a << value_b << value_c << value_d << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}