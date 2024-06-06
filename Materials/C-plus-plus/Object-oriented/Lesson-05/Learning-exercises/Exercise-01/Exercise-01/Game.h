#pragma once

#include <iostream>
#include <string>

using std::string;
using std::float_t;
using std::int_fast16_t;

class Game_a
{
public:
    Game_a(const string& name,
           const float_t& price,
           const int_fast16_t& hours)
    {
        this->name
            = name;
        this->price
            = price;
        this->hourly_cost
            = price;
        this->hours
            = hours;

        calculate();
    };

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

inline void Game_a::calculate()
{
    if (hours <= 0)
    {
        return;
    }

    hourly_cost
        = price / hours;
};

