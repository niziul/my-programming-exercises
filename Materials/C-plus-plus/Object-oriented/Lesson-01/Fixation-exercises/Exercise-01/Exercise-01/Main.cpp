/*
    [ description of the first fixation exercise ] :
        - Considering the game struct defined below, implement
        the code for the functions and build a program to test the
        creation of a variable of type game. also test the use of the
        functions.

        ]
            struct game
            {
                string name;
                float price;
                int hours;
                float hourly_cost;
            };

            game purchase(const string& title, float price);
            void update(game&, float hourly_cost);
            void play(game&, int time);
            void display(const game&);

            int main()
            {

            }
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] purchase("GTAIV", 70);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ...

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] update(game, 90);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ...

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] play(game, 12);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ...

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] display(game);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    name  : 'GTAIV';
                    price : '85';
                    hour  : '10';
                    cost  : '7';
            }

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

using std::string;

using std::streamsize;
using std::numeric_limits;

struct st_game
{
    string name;
    float_t price;
    float_t cost;
    int_fast16_t hour;
};

st_game purchase(const string&, const float_t);
void update(st_game&, const float_t);
void play(st_game&, const int_fast16_t);
void display(const st_game&);

int main()
{
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] purchase(\"GTAIV\", 70);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    auto game
        = purchase("GTAIV", 70);

    cout << "..." << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] update(game, 90);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    update(game, 85);

    cout << "..." << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] play(game, 12);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    play(game, 10);

    cout << "..." << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] display(game);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    display(game);

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

st_game purchase(const string& title, const float_t price)
{
    return st_game
           {
               title,
               price,
               price,
               0
           };
}

void update(st_game& game, const float_t price)
{
    game
    .price
        = price;

    if (game.hour > 0)
    {
        game
        .cost
            = game.cost / game.hour;
    }
}

void play(st_game& game, const int_fast16_t time)
{
    game
    .hour
        += time;

    if (game.hour > 0)
    {
        game
        .cost
            = game.cost / game.hour;
    }
}

void display(const st_game& game)
{
    cout << "{" << endl;
    cout << "\tname  : \'" << game
                                .name << "\';" << endl;
    cout << "\tprice : \'" << game
                                .price << "\';" << endl;
    cout << "\thour  : \'" << game
                                .hour << "\';" << endl;
    cout << "\tcost  : \'" << game
                                .cost << "\';" << endl;
    cout << "}" << endl;
}
