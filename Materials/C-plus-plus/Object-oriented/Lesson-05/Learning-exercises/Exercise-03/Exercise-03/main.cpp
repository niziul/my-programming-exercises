/*
    [ description of third learning exercise ] :
        - Considering the rect class shown below, replace
        the create method with appropriate constructors. create
        a default constructor, a constructor that receives a two-
        point and and a constructor that receives 4 integer values.

        ]
            class Rect
            {
            public:
                void create(int ax, int ay, int bx, int by);
                void translate(int dx, int dy);

            private:
                Point a;
                Point b;
            };
        ]

    [ output ] :
        ```

        ```
*/

#include <iostream>

#include "point.h"
#include "rectangle.h"

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] auto rectangle_a = rectangle{};" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    auto rectangle_a
        = rectangle
        {
        };

    cout << "..." << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] auto rectangle_a = rectangle{point{},point{}};" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    auto rectangle_b
        = rectangle
        {
            point
            {
            },
            point
            {
            }
        };

    cout << "..." << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] auto rectangle_a = rectangle{0,0,0,0};" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    auto rectangle_c
        = rectangle
        {
            0,
            0,
            0,
            0
        };

    cout << "..." << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}
