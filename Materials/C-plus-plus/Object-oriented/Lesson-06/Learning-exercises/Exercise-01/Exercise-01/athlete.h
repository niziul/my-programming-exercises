#pragma once

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::float_t;
using std::int_fast16_t;

class athlete
{
public:
    athlete()
    : matches
    {
        0
    },
      attempts
    {
        0
    },
      percentage
    {
        0
    }{};

    athlete(const int_fast16_t& matches,
            const int_fast16_t& attempts)
    : matches
    {
        matches
    },
      attempts
    {
        attempts
    },
      percentage
    {
        0
    }
    {
        calculate();
    };

    void display()
    const;
    void calculate();
    void accumulate(const athlete&);

private:
    int_fast16_t matches;
    int_fast16_t attempts;
    float_t percentage;
};

inline void athlete::display()
const
{
    cout << "- matches   : \'" << matches << "\';" << endl;
    cout << "- attempts  : \'" << attempts << "\';" << endl;
    cout << "- percentage: \'" << percentage << "\';" << endl;
};

inline void athlete::calculate()
{
    if (attempts == 0)
    {
        percentage = 0;
    }
    else
    {
        percentage = 100.0f * matches / attempts;
    }
};
