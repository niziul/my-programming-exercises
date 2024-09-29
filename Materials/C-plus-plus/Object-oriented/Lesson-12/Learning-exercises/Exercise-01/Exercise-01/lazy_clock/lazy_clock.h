#pragma once

#include <iostream>
#include <istream>
#include <ostream>

#include "../lazy_time/lazy_time.h"

using std::istream;
using std::ostream;

using std::cout;
using std::endl;

class lazy_clock
{
public:
    lazy_clock(const int& hours
                            = 0,
               const int& minutes
                            = 0);

    lazy_time operator-(const lazy_clock& lazy_clock_a);

    friend lazy_clock operator-(const lazy_clock& lazy_clock_a,
                                const lazy_clock& lazy_clock_b);

    friend ostream& operator<<(ostream& ostream_a,
                               const lazy_clock& lazy_clock_a);

private:
    int hours;
    int minutes;
};
