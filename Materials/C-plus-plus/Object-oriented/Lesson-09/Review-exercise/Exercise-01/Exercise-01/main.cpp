/*
    [ description of the first review exercise ] :
        - Overwrite the appropriate operators to provide
        the time class with support for:

        a: addition;
        b: subtraction;
        d: multiplication by a factor;
        c: addition of a factor;

        ]
            #pragma once

            #include <iostream>

            using std::cout;
            using std::endl;

            class time
            {
            public:
                time();
                time(const int& hours, const int& minutes = 0);

                void add(const int& hours, const int& minutes);
                void reset(const int& hours, const int& minutes);
                time sum(const time& time_a)
                const;
                void display()
                const;

            private:
                int hours;
                int minutes;

            };
        ]

        test the class with the following program:

        ]
            int main()
            {
                time a { 2, 30 };
                time b { 1, 10 };
                time c { 0, 20 };

                time total = a + b - c;

                total.display();
                total = total + 2;
                total.display();
                total = total * 2;
                total.display();
            }
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] auto total = time_a + time_b - time_c;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            3h:20m

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] auto total = total + 2;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            5h:20m

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] auto total = total * 2;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            10h:40m

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

    auto total
        = time_a + time_b - time_c;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] auto total = time_a + time_b - time_c;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    total
        .display();

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] auto total = total + 2;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    total
        = total + 2;

    total
        .display();

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] auto total = total * 2;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    total
        = total * 2;

    total
        .display();

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}
