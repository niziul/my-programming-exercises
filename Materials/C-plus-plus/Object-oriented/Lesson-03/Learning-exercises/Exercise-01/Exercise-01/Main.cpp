/*
    [ description of the first learning exercise ] :
        - If in the problem in the previous question 'x'
        and 'y' values were coordinates of a screen with
        a resolution of '1920px' horizontally by '1080px'
        vertically, and it was necessary to keep the value
        of the 'x' coordinate always in the range [0 - 1919]
        and the 'u' coordinate always between [0 - 1079], it
        would make sense to encapsulate the data to avoid unwanted
        changes outside the range.

        create a class the encapsulates the data and
        provides a public interface to manipulate the
        data securely.

        the class must have attributes for:
        ]
            position x;
            position y;
        ]

        the class must have the methods:
        ]
            translate: move coordinates by dx and dy values;
            move_to(): move the coordinates to values and px and py;
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            {
            width : '1920';
            height: '1080';
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] point.translate(20, 20);
            ] point.translate(20, 20);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            x: 40
            y: 40

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] point.move_to(15, 15);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            x: 15
            y: 15

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
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
    auto point
        = c_point(1920, 1080);

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;
    
    cout << "{" << endl;
    cout << "width : \'" << point.get_width() << "\';"<< endl;
    cout << "height: \'" << point.get_height() << "\';"<< endl;
    cout << "}" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] point.translate(20, 20);" << endl;
    cout << "] point.translate(20, 20);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;

    point
        .translate(20, 20);

    point
        .translate(20, 20);

    cout << "x: " << point.get_x() << endl; 
    cout << "y: " << point.get_y() << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] point.move_to(15, 15);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    point
        .move_to(15, 15);

    cout << "x: " << point.get_x() << endl;
    cout << "y: " << point.get_y() << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}