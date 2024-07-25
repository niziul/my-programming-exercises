#pragma once

#include <iostream>

using std::cout;
using std::endl;

class lazy_time
{
public:
    lazy_time();
    lazy_time(const int& hours, const int& minutes = 0);

    void add(const int& hours, const int& minutes);
    void reset(const int& hours, const int& minutes);
    lazy_time operator+(const lazy_time& time_a)
    const;
    void display()
    const;

private:
    int hours;
    int minutes;

};