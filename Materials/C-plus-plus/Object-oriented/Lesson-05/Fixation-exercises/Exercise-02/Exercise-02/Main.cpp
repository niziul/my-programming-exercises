/*
    [ description of the second fixation exercise ] :
        - Modify the game class shown below so that a game
        can be constructed without a name and without a value.
        do this in two different ways:

        a: change the constructor to use standard arguments;
        b: create a default constructor;

        ]
            #pragma once

            #include <string>

            using std::string;

            class Game
            {
            public:
                Game(const string& name, float_t price)
                {
                }

                void update(float_t);
                void play(int_fast16_t);
                void display();

            private:
                string name;
                float_t price;
                int_fast16_t hours;
                float_t hourly_cost;

                void calculate()
                {
                    if (hours > 0)
                    {
                        hourly_cost
                            = price / hours;
                    }
                }
            };
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] auto game_a1 = game_a{ "gow", 70 };
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ...

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] game_a1.display();
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    name: 'gow';
                    price: '70';
                    hours: '0';
                    hourly_cost: '70';
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] game_b game_b1;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ...

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] game_b1.display();
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    name: '';
                    price: '0';
                    hours: '0';
                    hourly_cost: '0';
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] game_c game_c1;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ...

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] game_c1.display();
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    name: '';
                    price: '-1.07374e+08';
                    hours: '-858993460';
                    hourly_cost: '-1.07374e+08';
            }

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

#include "game_a.h"
#include "game_b.h"
#include "game_c.h"

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
    cout << "] auto game_a1 = game_a{ \"gow\", 70 };" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    auto game_a1
        = game_a
        {
            "gow",
            70
        };

    cout << "..." << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] game_a1.display();" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    game_a1
        .display();

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] game_b game_b1;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    game_b game_b1;

    cout << "..." << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] game_b1.display();" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    game_b1
        .display();

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] game_c game_c1;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    game_c game_c1;

    cout << "..." << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] game_c1.display();" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    game_c1
        .display();

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}