#pragma once

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::float_t;
using std::int_fast16_t;

struct game
{
    string
        name;
    float_t
        price;
    float_t
        hourly_cost;
    int_fast16_t
        hours;
};

static void calculate(game* game_a)
{
    if (game_a->hours <= 0)
    {
        return;
    }

    game_a->hourly_cost
        = game_a->price / game_a->hours;
};

static void update(game* game_a, float_t price)
{
    game_a->price
        = price;

    calculate(game_a);
}

static void play(game* game_a, int_fast16_t hours)
{
    game_a->hours
        += hours;

    calculate(game_a);
}

static void display(const game* game_a)
{
    cout << "{" << endl;
    cout << "\tname  : \'" << game_a->name << "\';" << endl;
    cout << "\tprice : \'" << game_a->price << "\';" << endl;
    cout << "\thours : \'" << game_a->hours << "\';" << endl;
    cout << "\thourly: \'" << game_a->hourly_cost << "/h\';" << endl;
    cout << "}" << endl;
}