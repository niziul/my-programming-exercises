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
    lazy_time();
    lazy_time(const int& hours, const int& minutes = 0);

    void add(const int& hours, const int& minutes);
    void remove(const int& hours, const int& minutes);
    void reset(const int& hours, const int& minutes);
    void operator+=(const int& hours);
    void operator+=(const lazy_time& time_a);
    void operator-=(const int& hours);
    void operator-=(const lazy_time& time_a);
    lazy_time operator+(const int& hours)
    const;
    lazy_time operator+(const lazy_time& time_a)
    const;
    lazy_time operator-(const int& hours)
    const;
    lazy_time operator-(const lazy_time& time_a)
    const;
    bool operator==(const lazy_time& time_a)
    const;

    operator int();
    operator double();

    ostream& operator>>(ostream& ostream_a);
    friend ostream& operator<<(ostream& ostream_a, const lazy_time& lazy_time_a);
    friend ostream& operator>>(const lazy_time& lazy_time_a, ostream& ostream_a);

    friend istream& operator>>(istream& istream_a, lazy_time& lazy_time_a);

    friend lazy_time operator+(const int& hours, const lazy_time& time_a);
    friend lazy_time operator-(const int& hours, const lazy_time& time_a);

    void display()
    const;

private:
    int hours;
    int minutes;

};