/*
    [ description of the second review exercise ] :
        - Modify the vector class, developed in the last
        lesson, so that its attributes only store the rectangular
        coordinate representation. add methods to convert and return
        the vector's representation in polar coordinates.

        ]
            #pragma once

            #include <ostream>

            using std::ostream;

            class lazy_vector2
            {
            public:
                lazy_vector2();
                lazy_vector2(double value_a,
                             double value_b);

                double get_angle()
                const;
                double get_magnitude()
                const;

                lazy_vector2 operator+(const lazy_vector2& lazy_vector2_a)
                const;
                lazy_vector2 operator-(const lazy_vector2& lazy_vector2_a)
                const;

                lazy_vector2 operator-()
                const;
                lazy_vector2 operator*(double value_a)
                const;

                friend lazy_vector2 operator*(const double& value_a, const lazy_vector2& lazy_vector2_a);
                friend ostream& operator<<(ostream& ostream_a, const lazy_vector2& lazy_vector2_a);

            private:
                double x;
                double y;
            };

        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] cout << vector_a;
            ] cout << vector_b;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                     x: '10',
                     y: '10',
            }
            {
                     x: '20',
                     y: '20',
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] cout << vector_a.get_magnitude() << endl;
            ] cout << vector_a.get_angle() << endl;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            14.1421
            45

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] cout << vector_b.get_magnitude() << endl;
            ] cout << vector_b.get_angle() << endl;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            28.2843
            45

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

#include "lazy_vector2/lazy_vector2.h"

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
    auto vector_a
        = lazy_vector2
        {
            10,
            10
        };

    auto vector_b
        = lazy_vector2
        {
            20,
            20
        };

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] cout << vector_a;" << endl;
    cout << "] cout << vector_b;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << vector_a;
    cout << vector_b;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] cout << vector_a.get_magnitude() << endl;" << endl;
    cout << "] cout << vector_a.get_angle() << endl;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << vector_a.get_magnitude() << endl;
    cout << vector_a.get_angle() << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] cout << vector_b.get_magnitude() << endl;" << endl;
    cout << "] cout << vector_b.get_angle() << endl;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << vector_b.get_magnitude() << endl;
    cout << vector_b.get_angle() << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}