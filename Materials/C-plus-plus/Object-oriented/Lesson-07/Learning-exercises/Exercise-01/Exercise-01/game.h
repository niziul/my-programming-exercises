#pragma once

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::float_t;
using std::int_fast16_t;

class game
{
public:
    game()
    : name
    {
        string{}
    },
      price
    {
        float_t{}
    },
       hourly_cost
    {
        float_t{}
    },
      hours
    {
        int_fast16_t{}
    }
    {
        calculate();

        cout << "- constructor:  \'" << name << "\'" << endl;
    };

    game(const string& name,
         const float_t& price,
         const int_fast16_t& hours = 0)
    : name
    {
        name
    },
      price
    {
        price
    },
      hourly_cost
    {
        price
    },
      hours
    {
        hours
    }
    {
        calculate();

        cout << "- constructor:  \'" << name << "\'" << endl;
    };

    ~game()
    {
        cout << "- deconstructor: \'" << name << "\'" << endl;
    };

    const int_fast16_t get_hours()
    const;
    const float_t get_price()
    const;
    const float_t get_hourly_cost()
    const;

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

inline const int_fast16_t game::get_hours()
const
{
    return hours;
};

inline const float_t game::get_price()
const
{
    return price;
};

inline const float_t game::get_hourly_cost()
const
{
    return hourly_cost;
};

inline void game::calculate()
{
    if (hours <= 0)
    {
        return;
    }

    hourly_cost
        = price / hours;
};

inline void game::display()
const
{
    cout << "{" << endl;
    cout << "\tname  : \'" << this->name << "\';" << endl;
    cout << "\tprice : \'" << this->price << "\';" << endl;
    cout << "\thours : \'" << this->hours << "\';" << endl;
    cout << "\thourly: \'$" << this->hourly_cost << "/h\';" << endl;
    cout << "}" << endl;
}
