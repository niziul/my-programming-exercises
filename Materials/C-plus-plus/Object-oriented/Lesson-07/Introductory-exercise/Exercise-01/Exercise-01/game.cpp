#include "game.h"

#include <iostream>

using std::cout;
using std::endl;

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