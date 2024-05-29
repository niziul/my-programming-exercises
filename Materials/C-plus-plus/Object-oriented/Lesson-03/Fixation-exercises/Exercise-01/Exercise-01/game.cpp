#include "game.h"

#include <iostream>

using std::cout;
using std::endl;

void Game::purchase(const string& name, float_t price)
{
    this->name = name;
    this->price = price;
    this->hourly_cost = price;
    this->hours = 0;
}

void Game::update(float_t price)
{
    this->price = price;

    this->calculate();
}

void Game::play(int_fast16_t play_time)
{
    this->hours += play_time;

    this->calculate();
}

void Game::display()
{
    cout << "{" << endl;
    cout << "\tname: \'" << this->name << "\';" << endl;
    cout << "\tprice: \'" << this->price << "\';" << endl;
    cout << "\thours: \'" << this->hours << "\';" << endl;
    cout << "\thourly_cost: \'" << this->hourly_cost << "\';" << endl;
    cout << "}" << endl;
}