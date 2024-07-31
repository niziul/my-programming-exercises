/*
    [ description of the first learning exercise ] :
        - Starting from the time class seen in the previous
        exercises, overwrite the comparison operator to check
        if two objects of the time class are equal. the implementation
        must allow the code below to work:

        ]
            int main()
            {
                time a { 2, 30 };
                time b { 1, 10 };
                time c { 3, 40 };

                if ( a == b ) cout << "equals" << endl;
                if ( a + b == c ) cout << "equals" << endl;
            }
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] if ( time_a == time_b )
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            false;

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] if ( time_a + time_b == time_c )
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            true;

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
    auto time_a
        = lazy_time
        {
            2,
            30
        };

    auto time_b
        = lazy_time
        {
            1,
            10
        };
    
    auto time_c
        = lazy_time
        {
            3,
            40
        };


    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] if ( time_a == time_b )" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << (time_a == time_b ? "true;" : "false;") << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] if ( time_a + time_b == time_c )" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << (time_a + time_b == time_c ? "true;" : "false;") << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}