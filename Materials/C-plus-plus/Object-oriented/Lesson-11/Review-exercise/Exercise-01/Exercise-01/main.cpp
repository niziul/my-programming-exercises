/*
    [ description of the first review exercise ] :
        - C++ programmers have a lot of flexibility when it comes
        to designing their classes. to exercise this feature of the
        language, modify the vector class seen in the last lesson, replacing
        all the operations, which were implemented with overloaded operators
        and friendly functions, with conventional methods.

        ]
            #pragma once

            #include <ostream>

            using std::ostream;

            class lazy_vector2
            {
            public:
                enum eCoordinates
                {
                    rectangular,
                    polar
                };

                lazy_vector2();
                lazy_vector2(double value_a,
                             double value_b,
                             eCoordinates coordinate_type = rectangular);

                double get_angle()
                const
                {
                    return this->angle;
                }
                double get_magnitude()
                const
                {
                    return this->magnitude;
                }
                void set_coordinate_type(const eCoordinates& coordinate_type)
                {
                    this->type = coordinate_type;
                }

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
                double angle;
                double magnitude;

                eCoordinates type;

                void set_x();
                void set_y();
                void set_angle();
                void set_magnitude();

            };
        ]

        build a program to test object creation and class methods.
        what are the advantages and disadvantages of each approach?
        - none; it's just annoying. 

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
            ] vector_a.set_coordinate_type(lazy_vector2::polar);
            ] vector_b.set_coordinate_type(lazy_vector2::polar);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ...

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

    vector_a
        .display();
    vector_b
        .display();

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] vector_a.set_coordinate_type(lazy_vector2::polar);" << endl;
    cout << "] vector_b.set_coordinate_type(lazy_vector2::polar);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    vector_a
        .set_coordinate_type(lazy_vector2::polar);
    vector_b
        .set_coordinate_type(lazy_vector2::polar);

    cout << "..." << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] cout << vector_a;" << endl;
    cout << "] cout << vector_b;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    vector_a
        .display();
    vector_b
        .display();

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}