/*
    [ description of the second learning exercise ] :
        - Expand the point class shown below to provide a default
        constructor and a constructor that receives the values for
        the x and y points. also create a print method to display the
        points on the screen.

        ]
            class point
            {
                void move_to(const int& px,
                             const int& py);
                void translate(const int& dx,
                               const int& dy);

            private:
                int x;
                int y;
            };
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] point_b.display();
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    x: '80';
                    y: '90';
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] point_b.move_to(120, 220);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] point_b.display();
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    x: '120';
                    y: '220';
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] point_b.translate(120, 220);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] point_b.display();
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    x: '240';
                    y: '440';
            }

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

#include "point.h"

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
    auto point_a
        = point
        {
        };

    auto point_b
        = point
        {
            80,
            90
        };

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] point_b.display();" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    point_b
        .display();

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] point_b.move_to(120, 220);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    point_b
        .move_to(120, 220);

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] point_b.display();" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    point_b
        .display();

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] point_b.translate(120, 220);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    point_b
        .translate(120, 220);

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] point_b.display();" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    point_b
        .display();

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}
