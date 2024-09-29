#pragma once

#include <iostream>
#include <istream>
#include <ostream>

using std::istream;
using std::ostream;

using std::cout;
using std::endl;

class lazy_time
{
public:
    lazy_time(const int& hours
                            = 0,
              const int& minutes
                            = 0);

    friend lazy_time operator-(const lazy_time& lazy_time_a,
                               const lazy_time& lazy_time_b);
    friend ostream& operator<<(ostream& ostream_a,
                               const lazy_time& lazy_time_a);

private:
    int hours;
    int minutes;
};