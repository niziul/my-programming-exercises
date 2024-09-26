/*
    [ description of the first review exercise ] :
        - Using the conversion in the code below will cause
        the creation of a temporary object of the lazy_time
        class that will be assigned to the variable 't' and
        then discarded.

        ]
            lazy_time t { 4,25 };
            cout << t << '\n';
            t = 3;              // creates a temporary object
            cout << t << '\n';
        ]

        to visualize this process happening, add a destructor
        to the lazy_time class and display a message in the constructor
        and destructor to see when and how many times each is called.

        ]
            #pragma once

            #include <iostream>
            #include <istream>
            #include <ostream>

            using std::istream;
            using std::ostream;

            using std::cout;
            using std::endl;

            class lazy_time
            {
            public:
                lazy_time();
                lazy_time(const int& hours, const int& minutes = 0);
                ~lazy_time();

                void add(const int& hours, const int& minutes);
                void remove(const int& hours, const int& minutes);
                void reset(const int& hours, const int& minutes);
                void operator+=(const int& hours);
                void operator+=(const lazy_time& time_a);
                void operator-=(const int& hours);
                void operator-=(const lazy_time& time_a);
                lazy_time operator+(const int& hours)
                const;
                lazy_time operator+(const lazy_time& time_a)
                const;
                lazy_time operator-(const int& hours)
                const;
                lazy_time operator-(const lazy_time& time_a)
                const;
                bool operator==(const lazy_time& time_a)
                const;

                operator int();
                operator double();

                ostream& operator>>(ostream& ostream_a);
                friend ostream& operator<<(ostream& ostream_a, const lazy_time& lazy_time_a);
                friend ostream& operator>>(const lazy_time& lazy_time_a, ostream& ostream_a);

                friend istream& operator>>(istream& istream_a, lazy_time& lazy_time_a);

                friend lazy_time operator+(const int& hours, const lazy_time& time_a);
                friend lazy_time operator-(const int& hours, const lazy_time& time_a);

                void display()
                const;

            private:
                int hours;
                int minutes;

            };
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] auto lazy_time_a = lazy_time { 4, 25 };
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            constructor: 4h:25m

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] cout << lazy_time_a;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            4h25m

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] lazy_time_a = 3;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            constructor: 3h:0m
            destructor : 3h:0m

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] cout << lazy_time_a;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            3h0m

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

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] auto lazy_time_a = lazy_time { 4, 25 };" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    
    auto lazy_time_a
        = lazy_time
        {
            4,
            25
        };

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] cout << lazy_time_a;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << lazy_time_a;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] lazy_time_a = 3;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    lazy_time_a
        = 3;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] cout << lazy_time_a;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << lazy_time_a;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}