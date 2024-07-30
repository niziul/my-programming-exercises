/*
    [ description of the second fixation exercise ] :
        - Create a packet class to represent a packet of
        information to be transferred over the network. the
        class should provide a user-friendly interface for grouping
        4 16-bit integers into a single 64-bit integer.

        ]
            int main()
            {
                packet packet_a;

                cout << "packing..." << endl;

                packet_a.begin();
                packet_a << 9;
                packet_a << 4;
                packet_a << 3;
                packet_a << 7;
                packet_a.end();

                cout << "sending package..." << endl;
                packet_a.send();
                cout << "receiving package..." << endl;

                cout << "unpacking..." << endl;
                short a = 0, b = 0, c = 0, d = 0;
                packet_a >> a;
                packet_a >> b;
                packet_a >> c;
                packet_a >> d;

                cout << a << b << c << d << endl;
            }
        ]

        the union below shows how data should be stored in the
        packet class. it allows data to be accessed individually,
        via the part member, or all at once, via the 'all' member;

        ]
            union data
            {
                struct
                {
                    short x;
                    short y;
                    short z;
                    short w;
                } part;

                long long all;
            }
        ]

        overwrite the '<<' and '>>' operators so that they work
        with the packet class. the method should only display the
        64-bit value stored in the all field of the union.

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
    packet_a << 9;
    packet_a << 4;
    packet_a << 3;
    packet_a << 7;
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

    packet_a >> value_a;
    packet_a >> value_b;
    packet_a >> value_c;
    packet_a >> value_d;

    cout << value_a << value_b << value_c << value_d << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}