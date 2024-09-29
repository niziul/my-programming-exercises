#include "lazy_clock.h"

lazy_clock::lazy_clock(const int& hours,
                       const int& minutes)
: hours
{
    hours
},
  minutes
{
    minutes
}{}

lazy_time lazy_clock::operator-(const lazy_clock& lazy_clock_a)
{
    auto sub
        = lazy_clock{};

    sub
    .hours
        = this->hours - lazy_clock_a.hours;
    sub
    .minutes
        = this->minutes - lazy_clock_a.minutes;

    if (sub.minutes < 0)
    {
        sub
        .minutes
            += 60;
        sub
        .hours
            -= 1;
    }

    return {
                sub.hours,
                sub.minutes
           };
}

lazy_clock operator-(const lazy_clock& lazy_clock_a, const lazy_clock& lazy_clock_b)
{
    auto sub
        = lazy_clock{};

    sub
    .hours
        = lazy_clock_a.hours - lazy_clock_b.hours;
    sub
    .minutes
        = lazy_clock_a.minutes - lazy_clock_b.minutes;

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

ostream& operator<<(ostream& ostream_a, const lazy_clock& lazy_clock_a)
{
    return ostream_a << lazy_clock_a.hours << "h" << lazy_clock_a.minutes << "m" << endl;
}
