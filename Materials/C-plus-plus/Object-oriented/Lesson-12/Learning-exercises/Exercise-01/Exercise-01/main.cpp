/*
    [ description of the first learning exercise ] :
        - Implement a time class to represent clock hours
        and minutes. provide friendly to perform the operation
        of subtracting times and displaying times with cout.

        ]
            #pragma once

            #include <ostream>

            using std::ostream;

            class lazy_clock
            {
            public:
                lazy_clock(const int& hours
                                        = 0,
                           const int& minutes
                                        = 0);

                friend lazy_clock operator-(const lazy_clock& lazy_clock_a,
                                            const lazy_clock& lazy_clock_b);
                friend ostream& operator<<(ostream& ostream_a,
                                           const lazy_clock& lazy_clock_a);

            private:
                int hours;
                int minutes;
            };
        ]

        use a simplified clock class, with only friendly functions
        for the sum operation and display with cout, as shown below:

        ]
            #pragma once

            #include <ostream>

            using std::ostream;

            class lazy_time
            {
            public:
                lazy_time(const int& hours
                                        = 0,
                          const int& minutes
                                        = 0);

                friend lazy_time operator-(const lazy_time& lazy_time_a,
                                           const lazy_time& lazy_time_b);
                friend ostream& operator<<(ostream& ostream_a,
                                           const lazy_time& lazy_time_a);

            private:
                int hours;
                int minutes;
            };
        ]

        first check the error message displayed by the compiler for
        the program below: then implement a clock to time conversion
        function so that the program works.

        ]
            #include <iostream>
            #include "lazy_time.h"
            #include "lazy_clock.h"

            using namespace std;

            int main()
            {
                lazy_clock begin { 18,30 };
                lazy_clock end { 21,00 };

                // lazy_clock convert to lazy_time
                lazy_time duration = end - begin;
                cout << duration << endl;
            }
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] cout << duration;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            2h30m

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

#include "lazy_time/lazy_time.h"
#include "lazy_clock/lazy_clock.h"

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
    lazy_clock begin
    {
        18,
        30
    };

    lazy_clock end
    {
        21,
        00
    };

    lazy_time duration
        = end
          -
          begin;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] cout << duration;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << duration;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}