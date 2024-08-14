/*
    [ description of the second learning exercise ] :
        - Modify the packet class, created in the lesson-09,
        so that its data can be displayed with cout and read
        with cin. make the code below work:

        ]
            int main()
            {
                cout << "Enter your package details:\n";
                packet packet_a;
                cin >> packet_a


                cout << "Sending package...\n";
                packet_a.send();

                cout << "Package contents...\n";
                cout << packet_a << endl;
            }
        ]

        the package display must show the data separated into
        its constituent parts (part field of the data union).

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

        example of program output:

        ]
            Enter your package details:
            9 4 3 7

            Sending package...
            1970337722138633

            Package contents...
            9 4 3 7
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] Enter your package details below (fmt: 0 1 2 3)
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            : 9 4 3 7

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] Sending package...
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            1970337722138633

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] Package contents...
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            9 4 3 7

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include "lazy_packet/lazy_packet.h"

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
    auto packet_a
        = lazy_packet{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] Enter your package details below (fmt: 0 1 2 3)" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << ": ";
    cin >> packet_a;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] Sending package..." << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    packet_a.send();

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] Package contents..." << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << packet_a << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}