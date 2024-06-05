#include "game_a.h"

#include <iostream>

using std::cout;
using std::endl;

void game_a::update(float_t price)
{
    this->price
        = price;

    this->calculate();
}

void game_a::play(int_fast16_t hours)
{
    this->hours
        += hours;

    this->calculate();
}

void game_a::display()
const
{
    cout << "{" << endl;
    cout << "\tname: \'" << this->name << "\';" << endl;
    cout << "\tprice: \'" << this->price << "\';" << endl;
    cout << "\thours: \'" << this->hours << "\';" << endl;
    cout << "\thourly_cost: \'" << this->hourly_cost << "\';" << endl;
    cout << "}" << endl;
}