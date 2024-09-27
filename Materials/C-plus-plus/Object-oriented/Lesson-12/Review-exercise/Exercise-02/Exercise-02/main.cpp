/*
    [ description of the second review exercise ] :
        - Considering the various ways of initializing an
        object in c++, test which of them use implicit conversions.
        to do this, modify all the constructors with the explicit keyword.

        ]
            lazy_time a = lazy_time( 2,10 ); // #1
            lazy_time b ( 2,10 ); // #2
            lazy_time c = { 2,10 }; // #3
            lazy_time d { 2,10 }; // #4
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            constructor: 2h:10m
            constructor: 2h:10m
            constructor: 2h:10m

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
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
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    lazy_time a = lazy_time( 2,10 ); // #1
    lazy_time b ( 2,10 );            // #2
    //lazy_time c = { 2,10 };        // #3 - uses implicit conversion
    lazy_time d { 2,10 };            // #4

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}