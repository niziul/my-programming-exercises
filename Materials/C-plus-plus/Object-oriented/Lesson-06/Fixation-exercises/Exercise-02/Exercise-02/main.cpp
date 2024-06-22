/*
    [ description of the second fixation exercise ] :
        - Create a program to find out the order in which local
        variable are constructed and destroyed. to do this, create
        objects of a class that display messages in their constructor
        and deconstructor.

        ]
            game sackboy
                = 
                {
                    "sackboy",
                    150.0f
                };

            game horizon
                = 
                {
                    "horizon",
                    199.0f
                };

            game spiderman
                = 
                {
                    "spiderman",
                    200.0f
                };
        ]

        tip: objects allocated on stack are destroyed in reverse
        order of their creation.

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] constructor
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - constructor:  'sackboy'
            - constructor:  'horizon'
            - constructor:  'spiderman'

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] deconstructor
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - deconstructor: 'spiderman'
            - deconstructor: 'horizon'
            - deconstructor: 'sackboy'

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include "game.h"

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
    cout << "] constructor" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    {
        auto sackboy
            = game
            {
                "sackboy",
                150.0f
            };

        auto horizon
            = game
            {
                "horizon",
                199.0f
            };

        auto spiderman
            = game
            {
                "spiderman",
                200.0f
            };

        cout << endl;

        cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
        cout << "] deconstructor" << endl;
        cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

        cout << endl;
    }

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}
