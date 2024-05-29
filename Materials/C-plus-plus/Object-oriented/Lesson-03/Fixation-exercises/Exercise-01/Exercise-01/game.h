#pragma once

#include <string>

using std::string;

class Game
{
public:
    Game()
    {
    }

    ~Game()
    {
    }

    void purchase(const string&, float_t);
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