#include "point.h"

void point::move_to(const int_fast16_t& x,
                    const int_fast16_t& y)
{
    this->x
        = x;
    this->y
        = y;
}

void point::translate(const int_fast16_t& x,
                      const int_fast16_t& y)
{
    this->x
        += x;
    this->y
        += y;
}