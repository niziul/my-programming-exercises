/*
    [ description of the second learning exercise ] :
        - Consider a money class to represent money in a
        specific currency.

        ]
            class money
            {
            private:
                double value;

            public:
                money();
            }
        ]

        add a constructor that allows you to convert the
        double type to the money type and a conversion function
        to convert the money type to a type double, so that the
        code below works without the need to overload the insertion
        operator(<<);

        ]
            int main()
            {
                money purchase;
                purchase = 79.99;         // convert double to money.
                cout << purchase << endl; // convert money to double.
            }
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] purchase = 79.99;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ...

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] cout << purchase << endl;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            79.99

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
    cout << "] purchase = 79.99;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    purchase
        = 79.99;

    cout << "..." << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] cout << purchase << endl;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << purchase << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}