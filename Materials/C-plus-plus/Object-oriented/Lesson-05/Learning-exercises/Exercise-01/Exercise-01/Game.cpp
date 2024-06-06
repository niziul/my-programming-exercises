#include "Game.h"

#include <iostream>

using std::cout;
using std::endl;

void Game_a::update(float_t price)
{
    this->price
        = price;

    calculate();
}

void Game_a::play(int_fast16_t hours)
{
    this->hours
        += hours;

    calculate();
}

void Game_a::display()
const
{
    cout << "{" << endl;
    cout << "\tname  : \'" << this->name << "\';" << endl;
    cout << "\tprice : \'" << this->price << "\';" << endl;
    cout << "\thours : \'" << this->hours << "\';" << endl;
    cout << "\thourly: \'" << this->hourly_cost << "/h\';" << endl;
    cout << "}" << endl;
}