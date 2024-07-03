/*
    [ description of the first fixation exercise ] :
        - In addition to the situations seen in class, the this
        pointer can also be used to call external functions from
        a class method. modify the compare method so that it makes
        comparisons using an external function that receives two constant
        references to a game.

        ]
            const game& game::most_played(const game& game_a, const game& game_b)
            {
                if (game_a.hours > game_b.hours)
                {
                    return game_a;
                }
                else
                {
                    return game_b;
                }
            };
            const game& game::lower_cost(const game& game_a, const game& game_b)
            {
                if (game_a.price < game_b.price)
                {
                    return game_a;
                }
                else
                {
                    return game_b;
                }
            };
        ]

        challenge: add a pointer to a function as a parameter of
        'compare', so that the comparison function can be chosen
        when the 'compare' method is called;

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
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
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - constructor:  'gears'
            - constructor:  'doom'
            - constructor:  'halo'

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] for (size_t i = 1; i < 3; i++)
            ] {
            ]     most_played_game
            ]         = &most_played_game->compare(collection.begin()[i], most_played);
            ] }
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    name  : 'doom';
                    price : '60';
                    hours : '120';
                    hourly: '$0.5/h';
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] for (size_t i = 1; i < 3; i++)
            ] {
            ]     lower_cost_game
            ]         = &lower_cost_game->compare(collection.begin()[i], lower_cost);
            ] }
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    name  : 'doom';
                    price : '60';
                    hours : '120';
                    hourly: '$0.5/h';
            }

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include "game.h"

using std::cin;
using std::cout;
using std::endl;
using std::streamsize;
using std::numeric_limits;

const game& most_played(const game&, const game&);
const game& lower_cost(const game&, const game&);

int main()
{
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
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
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    auto const collection
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

    auto most_played_game
        = collection.begin();
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] for (size_t i = 1; i < 3; i++)" << endl;
    cout << "] {" << endl;
    cout << "]     most_played_game" << endl;
    cout << "]         = &most_played_game->compare(collection.begin()[i], most_played);" << endl;
    cout << "] }" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    for (size_t i = 1; i < 3; i++)
    {
        most_played_game
            = &most_played_game->compare(collection.begin()[i], most_played);
    }

    most_played_game->display();
    
    cout << endl;

    auto lower_cost_game
        = collection.begin();

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] for (size_t i = 1; i < 3; i++)" << endl;
    cout << "] {" << endl;
    cout << "]     lower_cost_game" << endl;
    cout << "]         = &lower_cost_game->compare(collection.begin()[i], lower_cost);" << endl;
    cout << "] }" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    for (size_t i = 1; i < 3; i++)
    {
        lower_cost_game
            = &lower_cost_game->compare(collection.begin()[i], lower_cost);
    }

    lower_cost_game->display();

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

const game& most_played(const game& game_a, const game& game_b)
{
    return game_a.get_hours() > game_b.get_hours() ? game_a : game_b;
};

const game& lower_cost(const game& game_a, const game& game_b)
{
    return game_a.get_price() < game_b.get_price() ? game_a : game_b;
};