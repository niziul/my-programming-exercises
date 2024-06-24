/*
    [ description of the third fixation exercise ] :
        - The attributes of a constant object cannot be modified.
        build a program to test what happens if we try to call methods
        that do and do not modify the attributes of a constant object.

        ]
            const game ratchet {"Ratchet & Clank", 150.0f};
            ratchet.update(125.0f);
            ratchet.display();
        ]

        update the declaration of the display method, as shown below,
        and test again.

        ]
            void display() const;
        ]

        tip: always use const in methods that don't change objects.
        using const is a promise to the compiler that the method will
        not change the object's atributes.

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - constructor:  'Ratchet & Clank'
            {
                    name  : 'Ratchet & Clank';
                    price : '150';
                    hours : '0';
                    hourly: '150/h';
            }

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

    auto const ratchet
        = game
        {
            "Ratchet & Clank",
            150.0f
        };

    /*
        the object has type qualifiers that are not compatible with the member function
        "game::update" object type is: const game
    */
    //ratchet
    //    .update(125.0f);
    ratchet
        .display();

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}
