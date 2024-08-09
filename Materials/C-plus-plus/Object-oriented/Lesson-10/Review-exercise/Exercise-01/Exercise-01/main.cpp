/*
    [ description of the first review exercise ] :
        - Extend the time class shown below to make it
        possible:

        a: sum integers with objects of the time class;
        b: display objects of class time using cout;
        c: read objects of the time class using cin;

        ]
            class time
            {
            private:
                int hours;
                int minutes;

            public:
                time(int h = 0, int m = 0);

                time operator+(const time& t) const;
                time operator+(int num) const;
            };
        ]

        test the class with the following program:

        ]
            int main()
            {
                time outward_a, return_a, total_a;

                cout << "outward time:" << endl;

                cin >> outward_a;

                cout << "return time:" << endl;

                cin >> return_a;

                total_a = 5 + outward_a + return_a;

                cout << "travel time:" << total_a << endl;

            }
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] outward time (fmt: hh mm)
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            : 1 30

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] return time (fmt: hh mm)
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            : 2 15

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] travel time
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            8h:8m

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
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
    lazy_time outward_a,
              return_a,
              total_a;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] outward time (fmt: hh mm)" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << ": ";
    cin >> outward_a;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] return time (fmt: hh mm)" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << ": ";
    cin >> return_a;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] travel time" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    
    total_a
        = 5 + outward_a + return_a;

    cout << total_a;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}