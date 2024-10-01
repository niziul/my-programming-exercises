/*
    [ description of the third learning exercise ] :
        - In the previous exercise, once you have the constructor
        and the double conversion function ready, is there anything
        else you need to do to convert integer values to the money type?
        test and explain why the program below works.

        ]
            int main()
            {
                money purchase;
                purchase = 10;
                cout << (int)purchase << endl;
            }
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] purchase = 10;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ...

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] cout << purchase << endl;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            10

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] cout << (int)purchase << endl;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            10

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

#include "lazy_money/lazy_money.h"

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
    lazy_money purchase;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] purchase = 10;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    purchase
        = 10;

    cout << "..." << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] cout << purchase << endl;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << purchase << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] cout << (int)purchase << endl;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << (int)purchase << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}