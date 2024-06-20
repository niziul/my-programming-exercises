/*
    [ description of the first fixation exercise ] :
        - Some compilers implement the explict constructor call
        notation by creating temporary objects followed by and assignment,
        even when initializing new objects.

        ]
            game sackboy = game("Sackboy", 150.0f); // creates temporary object?

            game horizon;
            horizon = game("Horizon", 199.0f);      // temporary object;
        ]

        test whether your compiler does this by adding messages
        to the constructor and destructor of the game class. test
        this with the object initialization and assignment scenarios
        shown above.

        tip: prefer initialization over attribution for the best
        efficiency;.

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] auto sackboy = game{"Sackboy", 150.0f};
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - constructor

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] auto horizon = game{};
            ] horizon = game{"Horizon", 199.0f};
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - constructor
            - constructor
            - deconstructor

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
    cout << "] auto sackboy = game{\"Sackboy\", 150.0f};" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    auto sackboy
        = game
        {
            "Sackboy",
            150.0f
        };

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] auto horizon = game{};" << endl;
    cout << "] horizon = game{\"Horizon\", 199.0f};" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    auto horizon
        = game{};
    horizon
        = game
        {
            "Horizon",
            199.0f
        };

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}