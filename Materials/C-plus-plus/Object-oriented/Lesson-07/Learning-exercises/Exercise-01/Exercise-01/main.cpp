/*
    [ description of the first learning exercise ] :
        - Considering the game class defined below, replace the
        compare method with inline methods that return the price,
        cost and number of hours played of a game. create a program
        that builds a vector of games and finds:

        a: the most played game;
        b: the game with the lowest cost per hour played;
        c: the game with the lowest price;

        ]
            class game
            {
            public:
                game();
                game(const string& name,
                     const float_t& price,
                     const int_fast16_t& hours = 0);
                ~game();

                const game& compare(const game&, const game& (*pf)(const game&, const game&))
                const;
                void update(float_t);
                void play(int_fast16_t);
                void display()
                const;

            private:
                string
                    name;
                float_t
                    price;
                float_t
                    hourly_cost;
                int_fast16_t
                    hours;

                void calculate();
            };
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] auto collection
            ]     =
            ]     {
            ]        game
            ]        {
            ]           "Oh Deer",
            ]           16.49f,
            ]           142
            ]        },
            ]        game
            ]        {
            ]           "Celeste",
            ]           5.99f,
            ]           120
            ]        },
            ]        game
            ]        {
            ]           "Disco Elysium",
            ]           7.54f,
            ]           40
            ]        }
            ]     };
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - constructor:  'Oh Deer'
            - constructor:  'Celeste'
            - constructor:  'Disco Elysium'

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] the most played game
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    name  : 'Oh Deer';
                    price : '16.49';
                    hours : '142';
                    hourly: '$0.116127/h';
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] the game with the lowest price
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    name  : 'Celeste';
                    price : '5.99';
                    hours : '120';
                    hourly: '$0.0499167/h';
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] the game with the lowest cost per hour played
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    name  : 'Celeste';
                    price : '5.99';
                    hours : '120';
                    hourly: '$0.0499167/h';
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
    cout << "]           \"Oh Deer\"," << endl;
    cout << "]           16.49f," << endl;
    cout << "]           142" << endl;
    cout << "]        }," << endl;

    cout << "]        game" << endl;
    cout << "]        {" << endl;
    cout << "]           \"Celeste\"," << endl;
    cout << "]           5.99f," << endl;
    cout << "]           120" << endl;
    cout << "]        }," << endl;

    cout << "]        game" << endl;
    cout << "]        {" << endl;
    cout << "]           \"Disco Elysium\"," << endl;
    cout << "]           7.54f," << endl;
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
                "Oh Deer",
                16.49f,
                142
            },
            game
            {
                "Celeste",
                5.99f,
                120
            },
            game
            {
                "Disco Elysium",
                7.54f,
                40
            }
        };

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] the most played game" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    auto most_played_game
        = collection.begin();

    for (auto& game_a : collection)
    {
        most_played_game
            = game_a.get_hours() > most_played_game->get_hours() ? &game_a : most_played_game;
    }

    most_played_game->display();

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] the game with the lowest price" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    auto game_with_the_lowest_price
        = collection.begin();

    for (auto& game_a : collection)
    {
        game_with_the_lowest_price
            = game_a.get_price() < game_with_the_lowest_price->get_price() ? &game_a : game_with_the_lowest_price;
    }

    game_with_the_lowest_price->display();

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] the game with the lowest cost per hour played" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    auto game_with_the_lowest_cost_per_hour_played
        = collection.begin();

    for (auto& game_a : collection)
    {
        game_with_the_lowest_cost_per_hour_played
            = game_a.get_hourly_cost() < game_with_the_lowest_cost_per_hour_played->get_hourly_cost() ? &game_a : game_with_the_lowest_cost_per_hour_played;
    }

    game_with_the_lowest_cost_per_hour_played->display();

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}