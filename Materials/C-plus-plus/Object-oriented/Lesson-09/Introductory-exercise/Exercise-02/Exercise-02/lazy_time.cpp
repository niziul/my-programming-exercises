#include "lazy_time.h"

lazy_time::lazy_time()
: hours
{
    0
},
  minutes
{
    0
}{}

lazy_time::lazy_time(const int& hours, const int& minutes)
: hours
{
    hours
},
  minutes
{
    minutes
}{}

void lazy_time::add(const int& hours, const int& minutes)
{
    this->hours
        += hours;
    this->minutes
        += minutes;

    this->hours
        += this->minutes / 60;
    this->minutes
        %= 60;
}

void lazy_time::reset(const int& hours, const int& minutes)
{
    this->hours
        = hours;
    this->minutes
        = minutes;
}

lazy_time lazy_time::operator+(const lazy_time& time_a)
const
{
    auto sum
        = lazy_time{};

    sum
    .hours
        = this->hours + time_a.hours;
    sum
    .minutes
        = this->minutes + time_a.minutes;

    sum
    .hours
        += sum.minutes / 60;
    sum
    .minutes
        %= 60;

    return sum;
}

void lazy_time::display()
const
{
    cout << this->hours << "h:" << this->minutes << "m" << endl;
}
