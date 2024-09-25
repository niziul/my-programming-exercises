/*
    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] convert to int
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            4hours

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] convert to double
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            4.2hours

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] operator<<
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            4h12m

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
    auto lazy_time_a
        = lazy_time
        {
            4,
            12
        };

    auto lazy_time_a_int
        = (int)lazy_time_a;

    auto lazy_time_a_double
        = (double)lazy_time_a;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] convert to int" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << lazy_time_a_int << "hours" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] convert to double" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << lazy_time_a_double << "hours" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] operator<<" <<  endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    
    cout << lazy_time_a;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}