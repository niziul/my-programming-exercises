#include "c_point.h"

void c_point::translate(const int_fast16_t& x,
                        const int_fast16_t& y)
{
    this->x
        += x;
    this->y
        += y;
}