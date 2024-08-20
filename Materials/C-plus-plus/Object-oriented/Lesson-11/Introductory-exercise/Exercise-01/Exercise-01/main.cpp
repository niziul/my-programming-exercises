/*
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

    cout << vector_a;
    cout << vector_b;

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

    cout << vector_a;
    cout << vector_b;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}