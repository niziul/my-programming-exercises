#include "game.h"

#include <iostream>

using std::cout;
using std::endl;

const float_t game::get_price() const
{
    return price;
}

const int_fast16_t game::get_hours() const
{
    return hours;
}

void game::update(float_t price)
{
    this->price
        = price;

    calculate();
}

void game::play(int_fast16_t hours)
{
    this->hours
        += hours;

    calculate();
}