/*
    [ description of the third review exercise ] :
        - Now modify the vector class so that it only stores
        the polar coordinate representation in its attributes.
        add methods to convert and return the vector representation
        in rectangular coordinates.

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

                double get_x()
                const;
                double get_y()
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
                double magnitude;
                double angle;
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
                     m: '14.1421',
                     a: '45',
            }
            {
                     m: '28.2843',
                     a: '45',
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] cout << "x: " << vector_a.get_x() << endl;
            ] cout << "y: " << vector_a.get_y() << endl;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            x: '10',
            y: '10',

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] cout << "x: " << vector_b.get_x() << endl;
            ] cout << "y: " << vector_b.get_y() << endl;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            x: '20',
            y: '20',

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
            /*10,
            10*/
            14.1421,
            45
        };

    auto vector_b
        = lazy_vector2
        {
            /*20,
            20*/
            28.2843,
            45
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
    cout << "] cout << \"x: \" << vector_a.get_x() << endl;" << endl;
    cout << "] cout << \"y: \" << vector_a.get_y() << endl;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "x: \'" << vector_a.get_x() << "\'," << endl;
    cout << "y: \'" << vector_a.get_y() << "\'," << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] cout << \"x: \" << vector_b.get_x() << endl;" << endl;
    cout << "] cout << \"y: \" << vector_b.get_y() << endl;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "x: \'" << vector_b.get_x() << "\'," << endl;
    cout << "y: \'" << vector_b.get_y() << "\'," << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}