/*
    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] auto collection
            ]     =
            ]     {
            ]        game
            ]        {
            ]           "gears",
            ]           90.0f,
            ]           30
            ]        },
            ]        game
            ]        {
            ]           "doom",
            ]           60.0f,
            ]           120
            ]        },
            ]        game
            ]        {
            ]           "halo",
            ]           80.0f,
            ]           40
            ]        }
            ]     };
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - constructor:  'gears'
            - constructor:  'doom'
            - constructor:  'halo'

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] for (auto& game : collection)
            ] {
            ]     game.display();
            ] }
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    name  : 'gears';
                    price : '90';
                    hours : '30';
                    hourly: '$3/h';
            }
            {
                    name  : 'doom';
                    price : '60';
                    hours : '120';
                    hourly: '$0.5/h';
            }
            {
                    name  : 'halo';
                    price : '80';
                    hours : '40';
                    hourly: '$2/h';
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] auto most_played_game
            ]     = collection.begin();
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] for (size_t i = 1; i < 3; i++)
            ] {
            ]     most_played_game
            ]         = &most_played_game->compare(collection.begin()[i]);
            ] }
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] most_played_game->display();
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    name  : 'doom';
                    price : '60';
                    hours : '120';
                    hourly: '$0.5/h';
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
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] auto collection" << endl;
    cout << "]     =" << endl;
    cout << "]     {" << endl;

    cout << "]        game" << endl;
    cout << "]        {" << endl;
    cout << "]           \"gears\"," << endl;
    cout << "]           90.0f," << endl;
    cout << "]           30" << endl;
    cout << "]        }," << endl;

    cout << "]        game" << endl;
    cout << "]        {" << endl;
    cout << "]           \"doom\"," << endl;
    cout << "]           60.0f," << endl;
    cout << "]           120" << endl;
    cout << "]        }," << endl;

    cout << "]        game" << endl;
    cout << "]        {" << endl;
    cout << "]           \"halo\"," << endl;
    cout << "]           80.0f," << endl;
    cout << "]           40" << endl;
    cout << "]        }" << endl;

    cout << "]     };" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    auto collection
        =
        {
            game
            {
                "gears",
                90.0f,
                30
            },
            game
            {
                "doom",
                60.0f,
                120
            },
            game
            {
                "halo",
                80.0f,
                40
            }
        };

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] for (auto& game : collection)" << endl;
    cout << "] {" << endl;
    cout << "]     game.display();" << endl;
    cout << "] }" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    for (auto& game : collection)
    {
        game.display();
    }

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] auto most_played_game" << endl;
    cout << "]     = collection.begin();" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    auto most_played_game
        = collection.begin();

    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] for (size_t i = 1; i < 3; i++)" << endl;
    cout << "] {" << endl;
    cout << "]     most_played_game" << endl;
    cout << "]         = &most_played_game->compare(collection.begin()[i]);" << endl;
    cout << "] }" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    
    for (size_t i = 1; i < 3; i++)
    {
        most_played_game
            = &most_played_game->compare(collection.begin()[i]);
    }

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] most_played_game->display();" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    most_played_game->display();

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}
