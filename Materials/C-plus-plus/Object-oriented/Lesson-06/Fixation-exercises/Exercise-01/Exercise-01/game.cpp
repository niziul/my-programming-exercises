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

void game::display()
const
{
    cout << "{" << endl;
    cout << "\tname  : \'" << this->name << "\';" << endl;
    cout << "\tprice : \'" << this->price << "\';" << endl;
    cout << "\thours : \'" << this->hours << "\';" << endl;
    cout << "\thourly: \'" << this->hourly_cost << "/h\';" << endl;
    cout << "}" << endl;
}