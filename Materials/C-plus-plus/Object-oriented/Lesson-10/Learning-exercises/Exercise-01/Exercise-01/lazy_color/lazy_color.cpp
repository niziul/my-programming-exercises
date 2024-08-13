#include "lazy_color.h"

lazy_color::lazy_color(const uint_fast8_t& r,
                       const uint_fast8_t& g,
                       const uint_fast8_t& b)
: r
{
    r
},
  g
{
    g
},
  b
{
    b
}{}

void lazy_color::operator*=(const lazy_color& lazy_color_a)
{
    this->r
        = (uint_fast8_t)((this->r * lazy_color_a.r) / 255);
    this->g
        = (uint_fast8_t)((this->g * lazy_color_a.g) / 255);
    this->b
        = (uint_fast8_t)((this->b * lazy_color_a.b) / 255);
}

lazy_color lazy_color::operator*(const lazy_color& lazy_color_a)
const
{
    auto mult
        = lazy_color
        {
            (uint_fast8_t)((this->r * lazy_color_a.r) / 255),
            (uint_fast8_t)((this->g * lazy_color_a.g) / 255),
            (uint_fast8_t)((this->b * lazy_color_a.b) / 255),
        };

    return mult;
}

ostream& operator<<(ostream& ostream_a, const lazy_color& lazy_color_a)
{
    ostream_a << "\x1b[38;2;";
    ostream_a << (int)lazy_color_a.r << ";";
    ostream_a << (int)lazy_color_a.g << ";";
    ostream_a << (int)lazy_color_a.b << "m";

    return ostream_a;
}

istream& operator>>(istream& istream_a, lazy_color& lazy_color_a)
{
    auto static temp
        = int{};

    istream_a >> temp;
    lazy_color_a.r = temp;

    istream_a >> temp;
    lazy_color_a.g = temp;

    istream_a >> temp;
    lazy_color_a.b = temp;

    return istream_a;
}
