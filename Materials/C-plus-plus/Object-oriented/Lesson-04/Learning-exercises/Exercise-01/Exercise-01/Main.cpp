/*
    [ description of the first learning exercise ] :
        - Given a rect class that defines a rectangle by
        two points, as shown in the figure below, construct
        the implementation of the create and translate methods
        in such a way as to keep the size of the rectangle unchanged
        by the move operation.

        ]
            class c_rectangle
            {
            public:
                c_rectangle()
                {
                }
    
                void create(int, int, int, int);
                void translate(int, int);

            private:
                c_point point_a;
                c_point point_b;
            };
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] rectangle_a.translate(100, 100);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ...

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] rectangle_a.display_rectangle_size();
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    w: '50';
                    h: '25';
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] rectangle_a.display_rectangle_position();
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    x: '100, 150';
                    y: '100, 125';
            }

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

#include "c_rectangle.h"

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
    auto rectangle_a
        = c_rectangle(0,
                      0,
                      50,
                      25);

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] rectangle_a.translate(100, 100);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    rectangle_a
        .translate(100,
                   100);

    cout << "..." << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] rectangle_a.display_rectangle_size();" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    rectangle_a
        .display_rectangle_size();

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] rectangle_a.display_rectangle_position();" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    rectangle_a
        .display_rectangle_position();

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}
