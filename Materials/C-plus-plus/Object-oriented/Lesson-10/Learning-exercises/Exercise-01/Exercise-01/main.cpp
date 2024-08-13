/*
    [ description of the first learning exercise ] :
        - Build a class to represent a color in RGB format.
        a color can be described by three integer values in
        the range 0-255. each value represents a color intensity
        red, green and blue. these three colors, when combined, can
        generate any color in the spectrum visible to the human eye.

        overwrite the multiplication operator to allow you
        to multiply colors:

        ]
            (Rx, Gx, Bx) * (Ry, Gy, By) = (Rx*Ry/255, Gx*Gy/255, Bx*By/255)
        ]

        provide friend functions for reading colors with cin
        and writing with cout.

        the display of a color should not show anything on
        the screen, it should only send an ANSI escape code
        changing the default color of the terminal so that the
        next displays use the chosen color. the color of the terminal
        is modified by sending a code to the cout:

        ]
            cout << "\x1b[38;2;R;G;Bm";  // R, G and B are numbers from 0-255;
            cout << "TEXT";              // TEXT in RGB color;
            cout << "\x1b[0m";           // return to default color;
        ]

        the terminal must support ANSI TrueColor escape codes
        for the above code to work. most modern terminals on Linux,
        Windows and MacOS have support. test the class with a program:

        ]
            int main()
            {
                Color blue { 0, 163, 215 };
                Color orange { 255, 170, 0 };

                cout << "Enter a color code:\n";
                Color color_a;

                cin >> color_a;

                Color green = blue * orange;

                cout << green << "GREEN" << endl;
                cout << color_a << "YOUR COLOR" << endl;
    
                cout << normal;
            }
        ]

        output example:

        ]
            Enter a color code:
            145 39 44

            GREEN
            YOUR COLOR
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] Enter a color code below (fmt: r g b)
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            145 39 44

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] auto green_a = blue_a * orange_a;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ...

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] cout << green_a << "GREEN" << reset << endl;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            GREEN

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] cout << user_color << "USER COLOR" << reset << endl;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            USER COLOR

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

#include "lazy_color/lazy_color.h"

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
    auto const reset
        = "\x1b[0m";

    auto blue_a
        = lazy_color
        {
            0,
            163,
            215
        };

    auto orange_a
        = lazy_color
        {
            255,
            170,
            0
        };
        
    auto user_color
        = lazy_color{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] Enter a color code below (fmt: r g b)" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cin >> user_color;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] auto green_a = blue_a * orange_a;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    auto green_a
        = blue_a * orange_a;
    
    cout << "..." << endl;

    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] cout << green_a << \"GREEN\" << reset << endl;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << green_a << "GREEN" << reset << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] cout << user_color << \"USER COLOR\" << reset << endl;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << user_color << "USER COLOR" << reset << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}