#pragma once

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

using std::string;

using std::float_t;
using std::int_fast16_t;

class athlete
{
public:
    athlete()
    : name
    {
        ""
    },
      matches
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

    athlete(const string& name,
            const int_fast16_t& matches,
            const int_fast16_t& attempts)
    : name
    {
        name
    }, 
      matches
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
    const bool compare(const athlete&)
    const;

private:
    string name;
    int_fast16_t matches;
    int_fast16_t attempts;
    float_t percentage;
};

inline void athlete::display()
const
{
    cout << "- name      : \'" << name << "\';" << endl;
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