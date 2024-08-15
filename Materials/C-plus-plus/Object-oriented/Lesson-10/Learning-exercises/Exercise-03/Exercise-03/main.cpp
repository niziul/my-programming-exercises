/*
    [ description of the third learning exercise ] :
        - It's not a good idea to modify the way operators
        are used in the language, but just for fun, try overwriting
        operator>> so that the program below displays the walk object
        on the screen.
        
        ]
            time trip_a { 3, 15 };

            trip_a >> cout;
        ]

        make one version using a member function and another
        using a non-member friend function.

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] trip_a >> cout;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            3h15m

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

#include "lazy_time/lazy_time.h"

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
    auto trip_a
        = lazy_time
        {
            3,
            15
        };

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] trip_a >> cout;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    trip_a >> cout;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}