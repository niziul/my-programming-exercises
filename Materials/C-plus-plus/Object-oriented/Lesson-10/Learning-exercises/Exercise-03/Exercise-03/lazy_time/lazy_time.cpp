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

void lazy_time::remove(const int& hours, const int& minutes)
{
    this->hours
        -= hours;
    this->minutes
        -= minutes;

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

void lazy_time::operator+=(const int& hours)
{
    this->add(hours, 0);
}

void lazy_time::operator+=(const lazy_time& time_a)
{
    this->add(time_a.hours, time_a.minutes);
}

void lazy_time::operator-=(const int& hours)
{
    this->remove(hours, 0);
}

void lazy_time::operator-=(const lazy_time& time_a)
{
    this->remove(time_a.hours, time_a.minutes);
}

lazy_time lazy_time::operator+(const int& hours)
const
{
    auto sum
        = lazy_time{};

    sum
    .hours
        = this->hours + hours;
    sum
    .minutes
        = this->minutes + 0;

    sum
    .hours
        += sum.minutes / 60;
    sum
    .minutes
        %= 60;

    return sum;
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

lazy_time lazy_time::operator-(const int& hours)
const
{
    auto sub
        = lazy_time{};

    sub
    .hours
        = this->hours - hours;
    sub
    .minutes
        = this->minutes - 0;

    sub
    .hours
        += sub.minutes / 60;
    sub
    .minutes
        %= 60;

    return sub;
}

lazy_time lazy_time::operator-(const lazy_time& time_a)
const
{
    auto sub
        = lazy_time{};

    sub
    .hours
        = this->hours - time_a.hours;
    sub
    .minutes
        = this->minutes - time_a.minutes;

    sub
    .hours
        += sub.minutes / 60;
    sub
    .minutes
        %= 60;

    return sub;
}

bool lazy_time::operator==(const lazy_time& time_a) const
{
    return this->hours
           ==
           time_a.hours
           &&
           this->minutes
           ==
           time_a.minutes;
}


void lazy_time::display()
const
{
    cout << this->hours << "h:" << this->minutes << "m" << endl;
}


ostream& operator<<(ostream& ostream_a, const lazy_time& lazy_time_a)
{
    return ostream_a << lazy_time_a.hours << "h" << lazy_time_a.minutes << "m" << endl;
}

ostream& lazy_time::operator>>(ostream& ostream_a)
{
    return ostream_a << this->hours << "h" << this->minutes << "m" << endl;
}

ostream& operator>>(const lazy_time& lazy_time_a, ostream& ostream_a)
{
    return ostream_a << lazy_time_a.hours << "h" << lazy_time_a.minutes << "m" << endl;
}

istream& operator>>(istream& istream_a, lazy_time& lazy_time_a)
{
    return istream_a >> lazy_time_a.hours >> lazy_time_a.minutes;
}

lazy_time operator+(const int& hours, const lazy_time& time_a)
{
    auto add
        = lazy_time
        {
            time_a.hours + hours,
            time_a.minutes
        };

    return add;
}

lazy_time operator-(const int& hours, const lazy_time& time_a)
{
    auto sub
        = lazy_time
        {
            time_a.hours - hours,
            time_a.minutes
        };

    return sub;
}