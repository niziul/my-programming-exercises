#include "lazy_time.h"

lazy_time::lazy_time(const int& hours,
                     const int& minutes)
: hours
{
    hours
},
  minutes
{
    minutes
}{}

lazy_time operator-(const lazy_time& lazy_time_a, const lazy_time& lazy_time_b)
{
    auto sub
        = lazy_time{};

    sub
    .hours
        = lazy_time_a.hours - lazy_time_b.hours;
    sub
    .minutes
        = lazy_time_a.minutes - lazy_time_b.minutes;

    if (sub.minutes < 0)
    {
        sub
        .minutes
            += 60;
        sub
        .hours
            -= 1;
    }

    return sub;
}

ostream& operator<<(ostream& ostream_a, const lazy_time& lazy_time_a)
{
    return ostream_a << lazy_time_a.hours << "h" << lazy_time_a.minutes << "m" << endl;
}
