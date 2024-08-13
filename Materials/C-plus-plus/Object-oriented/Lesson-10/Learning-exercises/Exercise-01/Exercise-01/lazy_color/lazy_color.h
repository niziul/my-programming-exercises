#pragma once

#include <stdint.h>

#include <ostream>
#include <istream>

using std::ostream;
using std::istream;

class lazy_color
{
public:
    lazy_color(const uint_fast8_t& r = 0,
               const uint_fast8_t& g = 0,
               const uint_fast8_t& b = 0);

    void operator*=(const lazy_color& lazy_color_a);
    lazy_color operator*(const lazy_color& lazy_color_a)
    const;

    friend ostream& operator<<(ostream& ostream_a, const lazy_color& lazy_color_a);
    friend istream& operator>>(istream& istream_a, lazy_color& lazy_color_a);

private:
    uint_fast8_t r;
    uint_fast8_t g;
    uint_fast8_t b;
};

