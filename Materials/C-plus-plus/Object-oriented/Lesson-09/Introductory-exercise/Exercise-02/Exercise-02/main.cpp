/*
    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] planning time
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            0h:0m

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] coding time
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            2h:40m

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] fixing time
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            5h:55m

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] total time
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            8h:35m

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
    lazy_time planning, total;

    auto coding
        = lazy_time
        {
            2,
            40
        };

    auto fixing
        = lazy_time
        {
            5,
            55
        };

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] planning time" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    planning
        .display();

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] coding time" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    coding
        .display();

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] fixing time" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    fixing
        .display();

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] total time" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    total
        = coding + fixing;

    total
        .display();

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}