/*
    [ description of the first fixation exercise ] :
        - Expand the time class from the previous question
        so that it also supports the combined '+=' and '-='
        operators to handle the addition and subtraction of
        times. note that these operators, unlike conventional
        addition and subtraction, modify the oject on the left-
        hand side of the operation.

        make the class work with the code below:

        ]
            int main()
            {
                time a { 2, 30 };
                time b { 1, 10 };
                time c { 0, 20 };

                time total;
                total += a;
                total.display();
                total += b;
                total.display();
                total -= c;
                total.display();
            }
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] total += time_a;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            2h:30m

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] total += time_b;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            3h:40m

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] total -= time_c;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            3h:20m

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include "lazy_time.h"

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
    auto const static time_a
        = lazy_time
        {
            2,
            30
        };

    auto const static time_b
        = lazy_time
        {
            1,
            10
        };

    auto const static time_c
        = lazy_time
        {
            0,
            20
        };

    lazy_time total;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] total += time_a;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    total
        += time_a;

    total
        .display();

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] total += time_b;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    total
        += time_b;

    total
        .display();

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] total -= time_c;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    total
        -= time_c;

    total
        .display();

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}